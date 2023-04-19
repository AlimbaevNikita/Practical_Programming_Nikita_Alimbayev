#include "Product.h"

Product::Product() : name(""), category(""), price(0), quantity(0) {}

Product::Product(std::string name, std::string category, double price, int quantity) :
    name(name), category(category), price(price), quantity(quantity) {}

std::string Product::getName() const {
    return name;
}

std::string Product::getCategory() const {
    return category;
}

double Product::getPrice() const {
    return price;
}

int Product::getQuantity() const {
    return quantity;
}

void Product::setName(std::string name) {
    this->name = name;
}

void Product::setCategory(std::string category) {
    this->category = category;
}

void Product::setPrice(double price) {
    this->price = price;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}