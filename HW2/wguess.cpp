/*
CH08-320142
a2_p4 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int x, tries = 0;
  string words[15];
  string chosen, guess, check;
  //initializing array of 15 different words
  words[0] = "computer"; //array starts from zero
  words[1] = "television";
  words[2] = "keyboard";
  words[3] = "magazine";
  words[4] = "book";
  words[5] = "macbook";
  words[6] = "bottle";
  words[7] = "waffle";
  words[8] = "stairs";
  words[9] = "dancing";
  words[10] = "photography";
  words[11] = "videogames";
  words[12] = "detergent";
  words[13] = "mocha";
  words[14] = "piano";



  //game loop
  do
  {
    //chosing a random word
    srand(static_cast<unsigned int>(time(0)));
    x = rand() %15+0;
    chosen = words[x];
    //replacing vowels with the underscores
    for (unsigned int i = 0; i < chosen.size(); i++)
    {
      if (chosen[i] == 'a' || chosen[i] == 'e' || chosen[i] == 'i' || chosen[i] == 'o'|| chosen[i] == 'u')
      chosen[i] = '_';
    }
    //guessing loop
    do
    {
      cout << "Guess the word: " << chosen << endl;
      cin >> guess;
      //program exits if quit is input
      if (guess == "quit")
      {
        cout << "You have exited the game";
        exit(1);
      }
      //counting trials
      tries = tries + 1;
    }
    while (guess != words[x]);
    {
    //outputting the number of tries it took to guess the word
    cout << "Congrats! You've guessed the word after" << tries << " times!" << endl;
    //asking if user wants to play again
    cout << "Want to play once more? input yes or no" << endl;
    cin >> check;
    }

  }
  while (check == "yes");
    return 0;
  }
