/*
CH08-320142
a2_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool isPalindrome(string s)
{
    //Reverse string and compare it to original
    if (s == string(s.rbegin(), s.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string chosen, check;
    //game loop
    do
    {
        //Collect input word from user
        cout << "Enter the word to check: ";
        cin >> chosen;
        //program exits if user inputs "stop"
        if (chosen == "stop")
        {
            cout << "You have stopped the program!";
            exit(1);
        }
        if (isPalindrome(chosen) == true)
            cout << "The word you entered is a palindrome" << endl;
        else
            cout << "The word you entered is not a palindrome" << endl;
        //asking if user wants to replay the game from start
        cout << "Do you want to play again? Type yes or no: ";
        cin >> check;
    }
    while(check == "yes");
    return 0;
}
