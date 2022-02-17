#pragma once

class TestCommand : public Command {
public:
	TestCommand(std::string name) : Command(name, "This is a test command") {};

	void Execute(std::vector<std::string> args) override {
		if (!empty(args[1])) {// args[0] is the command, and for some reason it crashes when checking that
			//lp->displayClientMessage("args: " + args[1]);
		}
	}
};
