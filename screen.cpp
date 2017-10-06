#include "screen.h"
#include <vector>
#include <iostream>
using namespace std;


Screen::Screen(int _nlin, int _ncol){
    nlin = _nlin;
    ncol = _ncol;
    mat.resize(_nlin);

    for(int i=0; i<mat.size(); ++i){
        mat[i].resize(_ncol);
    }
}

void Screen::setPixel(int _x, int _y){
    mat[_x][_y] = brush;
}

void Screen::clear(){

}

void Screen::setBrush(char _brush){
    brush = _brush;
}

ostream &operator<<(ostream &os, Screen &t){

}
