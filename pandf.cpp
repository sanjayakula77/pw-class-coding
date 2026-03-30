#include <iostream>
using namespace std;
int printsum(int*ptr1,int*ptr2){
    
    return (*ptr1+*ptr2);
}
int main(){
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = printsum(&a, &b);

    cout << "Sum = " << sum;

    return 0;

}

 
