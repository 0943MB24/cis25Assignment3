#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "1. Add Item\n\n2. View Items\n\n3. Exit\n\n";
	cout << "Choose an option: ";
	cin >> choice;

	if (choice == 1) cout << "\nItem added!\n";
	else if (choice == 2) cout << "\nDisplaying Items . . . \n";
	else if (choice == 3) cout << "\nExiting . . .\n";
	else cout << "\nInvalid option.\n";
	return 0;
}

