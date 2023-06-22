#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    int i,oddsum=0,evensum=0,total;
    for(i=0;i<6;i++){
        if(a[i]%2==0){
            evensum=evensum+a[i];
        }
        else{
            oddsum=oddsum+a[i];

        }
    }
    total=oddsum+evensum;
    cout<<"odd sum:"<<oddsum;
    cout<<"even sum:"<<evensum;
    cout<<"total:"<<total;
}