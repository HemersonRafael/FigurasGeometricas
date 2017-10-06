#include "circulo.h"
#include <cmath>


Circulo::Circulo(int _x, int _y, int _r){
    x = _x;
    y = _y;
    r = _r;

}


void Circulo::draw(Screen &t){
    float _x, _y , d;
    _x = 0;
    _y = r;
    d = 1 - r;
    t.setPixel(round(_x + x), round(_y+y));
    while(_y > _x){
        if(d < 0){
            d = d + 2*_x + 3;
            _x = _x + 1;
        }
        else{
            d = d + 2*(_x-_y) + 5;
            _x +=  1;
            _y -=  1;
        }

        t.setPixel(round(_x+ x
                         ), round(_y+ y));

    }


}


