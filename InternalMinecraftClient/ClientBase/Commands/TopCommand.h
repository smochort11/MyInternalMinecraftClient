#pragma once

class TopCommand : public Command {
public:
	TopCommand(std::string name) : Command(name, "Teleport to the top of the block[s] above you") {};

	void Execute(std::vector<std::string> args) override {
		hooks->debugEcho("WorldEdit", "Whoosh!");
		auto lp = clientInst->getCPlayer();
		auto pos = lp->Position.lower;
		pos.y += 50;
		lp->chorusFruitTeleport(pos);
	}
};