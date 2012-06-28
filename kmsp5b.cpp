/* Kristi M Short
   COP1000.C01
   Project 5 */

#include<iostream>
#include<cstdlib>    // for rand and srand
#include<ctime>      // time function
using namespace std;


/* Program Purpose: This program plays a game of rock, paper, scissors with the user */


// function prototypes
void hello();         // hello does not return a value
int p2choice();       // randomizer function
void displaymenu();   // menu function does not return a value
void eval(int choice, int p2choices);           // evaluation function


int main()
{
	// Variables
	int choice = 0;
	int seed = 0;
	int p2choices = 0;

	// Display Hello
	hello();

	while (choice != 4)
	{
	// Run p2choice randomize function. 
	p2choices = p2choice();

	
	// Run displaymenu function
	displaymenu();

	// Prompt user for choice 
	cout << "\t** Choose your weapon!  \n\n";
	cout << "\t********************************************************\n\n";
	cout << "\t"; cin >> choice; cout << endl;

	// TEST DISPLAY STATEMENT
	//cout << "COMPUTER CHOICE IS: " << p2choices << endl;
	//cout << "USER CHOICE IS: " << choice << endl;

	// Run evalution function on user choice and compare with comp
	eval(choice);
	}

	// End of Program 
	return 0;

}

// Hello Function
void hello()
{
	cout << "\t********************************************************\n";
	cout << "\t***               Let's Play a game of               ***\n";
	cout << "\t***              Rock, Paper, Scissors!              ***\n";
	cout << "\t********************************************************\n";
	cout << "\t********************************************************\n\n\n";
}

// p2choice function. Random Number Generator. Returns p2choice 
int p2choice()
{
	// get system time
	int seed = time(0);

	// seed random number generator
	srand(seed);

	// modulus of rand() and the plus 1, returns a value 1, 2, or 3
	int p2choices = 1 + rand() % 3;

	// test display
	//cout << p2choices << endl;

	// returns the value of p2choices to calling function
	return p2choices;
}

// displaymenu function
void displaymenu()
{
	cout << "\t********************************************************\n";
	cout << "\t**                    !Armoury!                       **\n";
	cout << "\t********************************************************\n";
	cout << "\t** 1. Rock (very solid most likely granite.)          **\n";
	cout << "\t** 2. Paper (college ruled, flimsy, clingy when wet.) **\n";
	cout << "\t** 3. Scissors (Fiskars, good scissors, sharp.)       **\n";
	cout << "\t** 4. Quit while you still can!                       **\n";
	cout << "\t********************************************************\n\n";
}

// evaluation function. eval() 
void eval(int choice, int p2choices)
{
	
	if(choice == 1)
	{
		if(p2choices == 2)
		{
			cout << "\t** Computers Choice is: " << p2choices << endl;
			cout << "\t** Your Choice is: " << choice << endl << endl;
			cout << "\t** Paper covers Rock. Computer Wins! \n\n\n";
		}
		else if(p2choices == 3)
		{
			cout << "\t** Computers Choice is: " << p2choices << endl;
			cout << "\t** Your Choice is: " << choice << endl << endl;
			cout << "\t** Rock breaks Scissors! You Win! \n\n\n";
		}
		else
			{
				cout << "\t** Computers Choice is: " << p2choices << endl;
			    cout << "\t** Your Choice is: " << choice << endl << endl;
				cout << "\t** It's a Draw, no fun for anyone. \n\n\n";
				
		    }
	}

	if(choice == 2)
	{
		if(p2choices == 1)
		{
			cout << "\t** Computers Choice is: " << p2choices << endl;
			cout << "\t** Your Choice is: " << choice << endl << endl;
			cout << "\t** Paper covers Rock, it was soggy. You Win! \n\n\n";
		}
		else if(p2choices == 3)
		{
			cout << "\t** Computers Choice is: " << p2choices << endl;
			cout << "\t** Your Choice is: " << choice << endl << endl;
			cout << "\t** Scissors cut Paper. Computer Wins!\n\n\n";
		}
		else 
			{
				cout << "\t** Computers Choice is: " << p2choices << endl;
			    cout << "\t** Your Choice is: " << choice << endl << endl;
				cout << "\t** It's a Draw, no fun for anyone. \n\n\n";
				
		    }
	}

	if(choice == 3)
	{
		if(p2choices == 1)
		{
			cout << "\t Computers Choice is: " << p2choices << endl;
			cout << "\t Your Choice is: " << choice << endl << endl;
			cout << "\t Rock breaks Scissors! Computer Wins! \n\n\n";
		}
		else if(p2choices == 2)
		{
			cout << "\t Computers Choice is: " << p2choices << endl;
			cout << "\t Your Choice is: " << choice << endl << endl;
			cout << "\t Scissors cut Paper! You Win! \n\n\n";
		}
		else 
			{
				cout << "\t Computers Choice is: " << p2choices << endl;
			    cout << "\t Your Choice is: " << choice << endl << endl;
				cout << "\t It's a Draw, no fun for anyone. \n\n\n";
				
	        }
				
	}
}