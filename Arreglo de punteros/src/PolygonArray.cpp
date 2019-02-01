#include "PolygonArray.h"

PolygonArray::PolygonArray()
{
    this->size = 0;
    this->data = new Polygon *[size];
}


PolygonArray::PolygonArray(Polygon *arr[], const int size)
{
    this->size = size;
    this->data = new Polygon *[size];
    for(int i = 0;i < size; i++)
        data[i] = arr[i];
}

PolygonArray::PolygonArray(PolygonArray &p)
{
    this->size = p.size;
    this->data = new Polygon *[size];
    for(int i = 0; i < size; i++)
        this->data[i] = p.data[i];
}

int PolygonArray::getSize()
{
    return this->size;
}

void PolygonArray::print()
{
    for(int i = 0; i < size; i++){
        cout << data[i]->area() << " ";
    }
    cout << endl;
}

void PolygonArray::push_back(Polygon *p)
{
    resize(size + 1);
    this->data[size-1] = p;
}

void PolygonArray::remove(const int pos)
{
    for(int i = pos; i < size; i++)
        data[i] = data[i+1];

    resize(size-1);
}

void PolygonArray::insert(Polygon *p, const int pos)
{
    resize(size+1);

    for(int i = size; i > pos; i--)
        data[i] = data[i-1];

    data[pos] = p;
}

PolygonArray::~PolygonArray()
{
    delete[] data;
}

void PolygonArray::resize(int newSize){
    Polygon **arr = new Polygon *[newSize];

    int minSize = (newSize > size)?size:newSize;
    for(int i = 0; i< minSize; i++)
        arr[i] = data[i];

    delete[] data;
    size = newSize;
    data = arr;
}

