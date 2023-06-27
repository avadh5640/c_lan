 #include<iostream>
 using namespace std;
 class test{
    private:
    int admno,eng,maths,sci,total;
    char sname;
    float per;
    public:
    void takedata(){
        cout<<"Enter the admin number:";
        cin>>admno;
        cout<<"Enter the admin name:";
        cin>>sname;
        cout<<"Enter the marks of maths:";
        cin>>maths;
        cout<<"Enter the marks of eng:";
        cin>>eng;
        cout<<"Enter the marks of sci:";
        cin>>sci;
    }
    void ctotal(){
        total=maths+eng+sci;
        per=total/3;
    }
    void showdata(){
        cout<<"admno\tname\tmaths\tsci\teng\ttotal\tper\n";
        cout<<admno<<"\t"<<sname<<"\t"<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<"\t";
    }
 };
int main(){
  test z;
  z.takedata();
  z.ctotal();
  z.showdata();

}