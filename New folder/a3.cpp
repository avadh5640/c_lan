#include<iostream>
using namespace std;
int main()
{
    int maths,sci,eng,total;
    float per;
    cout<<"enter the marks of maths:";
    cin>>maths;
    cout<<"enter the marks of sci:";
    cin>>sci;
    cout<<"enter the marks of eng:";
    cin>>eng;
    total=maths+sci+eng;
    per=total/3;
    cout<<"\nyour total marks is:"<<total;
    cout<<"\nyour total per is :"<<per;
    if(per>90)
    {
        cout<<"\nyour grade is a1";
    }
    else if(90<=per && per<80)
    {
        cout<<"\nyour grade is a2";
    }
    else if(80<=per && per<70)
    {
        cout<<"\nyour grade is b1";
    }
    else if(70<=per && per<60)
    {
        cout<<"\nyour grade is b2";
    }
    else if(60<=per && per<50)
    {
        cout<<"\nyour grade is c";
    }
    else if(50<=per && per<33)
    {
        cout<<"\nyour grade is d";
    }
    else{
        cout<<"\nfail......";
    }
}