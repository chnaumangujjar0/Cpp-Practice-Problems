#include<iostream>
using namespace std;
int main(){
    int num;
    bool isprime =true;
    cout<<"\n ============PRIME NUMBER============="<<endl;
    cout<<"\n Enter number : ";
    cin>>num;
    
    if(num <= 1){
       isprime = false ;
    }else{
      for(int i=2;i * i<= num;i++){
        if(num % i == 0){
           isprime = false ;
           break;
        }else{
            isprime = true;
        }
      }
     }
  

     if(isprime){
        cout<<"\n "<<num<<" is a prime number.";
     }else{
         cout<<"\n "<<num<<" is not a prime number.";
     }
  }