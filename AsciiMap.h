// AsciiMap.h
#ifndef ASCIIMAP_H
#define ASCIIMAP_H

class AsciiMap {
public:
    static const int width = 1;
    static const int height = 1;
    char map[height][width];

    AsciiMap(char symbol);
    void printMap();
};

#endif // ASCIIMAP_H