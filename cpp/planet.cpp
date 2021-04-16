#include "planet.h"

planet add_ships(planet p, Color c, int amount)
{
    for(int i = amount; i > 0; i--)
    {
        p.habitants.push_back(c);
    }
    return p;
}

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