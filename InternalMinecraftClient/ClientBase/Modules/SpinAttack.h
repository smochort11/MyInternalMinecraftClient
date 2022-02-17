#pragma once

class SpinAttack : public Module {
public:
	SpinAttack(std::string cat) : Module(cat, "SpinAttack", "Spin and attack", 0x07) {};

	void OnGameTick(Actor* lp) override {
		auto localPlayer = clientInst->getCPlayer();
		localPlayer->startSpinAttack();
	}

	void OnDisable(ClientInstance* ci, Actor* lp) override {
		auto localPlayer = clientInst->getCPlayer();
		localPlayer->stopSpinAttack();
	}
};