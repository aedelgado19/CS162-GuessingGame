/* Author: Allison Delgado
 * Last updated 9/15/20 
 * GuessingGame chooses a random number, and the user tries to guess it.
 */


#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int userGuess = 0;
  bool keepPlaying = true;
  char yn = 'a';

  //loop runs during gameplay
  while (keepPlaying == true) {
    int random = rand()%101; //gives numbers between 0 and 100
    cout << "Here is the top secret number: " <<  random << endl;
    int count = 0;
    //until user has guessed the random number...
    while(userGuess != random){
      cout << "Enter your guess" << endl;
      cin >> userGuess;
      
      if (userGuess > random){ //guess is too high
	cout << "Your guess was too high." << endl;
	count++;
      }
      else if (userGuess < random){ //guess is too low
	cout << "Your guess was too low." << endl;
	count++;
      }
      else { //number guessed correctly
	count++;
	cout << "You guessed it!" << endl;
	cout << "Number of guesses: " << count << endl;
      }
    }
    //out of loop, ask if want to play again
    cout << "Do you want to play again? (Y/N)" << endl;
    cin >> yn;
    if (yn == 'y' || yn == 'Y'){
      keepPlaying = true;
    } else {
      keepPlaying = false;
      cout << "goodbye!" << endl;
    }
  }
  
  return 0;
 }



  


 
