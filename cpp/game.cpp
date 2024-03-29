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
    vector<card> *deck = build_deck();
    vector<card> *discard;
    planet warp;
    planet gate;
    srand(time(0)); //sets seed for random_shuffle
    random_shuffle(deck->begin(), deck->end());
    
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