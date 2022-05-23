// Google Home.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//These different '#include' statements include the libraries for the code so that you can have the different langauge available. 
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void myOttersonhome() {

	//This will set up the different streams and strings that I will be using in this code.
	fstream f;
	string us;
	string us2;
	char usr_in;
	char nm;
	//This will be the first line of text in the code, welcoming you to the program.
	cout << "Which mode would you like?\n"
		//This will lay out the different options for the user to select from to perform different functions in the code. 
		"Select r for read.\n"
		"Select w for write.\n" << endl;
	cin >> usr_in;
	if (usr_in == 'r') {
		//This will only give the user the option for output text because they selected 'r' for Read Only.
		f.open("myText", ios::in);
		string s;
		while (getline(f, s)) {
			cout << s << endl;
		}
		f.close();
	}
	else {
		f.open("myText", ios::out | ios::in | ios::app);
		cout << "Welcome to Otterson Home! What is the coolest first name?\n" << endl;
		//This will give the user a prompt to type in  their name. 
		cin >> us;
		us.append(" ");
		cout << "What is the coolest last name?\n" << endl;
		cin >> us2;
		us.append(us2);
		cout << "Your new name is: " << us << endl;
		//This will recall the information that the user has inputted into the code and welcome them by the name they they typed in.
		f << us;

		char nm;
		cout << "Do you like your new name? Type y for yes, n for no.\n" << endl;
		cin >> nm;
		if (nm == 'y') {
			cout << "Glad to be of service!" << endl;
		}
		else {
			cout << "Please try again and pick a cooler name this time. This could be your chance for a fresh start!\n" << endl;
		}


		f.close();
	}
}



int main()
{
	char ui;
	while (true) {
		myOttersonhome();
		cout << "Do you want to continue? y for yes\n" << endl;
		cin >> ui;
		if (ui != 'y') {
			break;

		}
	}
	
}

