// DOSRPG.cpp : Created by Julio Lanza - November 24th 2016

// DOSRPG is going to be a game that allows a user to create a custom character
// and go through a series of events and solving them by a series of multiple choices.
// each decision made by the user affects the outcome from their story.

// We shall start with including standard libraries.
#include <iostream>
#include <string>
using namespace std;

// Here we shall list the fuction prototypes so they can be called from the main function.
void attributeValues();
void characterType();

int main()
{
	// Custom player name will be inserted into this string variable.
	string playerName;

	//Starting the main Campaign
	cout << "Welcome adventurer to DOSRPG. Lets start by entering a name for your champion." << endl;
	cout << "Champion Name: ";
	cin >> playerName;
	cout << "Lord " << playerName << " Choose your destiny." << endl;
	
	system("PAUSE"); // Remember to remove this system pause onced finished. improper C++ Code.
	return 0;
}

void characterType()
{
	// Here we shall list the types of classes that a player might pick from.
	// Three classes exists. Warrior, Mage, and Archer. Lets keep it simple for now.
	// When the player selects the class the program automatically provide the starter 
	// equipment and adds +3 to the corresponding skill for each class.
}

void attributeValues()
{
	// Here we shall include the default attributes for a character.

	// Array has been created to contain all data for the default character model in DOSRPG.
	// Skills have a max level of 10.
	int attribute[6];

	attribute[0] = 3; //strength
	attribute[1] = 3; //constitution
	attribute[2] = 3; //dexterity
	attribute[3] = 3; //intelligence
	attribute[4] = 3; //charisma
	attribute[5] = 3; //luck
}
