#pragma once
#include<string>
using namespace std;

struct Form {
	string name;
	string email;
	string login;
	int password;
};
void addNewUser();