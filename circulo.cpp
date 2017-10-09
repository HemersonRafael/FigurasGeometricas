#include "circulo.h"
#include <cmath>

#define sin 0.707106781

Circulo::Circulo(int _x, int _y, int _r, int _fill){
    x = _x;
    y = _y;
    r = _r;
    fill = _fill;

}

void translade(int x,int y,Screen &t );

void Circulo::draw(Screen &t){
    float _x, _y , d;
    _x = 0;
    _y = r;
    d = 1 - r;


     t.setPixel(round(x), round(y));
     t.setPixel(round(x-r), round(y));
     t.setPixel(round(x+r), round(y));
     t.setPixel(round(x), round(y-r));
     t.setPixel(round(x), round(y+r));



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

        if(fill){
            for(int i = round(_x + x); i >= x; i-- )
                for(int j= round(_y + y); j  >=y ; j-- ){
                     t.setPixel(i, j);
                     translade(i,j,t);
                }


        }


        translade(_x,_y,t);
/*
        float xinicial = _x*sin - _y*sin;
        float yinicial = _x*sin + _y*sin;
        for(int i =0 ; i< 7; i++){

            t.setPixel(round(xinicial+ x), round(yinicial + y));
            float tempX = xinicial;
            float tempY = yinicial;

            xinicial = tempX*sin - tempY*sin;
            yinicial = tempX*sin + tempY*sin;



            }

*/

        }


    }


void Circulo::translade(int _x, int _y, Screen &t ){

    float xinicial = _x*sin - _y*sin;
    float yinicial = _x*sin + _y*sin;
    for(int i =0 ; i< 7; i++){


        t.setPixel(round(xinicial+ x), round(yinicial + y));
        float tempX = xinicial;
        float tempY = yinicial;

        xinicial = tempX*sin - tempY*sin;
        yinicial = tempX*sin + tempY*sin;



        }

}



