#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H

#include "Polygon.h"


class PolygonArray
{
    public:
        PolygonArray();
        PolygonArray(Polygon *arr[], const int);
        PolygonArray(PolygonArray &);
        ~PolygonArray();

        int getSize();


        void print();
        void push_back(Polygon *);
        void remove(const int);
        void insert(Polygon *, const int);






    private:

        int size;
        Polygon **data;
        void resize(int);


};

#endif // POLYGONARRAY_H
