#include "Registration.h"
#include <iostream>
#include <list>
#include<string>
#include <fstream>
using namespace std;
#define CLEAR system("cls");
string Login = "";
string Password = "";
void addNewUser(list<Form> Users){
	Form newUser;
	CLEAR;
	cout << "\n\t\t\tREGISTRATION FORM\n\n";
	cout << "Please, write information about yourself: " << endl;
	cout << endl;

	cout << "Enter name for new user: ";
	cin>>newUser.name;
	cin.ignore();

	cout << "Enter your email : ";
	cin>>newUser.email;
	cin.ignore();

	cout << "Enter your login: ";
	cin>>newUser.login;
	cin.ignore();

	cout << "Enter your password: ";
	cin >> newUser.password;
	cin.ignore();

	Users.push_back(newUser);

	ofstream fs;
	fs.open("users.txt", fstream::app);
	bool isOPen = fs.is_open();

	if (isOPen == false) {
		cout << "Error: file not open!" << endl;
	}
	else {
		cout << "Super!" << endl;
		fs << newUser.name << endl;
		fs << newUser.email << endl;
		fs << newUser.login << endl;
		fs << newUser.password << endl;
	}
	fs.close();
	cout << "New user successfully added! " << endl;
}
void log_in(list<Form> Users){

			CLEAR;
			cout << "\n\t\tEnter login: \n\n";
			cout << "(latin letters, numbers, '_')" << endl;
			cin >> Login;

			cout << "\n\t\tEnter password: \n\n\n";
			cout << "(latin letters, numbers, '_')" << endl;
			cin >> Password;
			for (Form item : Users) {
				if (Login == item.login && Password == item.password) {
					cout << "\n\n\t\t\tHi! " << item.name << endl;
				}
				else {
					cout << "Error: incorrect login or password! Try again: " << endl;
				}
			}
	}
void init(list<Form> Users){
	ifstream SU;
	SU.open("users.txt");
	bool isOPen = SU.is_open();

	if (isOPen == false) {
		cout << "Error" << endl;
	}
	else {
		int indexString = 0;
		string info;
		Form oldUser;
		while (!SU.eof()) {
			indexString++;
			getline(SU,info );
			if (indexString == 1) {
				oldUser.name = info;
			}
			 else if (indexString == 2) {
				oldUser.email = info;
			}
			else if (indexString == 3) {
				oldUser.login = info;
			}
			else if (indexString == 4)
			{
				oldUser.password = info;
				indexString = 0;
				Users.push_back(oldUser);
				oldUser = Form();
			}
		}
	}
	SU.close();
}




