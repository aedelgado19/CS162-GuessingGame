#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int userGuess = 0;
  int count = 0;
  bool keepPlaying = true;
  char yn = 'a';

  //loop runs during gameplay
  while (keepPlaying == true) {
    int random = rand()%101;
    cout << "Here is the top secret number: " <<  random << endl;
    while(userGuess != random){
      cout << "Enter your guess" << endl;
      cin >> userGuess;
      
      if (userGuess > random){
	cout << "Your guess was too high." << endl;
	count++;
      }
      else if (userGuess < random){
	cout << "Your guess was too low." << endl;
	count++;
      }
      else {
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
  //return
  return 0;
 }



  


 
