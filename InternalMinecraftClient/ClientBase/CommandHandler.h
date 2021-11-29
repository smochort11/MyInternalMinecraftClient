#pragma once

#include <algorithm>
#include <vector>
#include "Command.h"
#include "Commands/HelpCommand.h"
#include "Commands/TestCommand.h"
#include "Commands/EjectCommand.h"
#include "Commands/ToggleCommand.h"
#include "Commands/FixHitboxCommand.h"
#include "Commands/TopCommand.h"
#include "Commands/DieCommand.h"
#include "Commands/XpCommand.h"

class CommandHandler {
public:
    std::vector<Command*> commands;

public:

    void InitCommands() {
        commands.push_back(new TestCommand("test"));
        commands.push_back(new HelpCommand("help"));
        commands.push_back(new EjectCommand("eject"));
        commands.push_back(new ToggleCommand("toggle"));
        commands.push_back(new FixHitboxCommand("fixhitbox"));
        commands.push_back(new DieCommand("die"));
        commands.push_back(new XpCommand("xp"));
        commands.push_back(new TopCommand("top"));
    }

    Command* findCommand(std::string name){
        std::vector<Command*> allCmds = commands;
        for (auto cmd : allCmds) {
            if (cmd->CheckName(name)) {
                return cmd;
            }
        }
	return nullptr;
    }
};
