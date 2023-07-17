#include "PreDuelMenu.h"

#include "AccessibilityMenu.h"

#include <Control/EventHandler.h>

namespace ygo {
	PreDuelMenuHandler* PreDuelMenuHandler::_menuHandler = nullptr;
	std::vector<int> PreDuelMenuHandler::preDuelMenu = {
		MenuType::PlayerDuel::PD_START_DUEL, MenuType::PlayerDuel::PD_SELECT_DECK,
		MenuType::PlayerDuel::PD_PLAYER_READY, MenuType::SinglePlayerDuel::SP_AI_MENU
	};

	PreDuelMenuHandler::PreDuelMenuHandler(const int activeMenu, const std::vector<int>& selectedMenu): BaseMenu{ activeMenu, selectedMenu }
	{}

	BaseMenu* PreDuelMenuHandler::GetMenu()
	{
		if (_menuHandler == nullptr)
			_menuHandler = new PreDuelMenuHandler();
		return _menuHandler;
	}

	bool PreDuelMenuHandler::IsActive()
	{
		bool isActive = false;
		if (mainGame->btnHostPrepWindBot->isEnabled() && mainGame->btnHostPrepWindBot->isTrulyVisible())
			isActive = true;
		return isActive;
	}

	void PreDuelMenuHandler::ReadMenuAndValue()
	{
		std::wstring menuValue = std::wstring();
		if(_activeMenu == _selectedMenu)
		{
			if(_currentMenu == MenuType::PlayerDuel::PD_START_DUEL)
				menuValue = gDataManager->GetAccessibilityString(MenuType::PlayerDuel::PD_START_DUEL).data();
			else if(_currentMenu == MenuType::PlayerDuel::PD_SELECT_DECK)
				menuValue = fmt::format(L"{}: {}", gDataManager->GetAccessibilityString(MenuType::PlayerDuel::PD_SELECT_DECK).data(), mainGame->cbDeckSelect->getItem(mainGame->cbDeckSelect->getSelected()));
			else if(_currentMenu == MenuType::PlayerDuel::PD_SELECT_DECK)
				menuValue = gDataManager->GetAccessibilityString(MenuType::PlayerDuel::PD_SELECT_DECK).data();
			else if(_currentMenu == MenuType::PlayerDuel::PD_PLAYER_READY)
				menuValue = gDataManager->GetAccessibilityString(MenuType::PlayerDuel::PD_PLAYER_READY).data();
			else if(_currentMenu == MenuType::SinglePlayerDuel::SP_AI_MENU)
				menuValue = gDataManager->GetAccessibilityString(MenuType::SinglePlayerDuel::SP_AI_MENU).data();
		}
		if(!menuValue.empty())
			ScreenReader::getReader()->readScreen(menuValue);
	};

	void PreDuelMenuHandler::KeyInputEvent(const irr::SEvent& event)
	{
		switch (event.KeyInput.Key) {
			case irr::KEY_LEFT:
			case irr::KEY_RIGHT: {
				if (!event.KeyInput.PressedDown && !mainGame->HasFocus(irr::gui::EGUIET_EDIT_BOX))
				{
					if (_selectedMenu != preDuelMenu)
						_selectedMenu = preDuelMenu;
					SetSelectedMenu(event.KeyInput.Key);
				}
				break;
			}
			case irr::KEY_RETURN: {
				if (!event.KeyInput.PressedDown) {
					if (_activeMenu != _selectedMenu)
						SetSelectedMenu();
					if (_currentMenu == MenuType::PlayerDuel::PD_START_DUEL && mainGame->btnHostPrepStart->isEnabled()) {
						ClickButton(mainGame->btnHostPrepStart);
					}
					else if (_currentMenu == MenuType::PlayerDuel::PD_START_DUEL && !mainGame->btnHostPrepStart->isEnabled() && mainGame->btnHostPrepStart->isTrulyVisible()) {
						std::wstring nvdaString;
						if (_previousMenu == MenuType::MainMenu::MM_SP_DUEL)
							nvdaString = gDataManager->GetAccessibilityString(227).data();
						else
							nvdaString = gDataManager->GetAccessibilityString(228).data();
						ScreenReader::getReader()->readScreen(nvdaString);
					}
					else if (_currentMenu == MenuType::PlayerDuel::PD_PLAYER_READY && mainGame->btnHostPrepReady->isTrulyVisible() && mainGame->btnHostPrepReady->isEnabled()) {
						ClickButton(mainGame->btnHostPrepReady);
					}
					else if (_currentMenu == MenuType::PlayerDuel::PD_PLAYER_READY && mainGame->btnHostPrepNotReady->isEnabled()) {
						ClickButton(mainGame->btnHostPrepNotReady);
					}
					else if (_currentMenu == MenuType::PlayerDuel::PD_SELECT_DECK && mainGame->cbDeckSelect->isTrulyVisible()) {
						mainGame->env->setFocus(mainGame->cbDeckSelect);
						const std::wstring nvdaString = fmt::format(gDataManager->GetAccessibilityString(192).data(), mainGame->cbDeckSelect->getItem(mainGame->cbDeckSelect->getSelected()));
						ScreenReader::getReader()->readScreen(nvdaString);
					}
					else if (_currentMenu == MenuType::SinglePlayerDuel::SP_AI_MENU && mainGame->btnHostPrepWindBot->isTrulyVisible() && mainGame->btnHostPrepWindBot->isEnabled()) {
						ClickButton(mainGame->btnHostPrepWindBot);
					}
					else if (_currentMenu == MenuType::OnlineDuel::OD_DUEL_MODE && mainGame->btnHostPrepDuelist->isTrulyVisible() && mainGame->btnHostPrepDuelist->isEnabled()) {
						ClickButton(mainGame->btnHostPrepDuelist);
					}
					else if (_currentMenu == MenuType::OnlineDuel::OD_DUEL_MODE && mainGame->btnHostPrepDuelist->isTrulyVisible() && !mainGame->btnHostPrepDuelist->isEnabled()) {
						ScreenReader::getReader()->readScreen(gDataManager->GetAccessibilityString(229).data());
					}
					else if (_currentMenu == MenuType::OnlineDuel::OD_SPECTATE_MODE && mainGame->btnHostPrepOB->isTrulyVisible() && mainGame->btnHostPrepOB->isEnabled()) {
						ClickButton(mainGame->btnHostPrepOB);
					}
					else if (_currentMenu == MenuType::OnlineDuel::OD_SPECTATE_MODE && mainGame->btnHostPrepOB->isTrulyVisible() && !mainGame->btnHostPrepOB->isEnabled()) {
						ScreenReader::getReader()->readScreen(gDataManager->GetAccessibilityString(230).data());
					}
				}
				break;
			}
			case irr::KEY_KEY_0: {
				if (!event.KeyInput.PressedDown && !mainGame->HasFocus(irr::gui::EGUIET_EDIT_BOX)) {
					if (mainGame->btnHostPrepCancel->isTrulyVisible())
						ClickButton(mainGame->btnHostPrepCancel);
					if (_selectedMenu.empty())
						_selectedMenu = _activeMenu;
					else
						_currentMenu = _selectedMenu.at(_currentMenuIndex);
				}

				break;
			}
		}
	}

	void PreDuelMenuHandler::GuiEvent(const irr::SEvent& event)
	{
		const int id = event.GUIEvent.Caller->getID();
		switch (event.GUIEvent.EventType) {
			case irr::gui::EGET_COMBO_BOX_CHANGED: {
					switch (id) {
					case COMBOBOX_PLAYER_DECK: {
						const std::wstring nvdaString = fmt::format(gDataManager->GetAccessibilityString(192).data(), mainGame->cbDeckSelect->getItem(mainGame->cbDeckSelect->getSelected()));
							ScreenReader::getReader()->readScreen(nvdaString);
							break;
					}
					case COMBOBOX_BOT_DECK: {
						const std::wstring nvdaString = fmt::format(gDataManager->GetAccessibilityString(192).data(), mainGame->gBot.cbBotDeck->getItem(mainGame->gBot.cbBotDeck->getSelected()));
							ScreenReader::getReader()->readScreen(nvdaString);
							break;
					}
					}
			}
		}
	}
}
