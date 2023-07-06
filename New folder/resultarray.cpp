#include <iostream>
using namespace std;
class result{
    int m,s,e,t;
    float per;
    
    public:
    void set()
    {
        cout<<"enter your maths marks:";
        cin>>m;
        cout<<" enter your sci marks:";
        cin>>s;
        cout<<" enter your eng marks:";
        cin>>e;
        cal ();
        cout<<""<<endl;
    }
    void cal(){
        t=m+s+e;
        per=t/3;
    }
    void get(){
        cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<t<<"\t"<<per<<"\t\n";
    }
};
int main(){
    result a[5];
    int i;
    for(i=0;i<3;i++){
        a[i].set();
    }
    
    for(i=0;i<3;i++){
        a[i].cal();
    }
            a[i].get();
    }