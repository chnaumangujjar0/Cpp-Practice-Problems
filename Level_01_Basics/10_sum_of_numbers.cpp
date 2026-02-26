#include<iostream>
using namespace std;
int main(){
    int start,end;
    int sum=0;
    cout<<"\n ========SUM OF NUMBERS==========="<<endl;
    cout<<"\n Enter Starting Point Number : ";
    cin>>start;
    cout<<"\n Enter End point Number : ";
    cin>>end;

    for(int i=start;i <= end; i++){
        sum += i;
    }
  cout<<"\n Sum of Numbers b/w "<<start<<" to "<<end<<" is "<<sum;
}