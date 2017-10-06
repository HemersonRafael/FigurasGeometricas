#include "screen.h"
#include <vector>
#include <iostream>
using namespace std;


Screen::Screen(int _nlin, int _ncol){
    nlin = _nlin;
    ncol = _ncol;
    m.resize();
        for(int i = 0 ; i < m ; ++i)
        {
            //Grow Columns by n
            a[i].resize(n);
        }
}

void Screen::setPixel(int _x, int _y){
    mat[_x][_y] = brush;

}

void Screen::setBrush(char _brush){
    brush = _brush;
}

ostream &Screen::operator<<(ostream &os, Screen &t){

}
