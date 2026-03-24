#include <iostream>
using namespace std;
int main(){
    char op ;
    int a=4, b=6;
    cout<<"enter opereter :";
    cin>>op;
    switch(op){
        case '+':
        cout<<"4+6";
        break;
        case '-':
        cout<<"a-b";
        break;
        case '*':
        cout<<"a*b";
        break;
        case '/':
        cout<<"a/b";
        break;
        default:
        cout<<"invailed operater";
    }
        return 0;

        
    }
   
    

