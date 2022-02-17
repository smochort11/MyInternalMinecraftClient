#pragma once

class AntiVoid : public Module {
public:
	AntiVoid(std::string cat) : Module(cat, "AntiVoid", "You cannot fall more than X blocks, or the client will TP you back.", 0x07) {};
	Vector3 savedPos;

	void OnGameTick(Actor* lp) override {
		if (lp->fallDistance == 0) {
			savedPos = lp->Position.upper;
		}
		if (lp->fallDistance > 5 && lp->Position.lower.y > 30)
			lp->setPos(savedPos);
	}
};
