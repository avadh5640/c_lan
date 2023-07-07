
#include<iostream>
using namespace std;
class Bank
{
    int acno;
    char name[50];
    double balance,amt;
    public:
    void setdata()
    {
        cout<<"Enter your account no: ";
        cin>>acno;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your account balance: ";
        cin>>balance;
    }
    void showaccount()
    {
         cout<<"Enter your account no: "<<acno<<endl;
         cout<<"Enter your name: "<<name<<endl;
         cout<<"Enter your account balance: "<<balance<<endl;
    }
    void deposite()
    {
        cout<<"Enter your deposite amount: ";
        cin>>amt;
        balance = balance + amt;
        cout<<"your account amount: "<<balance<<endl;
    }
    void withdraw()
    {
        cout<<"Enter your withdrawal amount: ";
        cin>>amt;
        if(balance>=amt)
        {
             balance = balance - amt;
        }
        else
        {
            cout<<"Less Balance......";
        }
        cout<<"Your balance is: "<<balance<<endl;
    }
};
int main()
{
    int ch;
    Bank x;
    do
    {
        cout<<"\n1.Setdata\n2.Show account\n3.Deposite\n4.Withdraw\n5.Exit";
        cout<<"\nPlease input your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
                cout<<"1.Setdata\n";
                x.setdata();
            break;
        case 2:
                cout<<"2.Account details\n";
                x.showaccount();
            break;
        case 3:
                cout<<"3.Deposite\n";
                x.deposite();
            break;
        case 4:
                cout<<"4.Withdraw\n";
                x.withdraw();
            break;
        case 5:
                cout<<"\nThank you...";
                cout<<"\nVisit again...";
            break;        
        default:
                cout<<"\nSorry wrong option";
            break;
        }
    }while(ch!=5);
}