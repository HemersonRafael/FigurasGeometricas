#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

class Circulo : public FiguraGeometrica {
private:
    int x;
    int y;
    int r;
public:
    Circulo(int _x, int _y, int _r);
    void draw(Screen &t);
};

#endif // CIRCULO_H
