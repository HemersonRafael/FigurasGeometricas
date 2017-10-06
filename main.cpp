#include <iostream>
#include "screen.h"
using namespace std;

int main(){
    Screen a(10,10);
    a.setBrush('.');
    a.setPixel(0,0);
    cout << a;



    cout << "Hello World!" << endl;
    return 0;
}

