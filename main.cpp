#include <iostream>
#include <unistd.h>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "extras.h"


using namespace std;

int main(){

    Reta a(5,5,10,8);
    Retangulo b(5,5,10,20);
    Circulo c1 (10,10,5,1);
    Circulo c2 (10,10,5,0);

    Extras extras;

    std::vector <FiguraGeometrica*> data;
    std::vector <char> brush;
    int sizeScreen[2] = {60,20};
    int microseconds = 1000000;

    string fileName = "figuras.csv";
    int sizeFile = 10;

    extras.randFigures(fileName.c_str(),sizeFile);

    extras.loadFigures("figuras.csv",sizeScreen,data,brush);
    Screen tela1(30,30), tela2(30,30), tela3(30,30), tela4(30,30);

    Screen tela(sizeScreen[0],sizeScreen[1]);

    for (unsigned int i=0; i < sizeFile; i++){
            tela.setBrush(brush[i]);
            data[i]->draw(tela);
            cout << "Figura " << i+1 << endl;
            cout << tela;
            tela.clear();
            cout << endl;
            usleep(microseconds);

    }


    tela1.setBrush('*');
    tela2.setBrush('.');
    tela3.setBrush('+');
    tela4.setBrush('X');

    a.draw(tela1);
    cout << tela1;
    usleep(microseconds);
    cout << "\n\n";


    b.draw(tela2);
    cout << tela2;
    usleep(microseconds);
    cout << "\n\n";


    c1.draw(tela3);
    cout << tela3;
    cout << "\n\n";
    usleep(microseconds);


    c2.draw(tela4);
    cout << tela4;
    cout << "\n\n";
    usleep(microseconds);




    return 0;
}

