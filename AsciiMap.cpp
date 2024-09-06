// AsciiMap.cpp
#include <iostream>
#include "AsciiMap.h"

AsciiMap::AsciiMap(char symbol) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            map[i][j] = symbol;
        }
    }
}

void AsciiMap::printMap() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << map[i][j];
        }
        std::cout << '\n';
    }
}