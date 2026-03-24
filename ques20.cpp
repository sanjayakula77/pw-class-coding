#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i,n{},sum{};
    vector<int>div{0};

    cout<<"enter the perfect number:";
    cin>>n;
    for(int i=1; i<=n;i++){
        if(i%6==0){
            div.push_back(i);
            
        }

    }
        for(i=0;i<div.size();i++){
            sum=sum+div[i];


        }
        if(sum==n){
            cout<<"perfect number";
            
        }
        else{
            cout<<"not perfect number";
        }
    
    return 0;
}