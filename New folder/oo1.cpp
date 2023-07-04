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
    void getdata(){
        return l*w*h;
    }
    box operator++ (box &n){
        box t;
        t.l=l+n.l;
        t.w=w+n.w;
        t.h=h+n.h;
        return t;
    }
};
int main(){
    box a,b,c;
    b.setdata(2,2,2);
    cout<<"box b volume is:"<<b.getdata()<<endl;
    a.setdata(2,2,2);
    cout<<"box a volume is:"<<a.getdata()<<endl;
    c=a+b;
    cout<<"box c volume is:"<<c.getdata()<<endl;
}

