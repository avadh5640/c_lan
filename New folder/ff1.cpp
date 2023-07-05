#include<iostream>
using namespace std;
class box{
     int l,w,h;
    public:
    void setdata(int a,int b){
    }
    int getdata(){
        if(l>w){
            cout<<"large number is l";
        }
        else{
            cout<<"large number is w";
        }
}
};
int main(){
    box q;
    q.setdata(2,3);
    q.getdata();
}

