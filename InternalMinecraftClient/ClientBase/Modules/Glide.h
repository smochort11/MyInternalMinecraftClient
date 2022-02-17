#pragma once

class Glide : public Module {
public:
    Glide(std::string cat) : Module(cat, "Glide", "Slow falling", 0x07) {};

    void OnGameTick(Actor* lp) override {
        lp->Velocity.y = -0.02f;
    }
};