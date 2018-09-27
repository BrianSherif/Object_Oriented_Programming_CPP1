/*
CH08-320142
a5_p4 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "TournamentMember.h"

int main() {

    Player *players[50];
    int num_players;
    std::cin >> num_players;
    for(int i = 0; i < num_players; i++){

        std::string Name
        std::cout << "Name?"<<'\n';
        std::cin >> Name
        players[i] = name;
    }
    while(true)
    {
        int idx; // number of player in list
        std::cout << "Type the number of the player"<<'\n';
        std::cin >> idx;
            std::cout << "Type 'r' for red card and 'y' for yellow card"<<'\n';
            char op; // the color of the card
            std::cin >> op;
            if(op == 'r')
              {
                ref.addToRedCardList(players[idx]);
              }
            else
              {
                ref.addToYellowCardList(players[idx]);
              }
    }

    return 0;
}
