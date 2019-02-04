#include <ctime>
#include <iostream>
#include <cstdlib>
#include <random>
#include <string>
using namespace std;



int main() {
	//This shows the size of our grid.
	int highestNum = 64;
	int lowestNum = 1;
	//Generates seed of random
	srand(time(0) - 64);
	//Generates a random number
	int number = ((rand() % 64) + 1);
	//Count of Binary Number
	int Bnum = 0;
	//Count of Human Number
	int Hnum = 0;
	//Number guessed
	int guess;
	//Restart program
	char choice = 'y';


	//This displays a welcome message to the user
	cout << "Welcome to Project Skynet: HK - Aerial drone \n";
	system("pause");
	cout << "\n";

	
		//Binary Functions
		while (highestNum >= lowestNum) {
			//Binary search
			int Bsearch = ((highestNum - lowestNum) / 2) + lowestNum;
			//if this happens do this
			if (Bsearch < number) {
				//increment Bnum 
				++Bnum;
				//perform
				lowestNum = lowestNum + Bsearch;
			}
			if (Bsearch > number) {
				++Bnum;
				highestNum = highestNum - Bsearch;
			}
			//after the if, run this and determine if this if is correct then run this if
			else if (Bsearch = number) {
				
				//delacreing the seed of rand()
				srand(time(0) - 64);
				//calculating a random number 
				int number = ((rand() % 64) + 1);
				//guess
				cout << "Find the correct location guess between 1-64. ";
				cin >> guess;
				//while guess does not = number
				while (guess != number) 
				{
					//if guess was higher
					if (guess > number) 
					{
						//increment Hnum
						++Hnum;
						cout << "Too high, try again: ";
						cin >> guess;
					}
					// if guess is lowestNum than number
					else if (guess < number)
					{
						//increment Hnum
						++Hnum;
						cout << "Too low, try again: ";
						cin >> guess;

					}
				}
				if (guess == number)
				{
					++Hnum;
					//displaying
					cout << "Correct! \n";
					cout << Bnum << " Binary search(s) preformed \n";
					cout << number << " linear search(s) preformed \n";
					cout << Hnum << " Human search(s) preformed \n";

					system("pause");
					cout << "\n";

				}
				do
				{
					//set Hnum and Bnum to zero
					Hnum = 0;
					Bnum = 0;
					cout << "Play again? y/n: ";
					cin >> choice;
					//ends program or starts another game
				} while (choice != 'y' && choice != 'n');
			}


		}
		return 0;
	}
	
