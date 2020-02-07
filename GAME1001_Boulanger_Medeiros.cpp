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

		/*temp delete later */ validPassword = true;
	} while (validPassword == false);


	//the actual rock paper scissors game
		/* 
		-set up a do while loop for the main game loop
		-set up random number generators for cpu's turns (remember to add 
		variables to hold the cpu's guess and scores and stuff)
		-tell the player to enter their move as a single character "r" for rock, "p" for paper or "s" for scissors
		-need to write it out and figure out if a switch statement or a couple of if statements would be better
		for comparing input with the cpu 
		-add a plus one score to either the Wins, losses or ties variable


		*/


	system("pause");
	return 0;
}