#include "flavor.h"

int main() {
	int custom_flavors_type = 0;
	string name;
	do
	{
//		system("cls");
		cout << "Enter type: ";
		cin >> custom_flavors_type;
		if (custom_flavors_type == 1 || custom_flavors_type == 2 || custom_flavors_type == 3)
		{
			cout << "Enter your name: ";
			cin >> name;
			AppScreens::Home(name);
			break;
		}
		else
		{
			cout << "Invalid type!" << endl;
		}

//		system("pause");
	} while (true);
	FlavorsType flavors_type = (FlavorsType)custom_flavors_type;
	Flavors::runApp(flavors_type);

}