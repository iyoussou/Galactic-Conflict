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
    bool negotiate = false;
    bool artifact = false;
    bool flare = false;
    bool reinforcement = false;
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
        char type = cur[0];
        if(type == 'a') //if attack
        {
            card a;
            a.attack = (int) stoi(cur.substr(2,cur.length()));
            deck.push_back(a);
        }
        else if(type == 'N') //if negotiate
        {
            card n;
            n.negotiate = true;
            deck.push_back(n);
        }
        else if(type == 'r') //if reinforcement
        {
            card r;
            r.reinforcement = true;
            r.attack = (int) stoi(cur.substr(2,cur.length()));
            deck.push_back(r);
        }
        else if(type == 'z')//if artifact
        {
            card z;
            z.artifact = true;
            z.name = cur.substr(2,cur.length());
            deck.push_back(z);
        }
        else //if flare
        {
            card s;
            s.flare = true;
            s.name = cur.substr(2,cur.length());
            deck.push_back(s);
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
        cout << deck.at(i).name << "\n";
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