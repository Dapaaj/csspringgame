#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    std::string description;

public:
    Item(const std::string& itemName = "Golden Key", const std::string& itemDescription = "A shiny key that looks important.");
    std::string GetName() const;
    std::string GetDescription() const;
    void Interact() const; // Declaration of Interact method
};

#endif // ITEM_H
