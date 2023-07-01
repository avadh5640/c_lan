#include<iostream>
using namespace std;
class teat{
    public:
    int work(int a){
        return a*a;
    }
    int work(int a,int b){
        return b%a;
    }
    double work(double a,double b){
        return b-a;

    }
    double work(double a){
        return a+a;

    }
};
int main()
{
    teat t;
    cout<<"squre is: "<<t.work(10)<<endl;
}