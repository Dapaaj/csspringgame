#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include "Item.h" // Include the Item class header
#include <iostream>
#include <cstdlib>

class Character {
private:
    std::string name;
    int health;
    std::vector<Item> inventory;

public:
    Character(); // Default constructor
    Character(const std::string& charName, int charHealth); // Constructor to initialize name and health
    std::string GetName() const;
    int GetHealth() const;
    void TakeDamage(int damage);
    void AddToInventory(const Item& item);
    const std::vector<Item>& GetInventory() const;

    class Player {
    private:
        std::string location;

    public:
        Player(); // Default constructor
        Player(const std::string& playerName, int playerHealth, const std::string& playerLocation); // Constructor to initialize name, health, and location
        void SetLocation(const std::string& newLocation);
        std::string GetLocation() const;

      
    };
};
#endif
