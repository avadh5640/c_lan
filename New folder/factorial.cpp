#include<iostream>
using namespace std;
class base1{
    protected:
    int m;
    public:
    void setM()
    {
        cout<<"Enter M:";
        cin>>m;
    }
};
class base2{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter N:";
        cin>>n;
    }
};
class dervied : public base2,public base1
{
    public:
    void product(){
        cout<<"product of m&n is:"<<m*n<<endl;
    }
};
int main(){
    dervied d;
    d.setM();
    d.setN();
    d.product();
}

