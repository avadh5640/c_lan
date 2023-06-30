#include<iostream>
using namespace std;
class area{
    public:
    area(int a)
    {
        cout<<"the volume of cube:"<<a*a*a<<endl;
    }
};
int main(){
    area a(10);
}