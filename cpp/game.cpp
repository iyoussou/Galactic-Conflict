#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>
#include "planet.h"
#include "color.h"
#include "deck.h"
using namespace std;

struct player {
    string alien;
    planet p1;
    planet p2;
    planet p3;
    planet p4;
    planet p5;
    vector<card> *hand = new vector<card>;
};
typedef struct player player;

int game()  {
    // initialize game
    player Ismail;
    vector<card> *deck = build_deck();
    for(unsigned int i = 0; i < deck->size(); i++)
    {
        cout << deck->at(i).name << "\n";
    }
    draw_cards(deck, Ismail.hand, 8);
    for(unsigned int i = 0; i < Ismail.hand->size(); i++)
    {
        cout << Ismail.hand->at(i).attack << "\n";
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