# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <cmath>
# include <iomanip>

double Cylinder :: SurfaceArea(){
    double sum;
    sum = M_PI*radius*radius*2 + 2*M_PI*radius*height;    
    return sum;
}

double Cylinder :: Volume(){
    double total;
    total = M_PI*radius*radius*height;
    return total;
}

double Cylinder :: Circumference(){
    double sum;
    sum = M_PI*radius*2;
    return sum;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << std::setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
