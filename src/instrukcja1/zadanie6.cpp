#include <iostream>
#include <cmath>
#include <sstream>


class Wektor2D
{
public:
    Wektor2D() {x_ = 0; y_ = 0; name = "NoName";}

    Wektor2D(double u, double v, std::string n)
    {
        x_ = u;
        y_ = v;
        name = n;
        std::cout << "Vector " << name << " has coordinates [x,y] = [" << x_ << ", " << y_ << "]\n";
    }

    ~Wektor2D()
    {
        std::cout << "Here lies Vector " << name << ", erased on coordinates [x, y] = [" << x_ << ", " << y_ << "]. May it RIP \n";
    }

    double norm()       {return sqrt(pow(x_,2)+pow(y_,2));}
    void print()        {std::cout << "Vector " << name << " has coordinates [x,y] = [" << x_ << ", " << y_ << "]\n";}

    void setX(double u) {x_=u;}
    double getX()       {return x_;}
    void setY(double v) {y_=v;}
    double getY()       {return y_;}


    std::string name;

private:
    double      x_;
    double      y_;
};

// Gdy tylko jeden wektor:
int operator<<(std::ostream& os, Wektor2D& V) {
    std::stringstream ss;
    ss << V.name << " = [" << V.getX() << ", " << V.getY() << "]\n";
    std::string s = ss.str();
    std::cout << s;
    return 0;
};


// Gdy więcej wektorów:
int operator<<(int z, Wektor2D& V)
{
    std::stringstream ss;
    ss << V.name << " = [" << V.getX() << ", " << V.getY() << "]\n";
    std::string s = ss.str();
    std::cout << s;
    return 0;
};



int main()
{
    Wektor2D wektor1{2.13, 4.32, "W1"};
    Wektor2D wektor2{1.23, 1.32, "W2"};
    Wektor2D wektor3{1.,2.,"W3"};
    Wektor2D wektor4{2.,3.,"W4"};

    std::cout << wektor1 << wektor2 << wektor3 << wektor4;
   
    return 0;
}