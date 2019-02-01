#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Polygon.h"
#include "PolygonArray.h"

using namespace std;

int main()
{

    Polygon * ptrpoly1 = new Rectangle (3,6);
    Polygon * ptrpoly2 = new Triangle (4,5);
    Polygon * ptrpoly3 = new Triangle (2,4);
    Polygon * ptrpoly4 = new Triangle (7,4);
    //ptrpoly1->printarea();
    //ptrpoly2->printarea();

    Polygon *P[3] = {ptrpoly1, ptrpoly2,ptrpoly3};

    PolygonArray PA();

    PolygonArray PA2(P, 3);

    PA2.print();

    PA2.insert(ptrpoly4, 3);
    PA2.print();

    PA2.remove(2);
    PA2.print();

    PA2.push_back(ptrpoly4);
    PA2.print();

    delete ptrpoly1;
    delete ptrpoly2;
    delete ptrpoly3;
    delete ptrpoly4;

    return 0;

}

