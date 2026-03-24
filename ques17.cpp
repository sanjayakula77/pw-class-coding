#include <iostream>
using namespace std;
int main(){
    int i,sum=0;
    cout<<"enter the first 10 natural numbers:";
    for(int i=1; i<=10;i++){
        cout<<i<<" ";
        sum =sum+i;
        
    }
    cout<<endl;
    
    cout<<"sum of first 10 natural numbers= " <<sum<<endl;
    
    
    
    return 0;
}