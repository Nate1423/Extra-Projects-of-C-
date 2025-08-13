//Write a program that the use enter the amount of petrol and the program tells you how much kilometres you can do, "CAR PROGRAM"

#include<iostream>
using namespace std;

int main(){
	int km, p;
	cout<<"Enter the amount of litres of petrol"<< endl;
	cin>> p;
	cout<<"You can do "<< p * 15<< " km, with this amount of petrol";
}
