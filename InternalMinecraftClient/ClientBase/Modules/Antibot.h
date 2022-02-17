#pragma once

class Antibot : public Module {
public:
	Antibot(std::string cat) : Module(cat, "Antibot", "Modules will not target bots. Keep on.", 0x07) {};
};