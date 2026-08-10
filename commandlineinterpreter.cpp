#include <iostream>
#include "CommandInterpreter.h"
#include "player.h"



CommandInterpreter::CommandInterpreter(Player* player) : player(player) {
    // Map commands to player actions
    commandMap["move"] = &Player::Move;
    commandMap["attack"] = &Player::Attack;
    // Add more commands as needed
}

void CommandInterpreter::ParseCommand(const std::string& command) {
    // Find the command in the map
    auto it = commandMap.find(command);
    if (it != commandMap.end()) {
        // If the command is found, execute the corresponding player action
        (player->*(it->second))();
    }
    else {
        // If the command is not found, print an error message
        std::cout << "Invalid command: " << command << std::endl;
    }
}
