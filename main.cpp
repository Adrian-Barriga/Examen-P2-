// Nombre: Adrian Fernando Barriga Castillo
// Número de cédula: 1724361900

#include "juego.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
