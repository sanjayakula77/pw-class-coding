#include <iostream>
using namespace std;
int main(){
   int i,num,factorial=1;
   cout<<"enter the number :";
   cin>>num;
   for(int i=1; i<=num; i++){
    cout<<i<<endl;
    
    factorial = factorial*i;

   }
   cout<<"the factorial number given is:"<<factorial<<endl;



    return 0;
}
