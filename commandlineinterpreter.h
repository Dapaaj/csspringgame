#pragma once
#pragma once
#include <string>
#include <map>


class Player;

class CommandInterpreter {
public:
    CommandInterpreter(Player* player);
    void ParseCommand(const std::string& command);

private:
    Player* player;
    std::map<std::string, void (Player::*)()> commandMap;
};

