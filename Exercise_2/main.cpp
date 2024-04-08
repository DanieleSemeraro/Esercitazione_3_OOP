#include <iostream>
#include <cmath>
#include "src/ComplexNumber.hpp"
using namespace std;

namespace ComplexLibrary{
//definizione delle operazioni con il corpo
Complex conjugated(const Complex &c){
    return { c.reale, -c.immaginario };
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    return {c1.reale + c2.reale, c1.immaginario + c2.immaginario};
}
bool operator==(const Complex &c1, const Complex &c2)//operatore che restituisce un 1 o 0 dal confronto
{
    if(c1.reale == c2.reale && c1.immaginario == c2.immaginario){
        return true;}
    else{
        return false;}
}
ostream& operator<<(ostream& os, const Complex &c)//operatore di stampa
{
    if (c.immaginario == 0) {
        os << c.reale;
    } else {
        if(c.immaginario ==1)
           os << c.reale << "+i";
        else{
            if(c.immaginario >0){
                os<<c.reale << "+" << c.immaginario << "i";
            }
            else{
                if(c.immaginario ==-1){
                    os << c.reale << "-i";
                }else{
            os << c.reale <<c.immaginario << "i";
                }}
        }
    }
    return os;
}
}
int main(){
    cout<<"Inserisci quattro numeri reali per creare due numeri complessi e fare delle operazioni"<<endl;
    double re1,im1,re2,im2;
    cin>>re1>>im1;
    ComplexLibrary::Complex c1(re1,im1);
    cout << "Il tuo primo numero complesso vale:"<<endl<<"c1: " << c1 <<endl;
    cout<<"Il complesso coniugato vale:"<<endl<<conjugated(c1)<<endl;
    cout<<"Inserisci altri due numeri"<<endl;
    cin>>re2>>im2;
    ComplexLibrary::Complex c2(re2,im2);
    cout << "Il tuo secondo numero complesso vale:"<<endl<<"c2: " << c2 << endl;
    cout<<"Il complesso coniugato vale:"<<endl<<conjugated(c2)<<endl;
    ComplexLibrary::Complex sum = c1 + c2;
    if(c1==c2){
        cout<<"I tuoi numeri sono uguali"<<endl;
    }else{
        cout<<"I tuoi numeir sono diversi"<<endl;
    }
    cout << "la somma dei tuoi numeri vale: " << sum << endl;

    return 0;
    //implemento anche gestione di inserimento dati scorretti,infinito ecc?
}
