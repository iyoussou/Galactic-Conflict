#ifndef DECK_H
#define DECK_H
#include <string>
#include <vector>
#include "planet.h"
#include "color.h"

struct card {
    int attack = -1;
    bool negotiate = false;
    bool artifact = false;
    bool flare = false;
    bool reinforcement = false;
    std::string name;
};
typedef struct card card;

//formats cards in deck.txt and constructs a deck
std::vector<card> *build_deck();

//add amount cards (or as many as possible) to dest, taken from src
void draw_cards(std::vector<card> *src, std::vector<card> *dest, int amount);

#endif