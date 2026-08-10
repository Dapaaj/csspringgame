#include "player.h"
#include <string>
#include <iostream>
#include <vector>
#include "item.h"


void Player::Move() {
    // Implement movement logic
}

//class Player;

void Player::Attack() {
    // Implement attack logic here
    std::cout << "Player attacks." << std::endl;
}

void Player::Look() {
    // Implement look around logic
}


// Set player's location
void Player::SetLocation(const std::string& newLocation) {
    location = newLocation;
}

// Get player's location
std::string Player::GetLocation() const {
    return location;
}
