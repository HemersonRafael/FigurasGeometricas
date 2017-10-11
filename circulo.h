#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

class Circulo : public FiguraGeometrica {
private:
    int x;
    int y;
    int r;
    int fill;
public:
    Circulo(int _x, int _y, int _r, int _fill);
    void draw(Screen &t);
    void translade(int _x, int _y, Screen &t );
};

#endif // CIRCULO_H
