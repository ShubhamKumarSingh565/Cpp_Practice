// write a program to print from a-z with the help of ascii value
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"======================*****========================="<<endl;
	cout<<"Without ASCII"<<endl;
	char i;
	for(i='a'; i<='z'; i++) {
		cout<<i<<" ";
	}


  cout<<"\n\n======================*****========================="<<endl;
	cout<<"With ASCII"<<endl;
    int j=97;
    for(; j<=122; j++){
    	cout<<char(j)<<" ";
	}
	
	return 0;
}
