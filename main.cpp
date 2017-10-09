#include <iostream>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "extras.h"

using namespace std;

int main(){
    Screen tela(40,40);
    Reta a(0,0,0,10);
    Retangulo b(5,5,10,5);
    Circulo c (25,15,10,1);
    Extras extras;

    string fileName = "figuras.csv";
    int sizeFile = 1000;



    //extras.randFigures(fileName.c_str(),sizeFile);




    tela.setBrush('*');
/*
    a.draw(tela);
    cout << tela;
    tela.clear();

    b.draw(tela);
    cout << tela;
    tela.clear();
*/
    c.draw(tela);
    cout << tela;
    tela.clear();

    cout<<tela;

    return 0;
}

