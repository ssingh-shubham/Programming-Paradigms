#include <iostream>

class Polygon {
protected:
    double width;
    double height;

public:
    void set_values(double w, double h) {
        width = w;
        height = h;
    }

    virtual double area() {
        return 0.0;  // Default implementation in the base class
    }
};

class Rectangle : public Polygon {
public:
    double area() override {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    double area() override {
        return 0.5 * width * height;
    }
};

int main() {
    Polygon* shapes[2];

    Rectangle rect;
    Triangle tri;

    shapes[0] = &rect;
    shapes[0]->set_values(4.0, 5.0);

    shapes[1] = &tri;
    shapes[1]->set_values(4.0, 5.0);

    for (int i = 0; i < 2; i++) {
        std::cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << std::endl;
    }

    return 0;
}
