#include <iostream>
#include "Produs.h"
using namespace std;

// GESTIONARE MAGAZIN
// Adauga, Scoate, Vinde, Afiseaza produse
// Categorii de produse
// Persisten cu json : serialization, " c++ header only json library"
// mostenire pentru categorii

int main()
{
    int n;
    cout<<"Alegeti functionalitatea\n"<<"1. Adauga Produs\n"<<"2. Scoate Produs\n"<<"3. Cumpara Produs\n"<<"4. Afiseaza Produse\n";
    cin>>n;
    if(n==1)
    {
        string num;
        int prt,cant;
        cout<<"Nume produs:"<<endl;
        cin>>num;
        cout<<"Pret produs:"<<endl;
        cin>>prt;
        cout<<"Cantitate produs:"<<endl;
        cin>>cant;

        Produs prod;
        prod.nume=num;
        prod.pret=prt;
        prod.cantitate=cant;
    }
    else if (n==2)
    {

    }
    else if (n==3)
    {

    }
    else if (n==4)
    {
        string categ;
        cout<<"Dati categoria\n";
        cin>>categ;
    }
    
}