#include<iostream>
using namespace std;
int main(){
    //======IN this file, i  intialze only  one variable  and update it for each pattern .
    string star = "";
    int n=5;
    cout<<"\n =============STAR PATTERN=============="<<endl;
    cout<<"\n ======INCREASING TRIANGLE======="<<endl;
    for(int i=0;i<n;i++){       
        star += "*";            
        cout<<star<<endl;
    }

    star="";
    cout<<"\n ===============DECREASING TRIANGLE================="<<endl;
    for (int i = 0; i < n; i++)
    {
       for(int j=n;j>i;j--){
        star += "*";
       }
       cout<<star<<endl;
       star = "";
    }

    star="";

    cout<<"\n ==============RIGHT_ALLIGNED TRIANGLE==============="<<endl;
    for(int i=0;i<n;i++){
        for(int j=n - 1;j>i;j--){
           
            cout<<" ";
        }
        star+="*";
      cout<<star<<endl;
    }

    star="*";
    cout<<"\n ==============PYRAMID PATTERN==============="<<endl;
     for(int i=0;i<n;i++){
        for(int j=n - 1;j>i;j--){
           
            cout<<" ";
        }
      cout<<star<<endl;
      star+="**";
    }
    return 0;
}