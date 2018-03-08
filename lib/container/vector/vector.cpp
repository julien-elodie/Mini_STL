#include <iostream>
#include "vector.h"

using namespace philous;

template <class T>
vector<T>::vector()
{
    if (getVerbose())
    {
        alert("[vector]: vector has been created.");
    }
    size = 0;
    vec = new T [0];
}

template <class T>
vector<T>::~vector()
{
    if (getVerbose())
    {
        alert("[vector]: vector has been deleted.");
    }
    delete [] vec;
}