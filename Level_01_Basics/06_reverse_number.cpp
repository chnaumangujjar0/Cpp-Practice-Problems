#include <iostream>
using namespace std;
int main() {
	int num,digit;
	int reversed_number = 0;
	
	cout<<"\n=========NUMBER REVERSER============"<<endl;
	cout<<"\n Enter Number : ";
	cin>>num;
	
	while(num != 0){ //loop is stopped when num = 0
		digit = num % 10;  // it gives the last digit everytime when  loop run
		
        reversed_number = reversed_number * 10 + digit ; 
        
        num = num / 10 ; // it gives the qoutient every time when loop run 
	}
	
	cout<<"Reversed Number = "<<reversed_number;
	
    return 0;
}
