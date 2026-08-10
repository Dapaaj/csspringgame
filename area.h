#ifndef AREA_H
#define AREA_H

#include <map>
#include <string>
#include "Room.h" // Include the Room class header

class Area {
private:
    std::map<std::string, Room*> rooms;

public:
    Area(); // Constructor to initialize rooms
    ~Area(); // Destructor to free memory of rooms
    void AddRoom(const std::string& name, Room* room); // Adds a room to the area using its name as a key
    Room* GetRoom(const std::string& name); // Retrieves a room by its name
    void ConnectRooms(const std::string& room1Name, const std::string& room2Name, const std::string& direction); // Connects two rooms using a specified direction
    void LoadMapFromFile(const std::string& filename); // Loads the game map from a text file, creating rooms and connections
};

#endif // AREA_H
