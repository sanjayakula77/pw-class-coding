#include <iostream>
using namespace std;
int main(){
    int y=9;
    int *san=&y;
    int**san1=&san;
    int***san2=&san1;
    int****san3=&san2;
    cout<<****san3;
    cout<<endl<<endl;
    
    
    cout<<"address of san3:"<<&san3<<endl;
    cout << endl;
    cout<<"address of san2:"<<&san2<<endl;
    cout << endl;
    cout<<"address of san1:"<<&san1<<endl;
    cout << endl;
    cout<<"address of san:"<<&san<<endl;
    cout << endl;
    cout<<"address of y:"<<&y<<endl;
    cout << endl;
    cout << endl;
    cout << endl;
    

    cout<<"Value of san3:"<<san3<<endl;
    cout << endl;
    cout<<"Value of san2:"<<san2<<endl;
    cout << endl;
    cout<<"Value of san1:"<<san1<<endl;
    cout << endl;
    cout<<"Value of san:"<<san<<endl;
    cout << endl;
    

    

    



    
}