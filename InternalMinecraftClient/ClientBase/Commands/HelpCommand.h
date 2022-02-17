#pragma once

class HelpCommand : public Command {
public:
	HelpCommand(std::string name) : Command(name, "HOW DO I USE X COMMAND") {};

	void Execute(std::vector<std::string> args) override {
		//for (auto cmd : cmdHandler.commands) {
		//}
	}
};