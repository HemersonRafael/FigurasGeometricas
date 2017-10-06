#ifndef RETANGULO_H
#define RETANGULO_H
#include "screen.h"
class Retangulo  {
private:
    int altura;
    int largura;
public:
    Retangulo(int _altura, int _largura);
    void draw(Screen &t);
};

#endif // RETANGULO_H
