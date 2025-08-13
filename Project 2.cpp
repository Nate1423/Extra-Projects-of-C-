//Write a program that the user enter an number as 'Lekë' and then the program convert it to dollars, euros and pounds, "CONVERTING PROGRAM"
#include<iostream>
using namespace std;

//Remember the values of the dollars, euros and pounds have been in the past

int main (){
	int l;
	float d = 110;
	float e = 140;
	float p = 180;
	cout<<"Enter the amount of the leks to be converted in dollars, euros and pouds:  "<< endl;
	cin>> l;
	cout<<"The amount of leks that you entered is:  "<< l / d<< " dollars"<< endl;
	cout<<"The amount of leks that you entered is:  "<< l / e<< " euros"<< endl;
	cout<<"The amount of leks that you entered is:  "<< l / p<< " pounds";
}
