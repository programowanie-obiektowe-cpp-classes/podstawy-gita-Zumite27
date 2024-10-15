#include <iostream>
#include <cmath>
#include <sstream>


class Wektor2D
{
public:
    Wektor2D() {
        x_ = 0;
        y_ = 0;
        name = "NoName";
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

    static int populacja() {return num_wek;}

    static Wektor2D kart(double x, double y)
    {
        Wektor2D V(x, y, "Wektor_kartezjanski");
        return V;
    }

    static Wektor2D bieg(double r, double phi)
    {
        double x = r * cos(phi);
        double y = r * sin(phi);
        Wektor2D V(x, y, "Wektor_McPolar");
        return V;
    }

    std::string name;

private:

    Wektor2D(double u, double v, std::string n)
    {
        x_ = u;
        y_ = v;
        name = n;
        std::cout << "Vector " << name << " has coordinates [x,y] = [" << x_ << ", " << y_ << "]\n";
    }

    static int  num_wek;
    double      x_;
    double      y_;
};


int main()
{
    Wektor2D wektor1 = Wektor2D::kart(1.,2.);
    Wektor2D wektor2 = Wektor2D::bieg(1.,M_PI*3/2);

    return 0;
}