#include <iostream>
#include <cstdlib>


int main() {
  
  // Rock, Paper, Scissors, Lizard, or Spock!
  
  srand(time(NULL));

  int computer = std::rand() % 3 + 1;

  int user = 0;

  
  std::cout << "=======================\n";
  std::cout << "rock paper scissors!\n.";
  std::cout << "=======================\n";
  
  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  
  std:: cout << "Select 1, 2, or 3 to represent your move... now... GO!\n\n";
  std::cin >> user; 
    
  if (user == computer) {

    std::cout << "it's a tie! Stop picking Spock!\n";

  }

  // user rock

  else if (user == 1) {

    if (computer == 2) {

      std::cout << "OH NO! You lose!\n";

    }
    if (computer == 3) {

      std::cout << "Oh Yes! You won!!\n";

    }

  }

  // user paper

  else if (user == 2) {

    if (computer == 1) {

      std::cout << "Oh Yes! You won!!\n";

    }
    if (computer == 3) {

      std::cout << "OH NO! You lose!\n";

    }

  }
  // user scissors

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "Oh Yes! You won!!\n";

    }
    if (computer == 2) {

      std::cout << "OH NO! You lose!\n";
    }

    }


  return 0;

}
