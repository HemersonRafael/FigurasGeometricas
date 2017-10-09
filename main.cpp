#include <iostream>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "extras.h"

using namespace std;

int main(){

    Reta a(5,5,10,8);
    Retangulo b(5,5,10,5);
    Circulo c (25,15,10,1);
    Extras extras;

    std::vector <FiguraGeometrica*> data;
    std::vector <char> brush;
    int sizeScreen[2];

    string fileName = "figuras.csv";
    int sizeFile = 1000;

   // extras.randFigures(fileName.c_str(),sizeFile);

    extras.loadFigures("figuras.csv",sizeScreen,data,brush);


    Screen tela(sizeScreen[0],sizeScreen[1]);

    for (int i =0; i < data.size(); i++){
            data[i]->draw(tela);
            cout << tela;
            tela.clear();
    }












/*

    tela.setBrush('*');

    a.draw(tela);
    cout << tela;
    tela.clear();

    b.draw(tela);
    cout << tela;
    tela.clear();

    c.draw(tela);
    cout << tela;
    tela.clear();

    cout<<tela;
*/
    return 0;
}

