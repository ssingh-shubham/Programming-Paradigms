#include <iostream>
#include <string>
#include <vector>

class ShoppingItem {
public:
    int itemCode;
    std::string itemName;
    double price;

    ShoppingItem(int code, const std::string& name, double itemPrice)
        : itemCode(code), itemName(name), price(itemPrice) {}
};

class ShoppingList {
private:
    std::vector<ShoppingItem> items;

public:
    // Function to add an item to the shopping list
    void addItem(int code, const std::string& name, double itemPrice) {
        ShoppingItem item(code, name, itemPrice);
        items.push_back(item);
    }

    // Function to delete an item from the shopping list
    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->itemCode == code) {
                items.erase(it);
                std::cout << "Item with code " << code << " deleted from the list." << std::endl;
                return;
            }
        }
        std::cout << "Item with code " << code << " not found in the list." << std::endl;
    }

    // Function to print the shopping list and calculate the total value
    void printList() {
        double totalValue = 0;
        if (items.empty()) {
            std::cout << "Shopping list is empty." << std::endl;
        } else {
            std::cout << "Shopping List:" << std::endl;
            std::cout << "Code\tItem Name\tPrice" << std::endl;
            for (const ShoppingItem& item : items) {
                std::cout << item.itemCode << "\t" << item.itemName << "\t" << item.price << std::endl;
                totalValue += item.price;
            }
            std::cout << "Total Value: " << totalValue << std::endl;
        }
    }
};

int main() {
    ShoppingList shoppingList;
    int choice;
    int code;
    std::string name;
    double price;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add Item to Shopping List" << std::endl;
        std::cout << "2. Delete Item from Shopping List" << std::endl;
        std::cout << "3. Print Shopping List" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter Item Code: ";
                std::cin >> code;
                std::cout << "Enter Item Name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter Item Price: ";
                std::cin >> price;
                shoppingList.addItem(code, name, price);
                break;

            case 2:
                std::cout << "Enter Item Code to delete: ";
                std::cin >> code;
                shoppingList.deleteItem(code);
                break;

            case 3:
                shoppingList.printList();
                break;

            case 4:
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }

    } while (choice != 4);

    return 0;
}
