#ifndef QUADER_H
#define QUADER_H
#include "Rechteck.h"
#include <cstdlib>
#include <iostream>

class Quader : public Rechteck  {
public:
    float getHoehe();
    void setHoehe(float h);
    float qFlache(float l, float b);
    float volumen(float l, float b);
    
    Quader();
    ~Quader();
private:
    float hoehe;
};

#endif /* QUADER_H */

