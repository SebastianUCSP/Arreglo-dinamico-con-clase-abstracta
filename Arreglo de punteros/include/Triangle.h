#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Polygon.h>


class Triangle: public Polygon {
  public:
    Triangle() : Polygon() {}
    Triangle(int a,int b) : Polygon(a,b) {}
    int area()
      { return width*height/2; }

};

#endif // TRIANGLE_H
