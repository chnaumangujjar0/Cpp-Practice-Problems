#include <iostream>
using namespace std;
int main() {
   int table_num;
   int table_length;
   cout<<"===========MULTIPLICATION TABLE==========="<<endl;
   cout<<"\n Enter Table Number : ";
   cin>>table_num;
   cout<<"\n Enter Table Length : ";
   cin>>table_length;
   
   for(int i=1;i<=table_length;i++){
   	cout<<"\n "<<table_num<<" * "<<i<<" = "<< table_num * i;
   }
	
    return 0;
}
