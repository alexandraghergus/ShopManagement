#include "Produs.h"
#include<iostream>
#include<fstream>
using namespace std;

Produs::Produs()
{
}

void printNume()
{
    cout<<"Produs: "<<Produs::nume<<endl;
}

void Produs::printPret()
{
    cout<<"Pret:"<<Produs::pret<<endl;
}

void Produs::printCant()
{
    cout<<"Cantitate:"<<Produs::cantitate<<endl;
}
