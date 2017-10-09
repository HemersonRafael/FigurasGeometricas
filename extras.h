#ifndef EXTRAS_H
#define EXTRAS_H

#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include "figurageometrica.h"

class Extras
{
public:
    Extras();
    void logCsv(std::string data, std::string filename , std::string header);
    void loadFigures(std::string fileName);
    void randFigures( std::string fileName, int size );


};

#endif // EXTRAS_H
