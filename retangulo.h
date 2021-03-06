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
    //!Inicializar um retângulo com a posição inicial, largura e altura atribuída.
    Retangulo(int x0, int y0, int _largura, int _altura);
    //!Desenha a forma do objeto retângulo.
    void draw(Screen &t);
};

#endif // RETANGULO_H
