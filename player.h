#pragma once
#include <string>

class Player {
private:
    std::string name;
    int health;
    std::string location;

public:
    Player(); // Default constructor
    Player(const std::string& playerName, int playerHealth, const std::string& playerLocation); // Constructor to initialize name, health, and location
    void SetLocation(const std::string& newLocation);
    std::string GetLocation() const;
    void Move(); //Add this line
    void Attack(); // Add this line
    void PickUp();
    void Look();
};
