#include "screens.h"


void AppScreens::Home(string name)
{
	string* login = new string(name);
	if (name == "Admin")
	{
		cout << "Welcome to admin credentials, " << name << "!" << endl;
	}
	else
	{
		cout << "Welcome to app, " << name << "!" << endl;
	}
}