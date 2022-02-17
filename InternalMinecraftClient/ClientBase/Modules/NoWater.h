#pragma once

class NoWater : public Module {
public:
    NoWater(std::string cat) : Module(cat, "NoWater", "Pretends water does not exist.", 0x07) {};

    void OnGameTick(Actor* lp) override {
        if (lp->IsInWater || lp->isInLava()) {
            lp->IsInWater = false;
            lp->IsSwimming = false;
            lp->HasEnteredWater = false;
        }
    }
};
