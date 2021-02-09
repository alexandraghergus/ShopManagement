#ifndef PRODUS_H
#define PRODUS_H

class Produs
{
    public:
        Produs();
        static string nume;
        int pret;
        int cantitate;
        void printNume();
        void printPret();
        void printCant();
};

#endif //PRODUS_H