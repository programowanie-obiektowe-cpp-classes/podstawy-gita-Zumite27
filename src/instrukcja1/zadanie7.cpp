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
        ++num_wek;
        std::cout << "Vector " << name << " has coordinates [x,y] = [" << x_ << ", " << y_ << "]\n";
        std::cout << "Current number of vectors: " << num_wek << '\n';
        }

    Wektor2D(double u, double v, std::string n)
    {
        x_ = u;
        y_ = v;
        name = n;
        ++num_wek;
        std::cout << "Vector " << name << " has coordinates [x,y] = [" << x_ << ", " << y_ << "]\n";
        std::cout << "Current number of vectors: " << num_wek << '\n';
    }

    ~Wektor2D()
    {
        --num_wek;
        std::cout << "Here lies Vector " << name << ", erased on coordinates [x, y] = [" << x_ << ", " << y_ << "]. May it RIP \n";
        std::cout << "Current number of vectors: " << num_wek << '\n';
    }

    double norm()       {return sqrt(pow(x_,2)+pow(y_,2));}
    void print()        {std::cout << "Vector " << name << " has coordinates [x,y] = [" << x_ << ", " << y_ << "]\n";}

    void setX(double u) {x_=u;}
    double getX()       {return x_;}
    void setY(double v) {y_=v;}
    double getY()       {return y_;}

    std::string name;

private:
    static int  num_wek;
    double      x_;
    double      y_;
};

int Wektor2D::num_wek = 0;

int main()
{
    Wektor2D wektor1{2.13, 4.32, "W1"};
    Wektor2D wektor2{1.23, 1.32, "W2"};

    for (int i = 0; i < 2 ; i++){
        double a = (double)i;
        Wektor2D wektor{a,a,"Looper"};
    }

    return 0;
}