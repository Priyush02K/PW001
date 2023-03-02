#include<iostream>
using namespace std;
int main(){
    cout << "\n\n swap two number : \n";
    cout << "------------------------\n";

    int n1= 14, n2=51;
    int temp;
    cout << "Before swapping the 1st number is: "<<n1<<"\n";
    cout << "Before swapping the 2st number is: "<<n2<<"\n";

    temp=n2;
    n2=n1;
    n1=temp;
 cout << " After swapping the 1st number is : "<< n1 <<"\n" ; 
 cout << " After swapping the 2nd number is : "<< n2 <<"\n" ; 



    return 0;
}