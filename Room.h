#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <map>
#include <vector>
#include "Item.h" // Include the Item class header

class Room {
private:
    std::string description;
    std::map<std::string, Room*> exits;
    std::vector<Item> items;

public:
    Room(const std::string& desc);
    void AddExit(const std::string& direction, Room* room);
    Room* GetExit(const std::string& direction);
    void AddItem(const Item& item);
    std::vector<Item>& GetItems(); // Declaration of GetItems member function
    std::string GetDescription();
};

#endif // ROOM_H
