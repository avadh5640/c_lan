#include<iostream>
using namespace std;
class Test{
    private:
    int a;
    public:
    void setter(){
        cout<<"Enter a:";
        cin>>a;
    }
    void getter(){
        cout<<"value of a:"<<a<<endl;
    }
};
int main(){
  Test z;
  z.setter();
  z.getter();

}