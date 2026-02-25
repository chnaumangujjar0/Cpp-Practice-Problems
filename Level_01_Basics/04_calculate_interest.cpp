#include<iostream>
using namespace std;
int main(){
    float salary;
    int interestpercentage= 10;
    float interestvalue;
    cout<<"Interest calculator"<<endl;
    cout<<"Enter Salary : ";
    cin>>salary;
    
    interestvalue = salary * interestpercentage /100;
    
    cout<<"interest value = "<<interestvalue;
    return 0;
}