#ifndef PLANET_H
#define PLANET_H
#include <vector>
#include "color.h"

struct planet {
    std::vector<Color> habitants;
};
typedef struct planet planet;

//adds amount of ships to a planet
planet add_ships(planet p, Color c, int amount);

//removes amount of ships from planet, or as many as possible
planet remove_ships(planet p, Color c, int amount);

#endif