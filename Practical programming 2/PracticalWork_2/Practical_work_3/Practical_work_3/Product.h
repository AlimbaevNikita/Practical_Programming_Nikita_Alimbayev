#pragma once
#include <string>

class Product {
private:
    std::string name;
    std::string category;
    double price;
    int quantity;
public:
    Product();
    Product(std::string name, std::string category, double price, int quantity);
    std::string getName() const;
    std::string getCategory() const;
    double getPrice() const;
    int getQuantity() const;
    void setName(std::string name);
    void setCategory(std::string category);
    void setPrice(double price);
    void setQuantity(int quantity);
};