#include <iostream>
using namespace std;
int main(){
    int i,n{};
    cout<<"enter the number:";
    cin>>n;
    cout<<"enter the range between1 to 100:";
    for(int i=1; i<=n; i++){
        if(i>=1 && i<=100){
            cout<<i<<endl;
        }
        else{
        
            cout<<0;
        }
        
    }

    return 0;
}