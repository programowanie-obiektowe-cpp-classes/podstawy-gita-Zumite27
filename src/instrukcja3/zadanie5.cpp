#include <iostream>
//#include <numbers>
//std::numbers::pi c++20 lub nowszy
#include <cmath>
//M_PI

/*
class BytGeometryczny{
public:
    BytGeometryczny(){}
    BytGeometryczny(const BytGeometryczny& other){}
    ~BytGeometryczny(){}
    BytGeometryczny& operator=(const BytGeometryczny& other){
        if (this==&other) return *this;
        return *this;
    }
    virtual void id()=0;
};
*/


class Figura{
public:
    Figura():pole{0}{}
    Figura(double S):pole{S}{}
    Figura(const Figura& other):pole{other.pole}{}
    Figura& operator=(const Figura& other){
        if (this==&other) return *this;
        pole=other.pole;
        return *this;
    }
    virtual ~Figura(){}

    virtual void id()const {std::cout<<"Typ figury: Figura,\t pole: " << pole <<'\n';}

protected:
    double pole;
};


class Kolo: public Figura{
public:
    Kolo():r{0}{}
    Kolo(double& promien): Figura{M_PI*pow(promien,2)}, r{promien}{}
    ~Kolo(){
        std::cout<<"Usunieto kwadrat\n";
    }
    void id()const override {std::cout<<"Typ figury: Kolo,\t pole: " << pole <<'\n';}
    
    double r;
};



class Kwadrat: public Figura{
public:
    Kwadrat():a{0}{}
    Kwadrat(double& bok):Figura{pow(bok,2)}, a{bok}{}
    ~Kwadrat(){
        std::cout<<"Usunieto kwadrat\n";
    }
    void id()const override {std::cout<<"Typ figury: Kwadrat,\t pole: " << pole <<'\n';}

    double a;
};

void id(const Figura& f){
    f.id();
}

class WektorFigur: public Figura{
public:

    WektorFigur():licznik{0}{
        tab = new Figura*[1000];
    }

    WektorFigur(const WektorFigur& other){
        licznik = other.licznik;
        for (int i = 0; i < other.licznik; ++i){
            tab[i] = new Figura{*other[i]};
        }
    }

    WektorFigur& operator=(const WektorFigur& other){
        if (this==&other) return *this;
        if(licznik > other.licznik){
            for(int i = 0; i<licznik; ++i){
                delete tab[i];
            }
        }
        else{
            for (int i = 0; i < other.licznik; ++i){
                delete tab[i];
            }
        }
        for (int i = 0; i < other.licznik; ++i){
            tab[i] = new Figura{*other[i]};
        }
        return *this;
    }


    ~WektorFigur(){
        for (int i = 0; i<1000; ++i){
            delete tab[i];
        }
        delete tab;
    }


    Figura* operator[](int i)const {
        if (i>=licznik) return nullptr;
        return tab[i];
    }

    void push(Figura* f){
        tab[licznik] = f;
        ++licznik;
    }

    void pop(){
        delete tab[licznik-1];
        --licznik;
    }

    int licznik;

private:
    Figura** tab;
};


class FabrykaFigur{
public:
    FabrykaFigur(){}
    FabrykaFigur(const FabrykaFigur& other){}
    FabrykaFigur& operator=(const FabrykaFigur& other){
        if (this==&other) return *this;
        return *this;
    }
    ~FabrykaFigur(){}

    Figura* operator()(const std::string& str, double p){
        if (str=="Kolo"){return new Kolo{p};}
        else if (str =="Kwadrat"){return new Kwadrat{p};}
        else{
            std::cout<<"Figura " << str <<" nie zostala zdefiniowana\n";
            return nullptr;
        }
    }

};

int main(){
    double a = 1.23;
    Kwadrat k{a};
    Figura* f = new Kwadrat{k};

//    Kwadrat* ptrkw = dynamic_cast<Kwadrat*>(f);
//    Kolo* ptrko = dynamic_cast<Kolo*>(f);
//    ptrkw->id();
//    ptrko->id();
//    delete ptrkw;
//    delete ptrko;

    delete f;
    return 0;
}

