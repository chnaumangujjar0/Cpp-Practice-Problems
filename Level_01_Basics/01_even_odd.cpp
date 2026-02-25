#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;

    //-----condition for Checking Even or Odd
    //--- % sign in below condition called Modulus. It gives remainder of operation.
    //--For Example 10 / 2, Its qoutient is 5 and remainder is Zero.
    if(num % 2 == 0){
        cout<<num<<" is an Even Number.";
    }else{
        cout<<num<<" is an Odd Number.";
    }
}