#include<iostream>
using namespace std;
int main(){
   int j,number;
   cout<<"Enter the Number"<<endl;
   cin>>number;
   int fact=1;
   for(j=1;j<=number;j++){


    fact=fact*j;
   }
   cout<<"factorial is = "<<fact<<endl;





}
