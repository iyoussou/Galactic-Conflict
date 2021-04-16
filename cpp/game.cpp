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
}

typedef struct player player;

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