#include<iostream>
using namespace std;
int main(){
    double salary;
    int interestpercentage= 10;
    float interestvalue;
    if(salary <0){
        cout<<"Enter Valid Salary.";
        return 0;
    }
    cout<<"Interest calculator"<<endl;
    cout<<"Enter Salary : ";
    cin>>salary;
    
    interestvalue = salary * interestpercentage /100;
    
    cout<<"interest value = "<<interestvalue;
    return 0;
}