#include <iostream>
using namespace std;
int main(){
    int n,i{},j;
    cout<<"enter the table:";
    cin>>n;
;
    for(int i=1; i<=10;i++){
        for(j=1 ;j<=n;j++){
            if (j<=n-1){
                cout<<n<<"x"<<i<<"="<<n*i<<endl;
            }
            else{
                cout<<n<<"x"<<i<<"="<<n*i<<endl;

            }
        }
        
        
        
    }

    return 0;
}