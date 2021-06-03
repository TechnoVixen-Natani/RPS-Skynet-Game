#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

int skynetchooses() //Generates random number between 1 and 3, stores variable for later
{
	srand((unsigned)time(0));
	return (rand() % 3) + 1;

}

string skynetchoice(int choice) // assigns choice weapon to be used in game!
{
	
	switch (choice)
	{
	case 1:
		return "Rock";
	case 2:
		return "Paper";
	case 3:
		return "Scissors";
	default:
		return "Skynet has enctounered an error!";
	}

	
}

void showMenu()
{
	cout <<"\n\t**********************************"
		<< "\n\t*CHOSE YOUR WEAPON WISELY MORTAL!*"
		<< "\n\t**********************************\n\n"
		<< "1. Rock\n"
		<< "2. Paper\n"
		<< "3. Scissors\n"
		<< "4. Quit and let Skynet win!\n\n"
		<< "Enter your choice...: ";

}

int main()
{
	int player_choice;

	const int  PLAYER_ROCK = 1,
		PLAYER_PAPER = 2,
		PLAYER_SCISSORS = 3,
		PLAYER_SKYNETWINS = 4;

		do
		{
			showMenu();
			cin >> player_choice;
			int skynet_weapon = skynetchooses();

			while (player_choice < PLAYER_ROCK || player_choice > PLAYER_SKYNETWINS)
			{
				cout << "Please choose your weapon: ";
				cin >> player_choice;
			}
			if (player_choice == PLAYER_SKYNETWINS)
			{
				cout << "\nSkynet won because you were to afraid to face us! Muhahahaha!";
				break;
			}
			
			
				cout << "Skynet has chosen: " << skynetchoice(skynet_weapon) << endl;
				cout << "You have chosen: " << skynetchoice(player_choice) << endl;
			
				if (player_choice == skynet_weapon)
					cout << "\nYou and Skynet are locked in a duel!\n";

				else if (player_choice == PLAYER_ROCK && skynet_weapon == PLAYER_SCISSORS)
				{
					cout << "\nSkynet faultered on their attack and you smashed their opitcal sensors!\n";
				}

				else if (player_choice == PLAYER_PAPER && skynet_weapon == PLAYER_ROCK)
				{
					cout << "\nYou managed to unplug their power cell and shutdown Skynet!\n";
				}

				else if (player_choice == PLAYER_SCISSORS && skynet_weapon == PLAYER_PAPER)
				{
					cout << "\nSomehow you managed to sneak around and sliced through their neural link!\n";
				}

				else
					cout << "\nSkynet sent a T100 after you, better luck next time! I'll be back!\n";


		} while (true);

}



