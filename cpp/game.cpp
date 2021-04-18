#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>
#include "planet.h"
#include "color.h"
using namespace std;

struct card {
    int attack = -1;
    bool negotiate;
    bool artifact;
    bool flare;
    string name;
};
typedef struct card card;

struct player {
    string alien;
    planet p1;
    planet p2;
    planet p3;
    planet p4;
    planet p5;
};
typedef struct player player;

//formats cards in deck.txt and constructs a deck
vector<card> build_deck()
{
    string cur;
    vector<card> deck;
    ifstream decklist("deck.txt");
    while(getline(decklist, cur))
    {
        if(cur[0] == 'a') //if attack
        {
            card a;
            a.attack = (int) stoi(cur.substr(2,cur.length()));
            deck.push_back(a);
        }
        else //if not an attack (will need to be expanded)
        {
            card r;
            r.name = cur;
            deck.push_back(r);
        }
    }
    return deck;
}

int game()  {
    // initialize game
    player Ismail;
    Ismail.p1 = add_ships(Ismail.p1, green, 4);
    cout << Ismail.p1.habitants.size() << "\n";
    Ismail.p1 = remove_ships(Ismail.p1, green, 6);
    cout << Ismail.p1.habitants.size() << "\n";
    vector<card> deck = build_deck();
    for(unsigned int i = 0; i < deck.size(); i++)
    {
        cout << deck.at(i).attack << "\n";
    }
    // start turn
    // regroup phase
    // destiny
    // launch
    // alliance
    // planning
    // reveal
    // resolution
    // check for win
    return 0;
}

int main() {
    game();
    return 0;
}