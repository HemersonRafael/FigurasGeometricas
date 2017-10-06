#include <iostream>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
using namespace std;

int main(){
    Screen tela(35,50);
    Reta a(0,0,0,10);
    Circulo c (15,15,15);


    Retangulo b(20,20);

    tela.setBrush('?');

   //
   // a.draw(tela);
   // tela.clear();
 //  b.draw(tela);
    c.draw(tela);

    cout << tela;

    return 0;
}

