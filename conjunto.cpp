#include "conjunto.h"
#include <ctime>

Conjunto::Conjunto(int tamanho)
{
    if (tamanho <= 0)
    {
        throw QString("tamanho invalido");
    }
    try{
        array = new int[tamanho];
        std::srand(time(0));
        for (int i = 0; i < tamanho; i++)
        {
            array[i] = rand() % 1001;
        }
    }
    catch(std::bad_alloc &e){
        throw QString("Memoria nao alocada");
    }
}

QString Conjunto::getConjunto() const
{
    if (!array){
        throw QString("O vetor nao existe");
    }
    QString saida = "";
    for (int i = 0; i < tamanho; i++)
    {
        if (i == tamanho-1){
            saida += QString::number(array[i]);
        }
        else{
            saida += QString::number(array[i]) + " | ";
        }
    }
    return saida;
}


Conjunto::~Conjunto()
{
    if (array){
        delete[] array;
    }
}