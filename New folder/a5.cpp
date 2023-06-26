#include<iostream>
using namespace std;
class Test{
    private:
    int maths,eng,sci,total,per;
    public:
    void setter(){
        cout<<"Enter marks of maths:";
        cin>>maths;
        cout<<"Enter marks of eng:";
        cin>>eng;
        cout<<"Enter marks of sci:";
        cin>>sci;
        total=maths+sci+eng;
        per=total/3;
    }
    void getter(){
        cout<<"maths\tsci\teng\ttotal\tper\n";
        cout<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<"\t";
    }
};
int main(){
  Test z;
  z.setter();
  z.getter();

}