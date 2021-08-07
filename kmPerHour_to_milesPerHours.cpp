#include<iostream>
using namespace std;

int main(){
	cout<<"Program to Convert Kilometers per hour to miles per hour"<<endl;
	cout<<"=======================****==========================="<<endl;
	cout<<"Note: 1 miles = 1.60934 km or 1 Km = 0.621 miles"<<endl;
	cout<<"=======================****==========================="<<endl;
	int dis;
	float miles;
	cout<<"Distance in Kilometer: ";
	cin>>dis;
	miles = dis * .621;
	cout<<"The "<<dis<<" Km/hr means "<<miles<<" Miles/hr.";
	
	return 0;	
}
