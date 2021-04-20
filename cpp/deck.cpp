#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>
#include "deck.h"
using namespace std;

vector<card> *build_deck()
{
    string cur;
    vector<card> *deck = new vector<card>; //will need to delete(free) this
    ifstream decklist("deck.txt");
    while(getline(decklist, cur))
    {
        char type = cur[0];
        if(type == 'a') //if attack
        {
            card a;
            a.attack = (int) stoi(cur.substr(2,cur.length()));
            deck->push_back(a);
        }
        else if(type == 'N') //if negotiate
        {
            card n;
            n.negotiate = true;
            deck->push_back(n);
        }
        else if(type == 'r') //if reinforcement
        {
            card r;
            r.reinforcement = true;
            r.attack = (int) stoi(cur.substr(2,cur.length()));
            deck->push_back(r);
        }
        else if(type == 'z')//if artifact
        {
            card z;
            z.artifact = true;
            z.name = cur.substr(2,cur.length());
            deck->push_back(z);
        }
        else //if flare
        {
            card s;
            s.flare = true;
            s.name = cur.substr(2,cur.length());
            deck->push_back(s);
        }
    }
    return deck;
}

void draw_cards(vector<card> *src, vector<card> *dest, int amount)
{
    while(amount > 0)
    {
        if(src->size() == 0)
        {
            break;
        }
        else
        {
            card c = src->back();
            src->pop_back();
            dest->push_back(c);
            amount--;
        }
    }
}