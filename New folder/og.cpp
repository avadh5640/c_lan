#include<iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    Vector(int x, int y) : x(x), y(y) {}

    // Overloading the + operator for vector addition
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }
};
int main(){
    Vector v1(1, 2);
    Vector v2(3, 4);
    Vector result = v1 + v2;
    
}
