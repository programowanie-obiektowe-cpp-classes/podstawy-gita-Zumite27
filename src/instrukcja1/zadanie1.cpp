#include <iostream>
#include <cmath>
struct Wektor2D
{
    double x;
    double y;
    double norm() {return sqrt(pow(x,2)+pow(y,2));}
    void print() { std::cout << "Wspolrzedna x: " << x << '\t' << "Wspolrzedna y: " << y << '\n'; }
};

int main()
{
    Wektor2D V;
    V.x = 175.5;
    V.y = 35.;
    double norma = V.norm();
    std::cout << "Norma wektora: " << norma << '\n';
    V.norm();
    V.print();

    return 0;
}