#ifndef RECHTECK_H
#define RECHTECK_H
#include <cstdlib>
#include <iostream>

class Rechteck{
private:
    float laenge, breite;
public:
    float getBreite();
    void setBreite(float b);
    float getLeange();
    void setLaenge(float l);
    float umfang();
    float rFlaeche();
    
    Rechteck();
    ~Rechteck();
};

#endif /* RECHTECK_H */

