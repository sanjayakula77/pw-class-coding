#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<"enter the num1 num2 num3:";
    if(num1>=20 &&num1<=50){
        cout<<"true";
    }
    else if (num2>=20 && num2<=50){
        cout<<"true";
    }
    else if (num3>=20 && num3<=50){
        cout<<"true";
    }
    else{
        cout<<"flase";
    }

    return 0;
}