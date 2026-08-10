#include "Item.h"
#include <iostream>

Item::Item(const std::string& itemName, const std::string& itemDescription)
    : name(itemName), description(itemDescription) {}

std::string Item::GetName() const {
    return name;
}

std::string Item::GetDescription() const {
    return description;
}

void Item::Interact() const {
    std::cout << "You interact with the " << name << ": " << description << std::endl;
}
