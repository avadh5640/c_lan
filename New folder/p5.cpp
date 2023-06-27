#include<iostream>
using namespace std;
class book{
    private:
    int bno,price,copy,totalcost;
    char bname[20];
    public:
    void input(){
        cout<<"Enter the book number:";
        cin>>bno;
        cout<<"Enter the book name:";
        cin>>bname;
        cout<<"Enter the number of copies:";
        cin>>copy;
        cout<<"Enter the price of book:";
        cin>>price;
        totalcost=price*copy;
    }
    void purchase(){
        cout<<"booknum\tname\tcopies\tprice\ttotalcost\n";
        cout<<bno<<"\t"<<bname<<"\t"<<copy<<"\t"<<price<<"\t"<<totalcost<<"\t";
    }
};
int main(){
  book z;
  z.input();
  z.purchase();
  

}