#include<iostream>
using namespace std;
class flight{
    private:
    int fname;
    char desti[40];
    float distance,fuel;
    float calfuel(){
        if(distance<=1000)
        {
            return 500;
        }
        else if (distance>1000 && distance<2000){
            return 1100;
        }
        else {
            return 2200;
        }
        public:
        void getinfo(){
        cout<<"enter the flight number:";
        cin>>fname;
        cout<<"enter destinetion:";
        cin>>desti;
        cout<<"enter distance:";
        cin>>distance;
        

    }
    void showinfo()
    {
        cout<<"flight:"<<fname<<endl;
        cout<<"destination"<<desti<<endl;
        cout<<"distanse"<<distance<<endl;
         fuel=calfuel();
        cout<<"need fuel is:"<<fuel<<endl;
    }
    }

};
int main()
{
    flight num1;
    num1.getinfo();
    num1.showinfo();
}