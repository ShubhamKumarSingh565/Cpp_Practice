#include<iostream>
using namespace std;

int main(){
	cout<<"Convert temperature in Kelvin to Fahrenheit"<<endl;
	cout<<"=======================****==========================="<<endl;
	cout<<"Note: 0°C = 32°F = 273°K"<<endl;
	cout<<"=======================****==========================="<<endl;
	float kel, fah;
	cout<<"Temperature in Kelvin: ";
	cin>>kel;
	fah = (9.0 / 5) * (kel - 273.15) + 32;
	cout<<"Temperature in Fahrenheit: "<<fah;
	return 0;	
}
