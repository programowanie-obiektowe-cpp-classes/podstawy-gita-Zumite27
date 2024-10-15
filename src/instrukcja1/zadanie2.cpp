#include <iostream>
#include <cmath>

struct Wektor2D
{
    Wektor2D (double u, double v, std::string n)
    {
        x = u;
        y = v;
        name = n;
        std::cout << "Vector " << name << " has coordinates [x,y] = [" << x << ", " << y << "]\n";
    }

    ~Wektor2D()
    {
        std::cout << "Here lies Vector " << name << ", erased on coordinates [x, y] = [" << x << ", " << y << "]. May it RIP \n";
    }

    double norm() {return sqrt(pow(x,2)+pow(y,2));}
    void print() {std::cout << "Vector " << name << " has coordinates [x,y] = [" << x << ", " << y << "]\n";}

    double      x;
    double      y;
    std::string name;
};

int main()
{
    Wektor2D V1{2.13, 4.32, "Wektoriusz"};
    Wektor2D V2{1.23, 1.32, "Wiktoria"};
    Wektor2D V3{0.4, 0.9, "Wiktor"};
   
    return 0;
}