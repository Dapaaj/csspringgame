#include "Character.h"

// Character default constructor
Character::Character() : name(""), health(100) {}

// Character constructor with name and health
Character::Character(const std::string& charName, int charHealth)
    : name(charName), health(charHealth) {}

// Get character name
std::string Character::GetName() const {
    return name;
}

// Get character health
int Character::GetHealth() const {
    return health;
}

// Reduce character health by specified damage
void Character::TakeDamage(int damage) {
    health -= damage;
}

// Add an item to character's inventory
void Character::AddToInventory(const Item& item) {
    inventory.push_back(item);
}

// Get character's inventory
const std::vector<Item>& Character::GetInventory() const {
    return inventory;
}

// Player default constructor
Character::Player::Player() : location("") {}

// Player constructor with name, health, and location
Character::Player::Player(const std::string& playerName, int playerHealth, const std::string& playerLocation)
    : location(playerLocation) {}

// Set player's location
void Character::Player::SetLocation(const std::string& newLocation) {
    location = newLocation;
}

// Get player's location
std::string Character::Player::GetLocation() const {
    return location;
}
