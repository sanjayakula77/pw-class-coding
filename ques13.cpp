#include <iostream>
using namespace std;
int main(){
    cout << "Enter the numbers" << endl;
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<"largest number-:-";
    if (num1>num2 && num1>num3){
        cout<<num1;
    }
    else if(num2>num1 && num2>num3){
        cout<< num2;
    }
    else if(num3>num1 && num3>num2){
        cout<<num3;
    }
    else{
        cout<<"0";
    }
  cout<<endl;
    
    return 0;
}