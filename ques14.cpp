#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    const int n=100;
    cout<<"enter the number:";
    if(num1==num2){
        cout<<1;
    }
    else if(num1<num2){
        cout<<0;
    }
    else{
        cout<<"not proved";
    }
    
    return 0;
}