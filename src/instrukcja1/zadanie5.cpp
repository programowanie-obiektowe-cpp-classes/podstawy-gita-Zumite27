#include <iostream>
#include <cmath>


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


Wektor2D operator+(Wektor2D& V1, Wektor2D& V2)
{
    double V1x = V1.getX();
    double V1y = V1.getY();

    double V2x = V2.getX();
    double V2y = V2.getY();

    double u = V1x + V2x;
    double v = V1y + V2y;
    std::string n{"'Sum of Vectors'"};

    return Wektor2D{u, v, n};
};

double operator*(Wektor2D& V1, Wektor2D& V2)
{
    double V1x = V1.getX();
    double V1y = V1.getY();

    double V2x = V2.getX();
    double V2y = V2.getY();

    double a = V1x * V2x;
    double b = V1y * V2y;

    return a + b;
};


int main()
{
    Wektor2D W1{2.13, 4.32, "Wektoriusz"};
    Wektor2D W2{1.23, 1.32, "Wiktoria"};
    Wektor2D W3{1.,2.,"Wiktor"};
    Wektor2D W4{2.,3.,"Viki"};
    Wektor2D W5 = W1 + W2;
    double iloczyn = W3 * W4;

    std::cout << "The scalar multiplication of Vectors " << W1.name << " and " << W2.name << " equals " << iloczyn << '\n';
   
    return 0;
}