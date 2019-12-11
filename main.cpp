#include <iostream>
#include <string>
#include <conio.h>
#include "Meeting.h"
#include "Participants.h"

using namespace std;

int main() {
	void mainMenu();

	Meeting* meetings[20];
	Participants* participants[12];
	participants[0] = new Participants("Steve Jobs");
	participants[1] = new Participants("Bill Gates");
	participants[2] = new Participants("Elon Musk");
	participants[3] = new Participants("Mary Lou Jepsen");
	participants[4] = new Participants("Sophie Wilson");
	mainMenu();






	system("pause");
	return 0;
}
void mainMenu() {
	int option(7);

		cout << "Welcome to the Meeting Software 3000 \n" << "--------------------------------------\n";
		cout << "Main Menu \nSelect Option \n";
		cout << "1) Setup New Meeting\n";
		cout << "2) View Current Meetings\n";
		cout << "3) Add New Participant\n";
		cout << "4) Edit Preferences\n";
		cout << "5) Edit Exclusions\n\n";
		cout << "6) View Equipment Inventory\n\n";


	switch (option) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	}
	option = _getch();
}
