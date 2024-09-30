#ifndef MAP_H
#define MAP_H

#include <string>

class Map
{
    public:
       int size; // amount of SQM's in the map
       void GenerateMap(int size);
       int playerPOS;
};

#endif