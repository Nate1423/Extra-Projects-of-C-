//Write a program that the user input 5 integer numbers and the program shows gow many points the person got, "STUDENT PROGRAM"
#include<iostream>
using namespace std;

int main(){
	int p;
	cout<<"How many books have you read out of 5 books: "<< endl;
	cin>> p;
	switch(p){
		case 1:cout<<"You have earned 1 point.";
		break;
		case 2:cout<<"You have earned 2 point.";
		break;
		case 3:cout<<"You have earned 3 point.";
		break;
		case 4:cout<<"You have earned 4 point.";
		break;
		case 5:cout<<"You have earned 5 point.";
		break;
		default:cout<<"You have readed more than 5 books congratulations. ";
	}
}
