// Wtite a program to print the sequence of numbers upto N in Ascending and Descending order
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int i, n;
    cout<<"Enter the value of N upto which you wants to print the sequence: ";
    cin>>n;
    cout<<"\n";
    
    cout<<"Numbers in Ascending order: "<<endl;
    for(i=1; i<=n; i++) {
        cout<<i<<setw(3);
    }

    // cout<<"Numbers in Descending order: "<<endl;
    // i = i - 1;
    // for(n; i>1; i--) {
    //     cout<<i<<setw(3);
    // }
}
