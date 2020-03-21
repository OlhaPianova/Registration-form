#pragma once
#include<string>
#include<list>
using namespace std;

struct Form {
	string name;
	string email;
	string login;
	string password;
};
void addNewUser(list<Form> Users);
void init(list<Form> Users);
void log_in(list<Form> Users);

