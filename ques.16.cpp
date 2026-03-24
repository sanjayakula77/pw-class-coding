#include <iostream>
using namespace std;
int main(){ 
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<"enter the numbers:";
    if(num2>num1 && num3>num2){
        cout<<1;
    }
    else{
        cout<<0;
    }

    
    return 0;
}