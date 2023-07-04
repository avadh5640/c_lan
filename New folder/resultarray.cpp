#include <iostream>
using namespace std;
class result{
    int m,s,e,t,n;
    float per;
    public:
    void set()
    {
        cout<<"\n enter your maths marks:";
        cin>>m;
        cout<<"\n enter your sci marks:";
        cin>>s;
        cout<<"\n enter your eng marks:";
        cin>>e;
    }
    void cal(){
        t=m+s+e;
        per=(float)t/3;
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
    cout<<"\nm\ts\te\tt\tper";
    
   
        a[i].get();
    }

