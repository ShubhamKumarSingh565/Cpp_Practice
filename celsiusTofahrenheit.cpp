#include<iostream>
using namespace std;

int main(){
	cout<<"Convert temperature in Celsius to Fahrenheit"<<endl;
	cout<<"==================****====================="<<endl;
	cout<<"Formula used: C = (F-32)*5/9"<<endl;
	cout<<"Enter temperature in celsius"<<endl;
	cout<<"==================****====================="<<endl;
	int temp, fah;
	cout<<"temp(in celsius): ";
	cin>>temp;
	cout<<"Temperature is: "<<temp<<" °C"<<endl;
	fah = (temp*9)/5 + + 32;
	cout<<"Temperature in Fahrenheit: "<<fah; 
	
	return 0;
}
