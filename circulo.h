#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>

//Declaramos las clases publicas

class Circulo :
        public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);
};

#endif // CIRCULO_H
