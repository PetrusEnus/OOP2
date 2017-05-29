#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include "Rechteck.h"
#include "Quader.h"

using namespace std;

int main(int argc, char** argv) {
    Rechteck r;
    Quader q;
    float l, b ,h;
    cout << "Aufgabe 1 Rechteck: \n";
    cout << "Eingabe länge: \n";
    cin >> l;
    r.setLaenge(l);
    cout << "Eingabe breite: \n";
    cin >> b;
    r.setBreite(b);
    cout << "Daten des Rechtecks: \n";
    cout << "Länge: " << r.getLeange();
    cout << "\nBreite: " << r.getBreite();
    cout << "\nUmfang: " << r.umfang();
    cout << "\nFläche: " << r.rFlaeche();
    
    cout << "\n –––––– \n";
    cout << "Aufgabe 1 Quader: \n";
    
    cout << "Eingabe Höhe: \n";
    cin >> h;
    q.setHoehe(h);
    cout << "Daten des Quader: \n";
    cout << "Länge: " << r.getLeange();
    cout << "\nBreite: " << r.getBreite();
    cout << "\nHöhe: " << q.getHoehe();
    cout << "\nVolumen " << q.volumen(l ,b);
    cout << "\nFläche: " << q.qFlache(l, b);
    
    
    return 0;
}

