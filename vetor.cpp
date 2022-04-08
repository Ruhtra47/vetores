#include <iostream>
#include <math.h>
#include "vetor.h"
using namespace std;

Vetor::Vetor(string tipo, double var1, double var2)
{
    if (tipo == "cartesiano")
    {
        vx = var1;
        vy = var2;
        atualizarPolar();
    }
    else
    {
        v = var1;
        angulo = var2;
        atualizarCartesiano();
    }
}

void Vetor::atualizarCartesiano()
{
    vx = v * cos(angulo);
    vy = v * sin(angulo);
}

void Vetor::atualizarPolar()
{
    v = sqrt(vx * vx + vy * vy);

    if (vx == 0)
    {
        if (vy > 0)
        {
            angulo = 90;
        }
        else if (vy < 0)
        {
            angulo = 270;
        }

        return;
    }

    bool b = false;
    if (vx < 0)
        b = true;

    angulo = atan(vy / vx) + b * 180;
}

Vetor Vetor::operator+(Vetor b) { return b; }
Vetor Vetor::operator-(Vetor b) { return b; }
Vetor Vetor::operator*(Vetor b) { return b; }
Vetor Vetor::operatorx(Vetor b) { return b; }

void Vetor::print()
{
    cout << "\nV: " << v << "Vx: " << vx << "\nVy: " << vy << "\nAngulo: " << angulo << endl;
}