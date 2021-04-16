#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

enum CardType { attack, negotiate, artifact, flare };
enum Color { red, green, blue, yellow };

struct planet {
    vector<Color> habitants;
};

struct player {
    string alien;
    planet p1;
    planet p2;
    planet p3;
    planet p4;
    planet p5;
};

typedef struct planet planet;
typedef struct player player;

//adds amount of ships to a planet
planet add_ships(planet p, Color c, int amount)
{
    for(int i = amount; i > 0; i--)
    {
        p.habitants.push_back(c);
    }
    return p;
}

//removes amount of ships from planet, or as many as possible
planet remove_ships(planet p, Color c, int amount)
{
    while(amount > 0)
    {
        vector<Color>::iterator loc;
        loc = find(p.habitants.begin(), p.habitants.end(), c);
        if(loc != p.habitants.end())
        {
            p.habitants.erase(loc);
            amount--;
        }
        else
        {
            break;
        }
    }
    return p;
}

int game()  {
    // initialize game
    player Ismail;
    Ismail.p1 = add_ships(Ismail.p1, green, 4);
    cout << Ismail.p1.habitants.size() << "\n";
    Ismail.p1 = remove_ships(Ismail.p1, green, 6);
    cout << Ismail.p1.habitants.size() << "\n";
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