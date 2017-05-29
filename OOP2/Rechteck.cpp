#include "Rechteck.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Rechteck::Rechteck() {
}

Rechteck::~Rechteck() {
}

float Rechteck::getBreite(){
    return breite;
}

void Rechteck::setBreite(float b){
    breite = b;
}

float Rechteck::getLeange(){
    return laenge;
}

void Rechteck::setLaenge(float l){
    laenge = l;
}

float Rechteck::umfang(){
    return laenge * 2 + breite * 2;
}

float Rechteck::rFlaeche(){
    return laenge * breite;
}