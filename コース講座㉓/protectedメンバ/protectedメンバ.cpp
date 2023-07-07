#include "position2d.h"
#include <iostream>

using namespace std;

int main(int argc, char** args){
    Position2D p;
    p.setValue(1, 1);
    p.move(5, 10);
    cout << "p: (" << p.getX() << "," << p.getY() << ")" << endl;
    p.resetPosition();
    cout << "p: (" << p.getX() << "," << p.getY() << ")" << endl;
    return 0;
}