#include "retangulo.h"
#include "reta.h"
#include <iostream>
#include <cmath>
Retangulo::Retangulo(int _altura, int _largura){
    altura = _altura;
    largura = _largura;
}

void calcreta(float x1, float y1, float x2, float y2, Screen &t){ // x é y, y é x
    float tamanho, delta_x, delta_y, x, y, i;

    // Tamanho: Aproxima o tamanho da reta
     if( abs(x2 - x1) > abs(y2 - y1))
          tamanho = abs(x2 - x1);
     else
          tamanho = abs(y2 - y1);
     //seleciona o maior dos valores entre Delta_x e Delta_y como unidade de rasterização
     delta_x = (x2 - x1)/tamanho;
     delta_y = (y2 - y1)/tamanho;
     i = 0;
     x = x1;
     y = y1;
     while(i < tamanho){
       t.setPixel(round(x), round(y));
       x += delta_x;
       y += delta_y;
       i = i + 1;
     }
     //t.debug();

}
void Retangulo::draw(Screen &t){

    calcreta(0,0,0,largura,t);
    calcreta(0,largura,altura,largura,t);
    calcreta(altura,largura,altura,0,t);
    calcreta(altura,0,0,0,t);



//t.debug();



}

