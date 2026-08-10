#include "Area.h"
#include <fstream>
#include <sstream>
#include <iostream>
Area::Area() {}

Area::~Area() {
    for (auto& pair : rooms) {
        delete pair.second;
    }
    rooms.clear();
}

void Area::AddRoom(const std::string& name, Room* room) {
    rooms[name] = room;
}

Room* Area::GetRoom(const std::string& name) {
    auto it = rooms.find(name);
    if (it != rooms.end()) {
        return it->second;
    }
    return nullptr;
}

void Area::ConnectRooms(const std::string& room1Name, const std::string& room2Name, const std::string& direction) {
    Room* room1 = GetRoom(room1Name);
    Room* room2 = GetRoom(room2Name);

    if (room1 && room2) {
        room1->AddExit(direction, room2);
        // Assuming bidirectional connections
        std::string oppositeDirection;
        if (direction == "north") {
            oppositeDirection = "south";
        }
        else if (direction == "south") {
            oppositeDirection = "north";
        }
        else if (direction == "east") {
            oppositeDirection = "west";
        }
        else if (direction == "west") {
            oppositeDirection = "east";
        }
        room2->AddExit(oppositeDirection, room1);
    }
}

void Area::LoadMapFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::string roomName;
    std::string roomDescription;
    while (std::getline(file, roomName)) {
        std::getline(file, roomDescription);
        Room* room = new Room(roomDescription);
        AddRoom(roomName, room);
    }

    // Reset file stream back to the beginning
    file.clear();  // Clear any error flags
    file.seekg(0, std::ios::beg);

    std::string connection;
    while (std::getline(file, connection)) {
#include "Area.h"
#include <fstream>
#include <sstream>
#include <iostream>
Area::Area() {}

Area::~Area() {
    for (auto& pair : rooms) {
        delete pair.second;
    }
    rooms.clear();
}

void Area::AddRoom(const std::string& name, Room* room) {
    rooms[name] = room;
}

Room* Area::GetRoom(const std::string& name) {
    auto it = rooms.find(name);
    if (it != rooms.end()) {
        return it->second;
    }
    return nullptr;
}

void Area::ConnectRooms(const std::string& room1Name, const std::string& room2Name, const std::string& direction) {
    Room* room1 = GetRoom(room1Name);
    Room* room2 = GetRoom(room2Name);

    if (room1 && room2) {
        room1->AddExit(direction, room2);
        // Assuming bidirectional connections
        std::string oppositeDirection;
        if (direction == "north") {
            oppositeDirection = "south";
        }
        else if (direction == "south") {
            oppositeDirection = "north";
        }
        else if (direction == "east") {
            oppositeDirection = "west";
        }
        else if (direction == "west") {
            oppositeDirection = "east";
        }
        room2->AddExit(oppositeDirection, room1);
    }
}

void Area::LoadMapFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::string roomName;
    std::string roomDescription;
    while (std::getline(file, roomName)) {
        std::getline(file, roomDescription);
        Room* room = new Room(roomDescription);
        AddRoom(roomName, room);
    }

    // Reset file stream back to the beginning
    file.clear();  // Clear any error flags
    file.seekg(0, std::ios::beg);

    std::string connection;
    while (std::getline(file, connection)) {
        std::string room1Name, room2Name, direction;
        std::stringstream ss(connection);
        ss >> room1Name >> room2Name >> direction;
        ConnectRooms(room1Name, room2Name, direction);
    }

    file.close();
}


