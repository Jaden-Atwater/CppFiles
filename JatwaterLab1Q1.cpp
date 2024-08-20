//This program will ask for your Name, Student ID, Classification, and Major
#include <iostream>
using namespace std;

int main() 
{
  string name; 
  cout << "Enter your full name: "; 
  getline(cin, name); 
  
  int studentID; 
  cout << "Enter your 9 digit student ID: "; 
  cin >> studentID;  
  cin.ignore(); // add this line to ignore the newline character left in the input buffer

  string classification;
  cout << "Enter your institution level: ";  
  getline(cin, classification);   
  
  string major;
  cout << "Enter your major: ";  
  getline(cin, major);  
  

  cout << "Hi, your name is: " << name << endl;  
  cout << "You're GSU student ID is: " << studentID << endl; 
  cout << "You're currently a: " << classification << endl;  
  cout << "You're studying: " << major << endl;  
	
	return 0;
}
 

 
