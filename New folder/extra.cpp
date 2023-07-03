#include <iostream>

class Volume {
private:
    double value;

public:
    Volume(double volume) : value(volume) {}

    double getValue() const {
        return value;
    }

    Volume operator+(const Volume& other) const {
        return Volume(value + other.value);
    }

    Volume operator-(const Volume& other) const {
        return Volume(value - other.value);
    }

    Volume operator*(const double& scalar) const {
        return Volume(value * scalar);
    }

    Volume operator/(const double& scalar) const {
        return Volume(value / scalar);
    }

    friend std::ostream& operator<<(std::ostream& os, const Volume& volume) {
        os << volume.value << " cubic units";
        return os;
    }
};

int main() {
    Volume v1(10);
    Volume v2(5);

    Volume sum = v1 + v2;
    std::cout << "Sum: " << sum << std::endl;

    Volume difference = v1 - v2;
    std::cout << "Difference: " << difference << std::endl;

    Volume scaled = v1 * 2.5;
    std::cout << "Scaled: " << scaled << std::endl;

    Volume divided = v1 / 3;
    std::cout << "Divided: " << divided << std::endl;

    return 0;
}
