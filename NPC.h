#pragma once
#include "Player.h"


class NPC {
private:
    Player player;
public:
    void UpdateAi(); // Declare the UpdateAi method
    NPC(const std::string& playerName, int playerHealth);
    Player& GetPlayer();
    // Other methods...

};
