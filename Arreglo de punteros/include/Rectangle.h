#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <Polygon.h>


class Rectangle : public Polygon
{
    public:
    Rectangle() : Polygon() {}
    Rectangle(int a,int b) : Polygon(a,b) {}
    int area()
      { return width*height; }
};

#endif // RECTANGLE_H
