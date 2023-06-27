#include<iostream>
using namespace std;
class batsman{
    private:
    int bcode,inn,notout,runs,batavg;
    char bname[20];
    public:
    void readdata(){
        cout<<"Enter the batsman code:";
        cin>>bcode;
        cout<<"Enter the batsman name:";
        cin>>bname;
        cout<<"Enter the num of innings:";
        cin>>inn;
        cout<<"Enter the number of notouts:";
        cin>>notout;
        cout<<"Enter the total runs:";
        cin>>runs;
    }
    void calavg(){
        batavg=runs/(inn-notout);
    }
    void displaydata(){
        cout<<"barcode\tname\tinnings\tnotouts\truns\tbatavg\n";
        cout<<bcode<<"\t"<<bname<<"\t"<<inn<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg<<"\t";
    }
};
int main(){
  batsman z;
  z.readdata();
  z.calavg();
  z.displaydata();

}