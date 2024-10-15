#include <iostream>
#include <cmath>


class Wektor2D
{
public:
    Wektor2D (double u, double v, std::string n)
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

int main()
{
    Wektor2D V1{2.13, 4.32, "Wektoriusz"};
    V1.setX{7.77};
    V1.setY{8.88};
    std::cout << "Now, the coordinates of Vector " << V1.name << " are [x, y] = [" << V1.getX() << ", " << V1.getY() << "]\n";
   
    return 0;
}