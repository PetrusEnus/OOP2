#include "Quader.h"
#include "Rechteck.h"
#include <cstdlib>
#include <iostream>

Quader::Quader() {
}

Quader::~Quader() {
}

float Quader::getHoehe(){
    return hoehe;
}

void Quader::setHoehe(float h){
    hoehe = h;
}

float Quader::qFlache(float l, float b){
    return hoehe * b * 2 
        + l * hoehe * 2 
        + l * b * 2;
}

float Quader::volumen(float l, float b){
    return hoehe * b * l;
}

