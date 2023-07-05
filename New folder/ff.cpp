#include<iostream>
using namespace std;
class box{
    int l,w,h;
    public:
    void setdata(int a,int b,int c){
        l=a;
        w=b;
        h=c;

    }
    int getdata(){
        return l*w*h;
    }
    box add(box x,box y){
        if(x>y){
            cout<<"largest number is a";
        }
        else{
            cout<<"largest number is b";
        }
    }
};
int main(){
    box a,b,c;
    a.setdata(2,3,4);
    cout<<"volume of box a is:"<<a.getdata()<<endl;
    b.setdata(8,9,7);
    cout<<"volume of box b is:"<<b.getdata()<<endl;
    c=add(a,b);
    cout<<"the bigger box is:"<<c.getdata()<<endl;    
    }