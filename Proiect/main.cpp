#include <iostream>
#include <string>
#include "CommandPanel.h"
#include "Exception.h"

using namespace std;

int main() {
	CommandPanel* commandPanel = new CommandPanel();
	commandPanel->generateRecipes();
	int optiune;
	string name;
	int quantity;
	do {
		system("cls");
		cout << "1. Show menu\n";
		cout << "2. Show cakes available in the carousel\n";
		cout << "3. Order a cake\n";
		cout << "4. Order multiple cakes\n";
		cout << "0. Exit\n";
		cin >> optiune;
		switch (optiune) {
		case 1:
			commandPanel->showProducts();
			system("pause");
			break;
		case 2:
			commandPanel->showProductsInCarousel();
			system("pause");
			break;
		case 3:
			try {
				cout << "Give the name of the cake: ";
				cin >> name;
				if (!commandPanel->checkName(name)) {
					throw Exception("Error : We currently do not have the cake that you requested :(\n", 0);
					system("pause");
				}
			}
			catch (Exception e) {
				do {
					cout << e.error;
					system("pause");
					cout << "Give the name of the cake: ";
					cin >> name;
				} while (!commandPanel->checkName(name));
			}
			commandPanel->selectProduct(name);
			system("pause");
			break;
		case 4:
			try {
				cout << "Give the name of the cake: ";
				cin >> name;
				if (!commandPanel->checkName(name)) {
					throw Exception("Error : We currently do not have the cake that you requested :(\n", 0);
					system("pause");
				}
			}
			catch (Exception e) {
				do {
					cout << e.error;
					system("pause");
					cout << "Give the name of the cake: ";
					cin >> name;
				} while (!commandPanel->checkName(name));
			}
			try {
				while ((cout << "Give the number of products wanted: ") && !(cin >> quantity)) {
					cout << "Error: The value you entered is not a number!\n";
					system("pause");
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				if (quantity < 1) {
					throw Exception("Error : Quantity must be a number greater than 0!\n", quantity);
					system("pause");
				}
			}
			catch (Exception e) {
				do {
					cout << e.error;
					system("pause");
					while ((cout << "Give the number of products wanted: ") && !(cin >> quantity)) {
						cout << "Error: The value you entered is not a number!\n";
						system("pause");
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
				} while (quantity < 1);
			}
			commandPanel->selectProduct(name, quantity);
			system("pause");
			break;
		case 0:
			exit(0);
			break;
		default:
			cout << "Something went wrong, please try again!\n";
			system("pause");
			break;
		}
	} while (optiune != 0);
	return 0;
}