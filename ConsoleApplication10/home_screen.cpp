#include "screens.h"

void AppScreens::Home(string name)
{
	if (name == "admin")
	{
		cout << "Welcome to admin credentials, " << name << "!" << endl;
	}
	else
	{
		cout << "Welcome to app, " << name << "!" << endl;
	}
}