#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <fstream>

using namespace std;

int main()
{
	bool validUsername, validPassword = false;
	string userInput;
	const int NAME_MIN_LENGTH = 8;
	
	do //get username, check if it exists and ask for password, or make a new user
	{
		do //make sure the username is a valid length
		{
			cout << "\nPlease enter a username. (must be at least 8 characters long): ";
			cin >> userInput;
	
			if (userInput.length() < NAME_MIN_LENGTH) 
			{
				cout << "\nUsername is too short, please try again" << endl;
				validUsername = false;
			}
			else
				validUsername = true;
		} while (validUsername == false);

		//check if user name doesnt exist
			//if so have them create a password, then create a new user and set validPassword = true
			//else have them enter a password in a do while loop
				//check if the password is correct, loop until it is, or let them return to the earlier menu with a break if they type back

	} while (validPassword == false);

	//ask the player if they wanna play against a computer or another person


	system("pause");
	return 0;
}