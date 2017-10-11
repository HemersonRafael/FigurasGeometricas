#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta: public FiguraGeometrica{
private:
    int x1,x2,y1,y2;

public:
    Reta(int _x1, int _y1 , int _x2, int _y2);
    void draw(Screen &t);
};

#endif // RETA_H


