#include<iostream>
using namespace std;
class report{
    private:
    int m[5];
    int adno,i,marks;
    char name[20];
    float avg;
    public:
    void readinfo(){
        
            cout<<"Enter the admin number:";
            cin>>adno;
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter your marks";
            cin>>marks;
        
    }
    void getavg(){
        avg=m[i]/5;
    }
    void displayinfo(){
        cout<<"adno\tname\tmarks\t";
        cout<<adno<<"\t"<<name<<"\t"<<marks<<"\t";
    }
};

int main(){
  report z;
  z.readinfo();
  z.getavg();
  z.displayinfo();

}