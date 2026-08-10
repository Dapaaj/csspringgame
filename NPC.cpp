#include "NPC.h"

NPC::NPC(const std::string& playerName, int playerHealth) : player(playerName, playerHealth) {}

Player& NPC::GetPlayer() {
    return player;
}

void NPC::UpdateAi() {
    // ADDING A AI logic
}
//having the AI logic here allows the NPC to follow the player on the players travels
