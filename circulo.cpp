#include "circulo.h"
#include <cmath>

#define sin 0.707106781

Circulo::Circulo(int _x, int _y, int _r){
    x = _x;
    y = _y;
    r = _r;

}

void pontosDaCircunferencia (float &_x , float &_y , Screen &t , int px, int py , int r){
    float d = 1 - r;

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

        t.setPixel(round(_x+ px), round(_y + py));

        pontosDaCircunferencia(_x,_y ,t , px, py ,r);
    }


}




void Circulo::draw(Screen &t){
    float _x, _y , d;
    _x = 0;
    _y = r;
    d = 1 - r;

    t.setPixel(round(x), round(y));
    t.setPixel(round(_x + x), round(_y+y));
    t.setPixel(round( x -r ), round( y));
    t.setPixel(round( x +r ), round( y));
    t.setPixel(round( x ), round(y - r));

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

        t.setPixel(round(_x+ x), round(_y + y));

        float rx = _x;
        float ry = _y;


        float xt = _x*sin - _y*sin;
        float yt = _x*sin + _y*sin;
        t.setPixel(round(xt+ x), round(yt + y));


        float xt2 = xt*sin - yt*sin;
        float yt2 = xt*sin + yt*sin;
        t.setPixel(round(xt2+ x), round(yt2 + y));

        float xt3 = xt2*sin - yt2*sin;
        float yt3 = xt2*sin + yt2*sin;
        t.setPixel(round(xt3+ x), round(yt3 + y));

        float xt4 = xt3*sin - yt3*sin;
        float yt4 = xt3*sin + yt3*sin;
        t.setPixel(round(xt4+ x), round(yt4 + y));


        float xt5 = xt4*sin - yt4*sin;
        float yt5 = xt4*sin + yt4*sin;
        t.setPixel(round(xt5+ x), round(yt5 + y));

        float xt6 = xt5*sin - yt5*sin;
        float yt6 = xt5*sin + yt5*sin;
        t.setPixel(round(xt6+ x), round(yt6 + y));


        float xt7 = xt6*sin - yt6*sin;
        float yt7 = xt6*sin + yt6*sin;
        t.setPixel(round(xt7+ x), round(yt7 + y));





    }



}


