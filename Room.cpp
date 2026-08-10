#include "Room.h"
#include <iostream>

Room::Room(const std::string& desc) : description(desc) {}

void Room::AddExit(const std::string& direction, Room* room) {
    exits[direction] = room;
}

Room* Room::GetExit(const std::string& direction) {
    if (exits.find(direction) != exits.end()) {
        return exits[direction];
    }
    else {
        return nullptr;
    }
}

void Room::AddItem(const Item& item) {
    items.push_back(item);
}

std::vector<Item>& Room::GetItems() { // Definition of GetItems member function
    return items;
}

std::string Room::GetDescription() {
    return description;
}
