#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica  {
private:
    int x;
    int y;
    int altura;
    int largura;
public:
    Retangulo(int x0, int y0, int _largura, int _altura);
    void draw(Screen &t);
    void debug();
};

#endif // RETANGULO_H
