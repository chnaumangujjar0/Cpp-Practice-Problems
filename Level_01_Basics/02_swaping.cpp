#include<iostream>
using namespace std;
int main(){
    int num1=10;
    int num2=30;
    int temp;

    temp=num1;
    num1=num2;
    num2=temp;

    cout<<"Number 01 = "<<num1<<endl;
    cout<<"Number 02 = "<<num2<<endl;
}

// OUTPUT--------

// Number 01 = 30 
//Number 02 = 10