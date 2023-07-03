#include <iostream>


double calculateVolume(double side) {
    return side * side * side;
}


double calculateVolume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double side, length, width, height;

    // Input for cube
    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;
    std::cout << "Volume of the cube: " << calculateVolume(side) << std::endl;

    // Input for rectangular prism
    std::cout << "Enter the length, width, and height of the rectangular prism: ";
    std::cin >> length >> width >> height;
    std::cout << "Volume of the rectangular prism: " << calculateVolume(length, width, height) << std::endl;

    return 0;
}
