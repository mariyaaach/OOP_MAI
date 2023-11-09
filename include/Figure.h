#ifndef FIGURE_HPP_INCLUDED
#define FIGURE_HPP_INCLUDED

#include "Vector.h"

#include "Point.h"

#include <iostream>

class Figure {
protected:
    Vector<Point> coordinates;

public:
    virtual operator double() const = 0;
    virtual Point geom_center() const = 0;
    
};

#endif