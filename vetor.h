#pragma once

class Vetor
{
private:
    double v, vx, vy, angulo;

public:
    Vetor operator+(Vetor b);
    Vetor operator-(Vetor b);
    Vetor operator*(Vetor b);
    Vetor operatorx(Vetor b);

    void atualizarCartesiano();
    void atualizarPolar();

    void print();

    Vetor(string tipo, double var1, double var2);
};