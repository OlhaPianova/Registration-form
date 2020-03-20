#include "Registration.h"
#include <iostream>
#include <list>
#include <fstream>
using namespace std;


list<Form>Users;

void addNewUser()
{
	ifstream fs;

	string fileName = "users.txt";
	fs.open("fileName");

	bool isOPen = fs.is_open();

	if (isOPen == false) {
		cout << "Error: file not open!" << endl;
	}
	else {
		cout << "Super!" << endl;
	}
	cout << "\n\t\t\tREGISTRATION FORM\n\n";
	cout << "Please, write information about yourself: " << endl;
}
