//This program will ask for your Name, Student ID, Classification, and Major
#include <iostream>
using namespace std;

int main() 
{
 	string name; //string will be used for any variable with letters
	cout << "Enter your full name: "; //asking for you to type in your name then hit enter
	getline(cin, name); //reads the whole line
	
 
	int studentID; //need a int because of numbers
	cout << "Enter your 9 digit student ID: "; 
	cin >> studentID;  
	

	string classification;
	cout << "Enter your institution level: ";  
	getline(cin, classification);   
	
	 
	string major;
	cout << "Enter your major: ";  
	getline(cin, major);  
	

 	cout << "Hi, your name is: " << endl;  
 	cout << "You're GSU student ID is: " << endl; 
	cout << "You're currently a: " << endl;  
	cout << "You're studying: " << endl;  
	
	return 0;
	
}

 
