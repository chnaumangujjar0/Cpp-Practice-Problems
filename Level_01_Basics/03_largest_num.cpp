#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;
    cout<<"Find largest Number"<<endl;
    cout<<"Enter Number 01 : ";
    cin>>num1;
    cout<<"Enter Number 02 : ";
    cin>>num2;
    cout<<"Enter Number 03 : ";
    cin>>num3;
    if(num1 > num2 && num1 > num3){
      cout<<num2 <<" is greater number among them";
    }else if(num2 > num1 && num2 > num3){
      cout<<num2<<" is Greater among them";
    }else{
        cout<<num3<<" is Greater among them";
    }
}