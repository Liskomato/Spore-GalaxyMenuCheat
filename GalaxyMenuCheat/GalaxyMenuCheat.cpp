#include "stdafx.h"
#include "GalaxyMenuCheat.h"

GalaxyMenuCheat::GalaxyMenuCheat()
{
}


GalaxyMenuCheat::~GalaxyMenuCheat()
{
}


void GalaxyMenuCheat::ParseLine(const ArgScript::Line& line)
{
	// This method is called when your cheat is invoked.
	// Put your cheat code here.
	if (GameModeManager.GetActiveModeID() != GameModeIDs::kGGEMode) {
		GameModeManager.SetActiveMode(GameModeIDs::kGGEMode);
	}
	else {
		App::ConsolePrintF("You are already in the main menu!");
	}
}

const char* GalaxyMenuCheat::GetDescription(ArgScript::DescriptionMode mode) const
{
	if (mode == ArgScript::DescriptionMode::Basic) {
		return "Returns you to the main menu.";
	}
	else {
		return "GalaxyMenu: Brings you back to the main galaxy screen.";
	}
}
