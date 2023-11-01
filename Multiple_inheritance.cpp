#include <iostream>
#include <string>

class Item {
protected:
    std::string title;
    double price;

public:
    Item(const std::string& t, double p) : title(t), price(p) {}
};

class Sale {
protected:
    double sales[3];

public:
    Sale(double s1, double s2, double s3) {
        sales[0] = s1;
        sales[1] = s2;
        sales[2] = s3;
    }
};

class HWItem : public Item, public Sale {
public:
    HWItem(const std::string& t, double p, double s1, double s2, double s3)
        : Item(t, p), Sale(s1, s2, s3) {}

    void getdata() {
        // Input data for HWItem
    }

    void displaydata() {
        // Display data for HWItem
    }
};

class SWItem : public Item, public Sale {
public:
    SWItem(const std::string& t, double p, double s1, double s2, double s3)
        : Item(t, p), Sale(s1, s2, s3) {}

    void getdata() {
        // Input data for SWItem
    }

    void displaydata() {
        // Display data for SWItem
    }
};

int main() {
    // Example usage of HWItem and SWItem
    HWItem hwItem("Hardware Item", 100.0, 50.0, 60.0, 70.0);
    SWItem swItem("Software Item", 80.0, 40.0, 30.0, 50.0);

    // Perform getdata and displaydata operations as needed
    return 0;
}
