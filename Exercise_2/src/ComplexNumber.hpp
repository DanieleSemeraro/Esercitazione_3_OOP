#ifndef __COMPLEX_H // Header guards
#define __COMPLEX_H
#include <iostream>
using namespace std;

namespace ComplexLibrary{//creazione libreria

struct Complex {//definizione struct Complex
    double reale;//variabili che vengono usate
    double immaginario;
    Complex(double re, double im) ://costruttore
        reale(re),
        immaginario(im) {}

    // Costruttore predefinito.
    Complex() = default;
};
//operazioni implementate dalla struttura(senza corpo)
ostream& operator<<(ostream& os, const Complex &c);

Complex operator+(const Complex &c1, const Complex &c2);

bool operator==(const Complex &c1, const Complex &c2);

Complex conjugated(const Complex &c);

}
#endif
