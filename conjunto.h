#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <QString>

class Conjunto
{
private:
    int tamanho;
    int *array;
public:
    Conjunto(int tamanho);
    QString getConjunto() const;
    ~Conjunto();
};

#endif // CONJUNTO_H
