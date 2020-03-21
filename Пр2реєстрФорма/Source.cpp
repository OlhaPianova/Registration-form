#include"Registration.h"
#include<iostream>
#include<string>
#include<list>
using namespace std;
list<Form>Users;

int main() {
	init(Users);

	int action = 0;
	do {
		cout << "Enter action: " << endl;
		cout << "1. log in" << endl;
		cout << "2. registration" << endl;
		cout << "3. Exit" << endl;

		cin >> action;
		switch (action) {
		case 1: {
			log_in(Users);
		}break;
		case 2: {
			addNewUser(Users);
		}break;
		case 3: {
			break;
		}
		}

	} while (action!=3);


	system("pause");
	return 0;
}