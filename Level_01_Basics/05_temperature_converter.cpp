#include<iostream>
using namespace std;
int main(){
  float temperature;
  int choice;
  cout<<"Temperature Converter"<<endl;
  cout<<"Enter Temperature value : ";
  cin>>temperature;
   cout << "\nEnter 1 for Celsius to Fahrenheit";
   cout << "\nEnter 2 for Fahrenheit to Celsius";
   cout << "\nEnter your choice: ";
   cin>>choice;

  if(choice == 1){
    temperature= (temperature * 9/5) +32;
    cout<<"Temperature in Fahrenheit is "<<temperature ;
  }else if(choice == 2){
    temperature= (temperature - 32 ) * 5 / 9;
    cout<<"Temperature in Celsius is "<<temperature;
  }else{
    cout<<"invalid choice";
  }

  return 0;
}