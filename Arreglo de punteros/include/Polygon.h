#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon{
protected:
    int width, height;
public:
    Polygon(): width(0), height(0){}
    Polygon(int a, int b): width(a), height(b){}
    virtual int area() =0;
    void printarea()
      { cout << this->area() << '\n'; }
      getw(){return this->width;}
      geth(){return this->height;}

};

#endif // POLYGON_H
