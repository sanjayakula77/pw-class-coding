#include <iostream>
using namespace std;
int main(){
    int n1,n2;
     cin>>n1>> n2;
    if(n1>=100 && n2>=200){
        cout<<"it lies between";
    }
    else if(n1<=100 && n2<=200){
        cout<<"it lies between";
    }
    else{
        cout<<"does not lies";
    }
    return 0;
}