#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"


class FiguraGeometrica{
public:
   virtual void draw(Screen &t)=0;
   virtual void debug() = 0;
};

#endif // FIGURAGEOMETRICA_H
