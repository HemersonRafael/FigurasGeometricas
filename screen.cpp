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
    Screen::clear();
}

void Screen::setPixel(int _x, int _y){
    mat[_x][_y] = brush;
}

void Screen::clear(){
    for(int i=0; i<mat.size(); i++){
        for(int j=0;j<mat[i].size(); j++){
             mat[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char _brush){
    brush = _brush;
}

ostream &operator<<(ostream &os, Screen &t){
    for(int i=0; i<mat.size; i++){
        os << " | ";
        for(int j=0; j<m.nc; j++){
            os << m.x[i][j] << " | ";
        }
        os << "\n";
    }
    return (os);
}
