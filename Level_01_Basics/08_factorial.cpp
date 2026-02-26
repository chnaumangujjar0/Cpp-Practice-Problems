#include <iostream>
using namespace std;
int main() {
  int num;
  int factorial=1;
  cout<<" ===============Factorial================="<<endl;
  cout<<"\n Enter Number : ";
  cin>>num;
  
  for(int i=num;i>0;i--){
  	factorial *= i;
  }
	
	cout<<"\n Factorial of "<<num<<" = "<<factorial;
    return 0;
}
