#!/usr/bin/env bash

set -euo pipefail

PICS_URL=${PICS_URL:-""}
FIELDS_URL=${FIELDS_URL:-""}
COVERS_URL=${COVERS_URL:-""}
DISCORD_APP_ID=${DISCORD_APP_ID:-""}
UPDATE_URL=${UPDATE_URL:-""}
ARCH=${ARCH:-"x64"}

if [[ "$TRAVIS_OS_NAME" == "windows" ]]; then
	if [[ -z "${VS_GEN:-""}" ]]; then
		./premake5 vs2017 --no-core=true --oldwindows=true --sound=sfml --no-joystick=true --pics=\"$PICS_URL\" --fields=\"$FIELDS_URL\" --covers=\"$COVERS_URL\" --discord=\"$DISCORD_APP_ID\" --update-url=\"$UPDATE_URL\"
		msbuild.exe -m -p:Configuration=$BUILD_CONFIG -p:Platform=Win32 ./build/ygo.sln -t:ygoprodll -verbosity:minimal -p:EchoOff=true
		python.exe ./travis/patcher.py bin/$BUILD_CONFIG/ygoprodll.exe
	else
		./premake5 $VS_GEN --no-core=true --sound=sfml --no-joystick=true --pics=\"$PICS_URL\" --fields=\"$FIELDS_URL\" --covers=\"$COVERS_URL\" --discord=\"$DISCORD_APP_ID\" --update-url=\"$UPDATE_URL\"
		msbuild.exe -m -p:Configuration=$BUILD_CONFIG -p:Platform=Win32 ./build/ygo.sln -t:ygoprodll -verbosity:minimal -p:EchoOff=true
	fi
	exit 0
fi
PREMAKE_FLAGS=""
if [[ -n "${ARCH:-""}" ]]; then
	PREMAKE_FLAGS=" --architecture=$ARCH"
fi
./premake5 gmake2 $PREMAKE_FLAGS --no-core=true --vcpkg-root=$VCPKG_ROOT --sound=sfml --no-joystick=true --pics=\"$PICS_URL\" --fields=\"$FIELDS_URL\" --covers=\"$COVERS_URL\" --discord=\"$DISCORD_APP_ID\" --update-url=\"$UPDATE_URL\"
if [[ "$TRAVIS_OS_NAME" == "linux" ]]; then
    make -Cbuild -j2 config="${BUILD_CONFIG}_${ARCH}" ygoprodll
fi
if [[ "$TRAVIS_OS_NAME" == "osx" ]]; then
    AR=ar make -Cbuild -j3 config="${BUILD_CONFIG}_${ARCH}" ygoprodll
fi
