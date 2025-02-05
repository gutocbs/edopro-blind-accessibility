#ifndef TOLKCONTROLLER_H
#define TOLKCONTROLLER_H

#include "../Readers/tolk/Tolk.h"
#include "IScreenReader.h"

class TolkController : public IScreenReader
{
public:
	TolkController() {
		Tolk_Load();
	};
	~TolkController() {
		Tolk_Unload();
	};
	void readScreen();

private:

	void textToSpeech(std::wstring string, bool saveHistory);
	void textToBraile(std::wstring string, bool saveHistory);
	void setHelpMessage(std::wstring string);
	void buildMessage(std::wstring string);
	void cleanBuiltMessage();
	std::wstring getBuiltMessage();
	std::wstring getLastMessage();
	void readHelpMessage();
	void readLastMessage();
	std::wstring lastMessage;
	std::wstring helpMessage;
	std::wstring builtMessage;


};
#endif
