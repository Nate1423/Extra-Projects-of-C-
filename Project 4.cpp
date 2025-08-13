//Write a program that the user have to enter 5 integer as inputs and the program return the lowest of them, "REPORT PROGRAM"
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n, e, s, w, c;
	cout<<"How many accidents have been in east city: "<< endl;
	cin>> e;
	cout<<"How many accidents have been in north city: "<< endl;
	cin>> n;
	cout<<"How many accidents have been in south city: "<< endl;
	cin>> s;
	cout<<"How many accidents have been in west city: "<< endl;
	cin>> w;
	cout<<"How many accidents have been in center city: "<< endl;
	cin>> c;
	
    int lowest = e;
	
	if(n < lowest){
		 lowest = n;
		 cout<<"The lowest accidents have been in north city. ";
	}
	else if(s < lowest){
		lowest = s;
		cout<<"The lowest accidents have been in south city. ";
	}
	else if(w < lowest){
		lowest = w;
		cout<<"The lowest accidents have been in west city. ";
	}
	else if(c < lowest){
		lowest = c;
		cout<<"The lowest accidents have been in central city. ";
	}
		else{
			cout<<"The lowest accidents have been in east city. ";
		}
	return 0;
}
	
