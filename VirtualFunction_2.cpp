#include <iostream>
#include <string>

class Media {
protected:
    std::string title;
    double price;

public:
    Media(const std::string& t, double p) : title(t), price(p) {}

    virtual void display() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }
};

class Book : public Media {
protected:
    int numPages;

public:
    Book(const std::string& t, double p, int pages) : Media(t, p), numPages(pages) {}

    void display() override {
        Media::display();
        std::cout << "Number of Pages: " << numPages << std::endl;
    }
};

class Tape : public Media {
protected:
    double playingTime;

public:
    Tape(const std::string& t, double p, double time) : Media(t, p), playingTime(time) {}

    void display() override {
        Media::display();
        std::cout << "Playing Time: " << playingTime << " minutes" << std::endl;
    }
};

int main() {
    Media* items[2];

    Book book("Sample Book", 25.99, 300);
    Tape tape("Sample Tape", 9.99, 120);

    items[0] = &book;
    items[1] = &tape;

    for (int i = 0; i < 2; i++) {
        std::cout << "Item " << i + 1 << ":" << std::endl;
        items[i]->display();
        std::cout << std::endl;
    }

    return 0;
}
