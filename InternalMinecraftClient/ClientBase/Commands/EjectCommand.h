#pragma once

class EjectCommand : public Command {
public:
	EjectCommand(std::string name) : Command(name, "HIDE!") {};

	void Execute(std::vector<std::string> args) override {
		clientAlive = false;
	}
};