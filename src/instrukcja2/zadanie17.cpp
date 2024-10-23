#include <iostream>

class Wektor
{
public:
    
    Wektor(int n): dlugosc_{n}, pojemnosc_{n}{
        row_ = new double[pojemnosc_];
        for (int i = 0; i < pojemnosc_; ++i){
            row_[i] = 0.;
        }
    }
    
    Wektor(const Wektor& other){
        dlugosc_ = other.getDlugosc();
        pojemnosc_ = other.getPojemnosc();
        row_ = new double[pojemnosc_];
        for (int i = 0; i < dlugosc_; ++i) {
            row_[i] = other[i];
        }
    }


    ~Wektor(){
        delete[] row_;
    }

    Wektor& operator=(const Wektor& other) {
    if (this == &other) {return *this;}
    delete[] row_;
    pojemnosc_ = other.getPojemnosc();
    dlugosc_ = other.getDlugosc();
    row_ = new double[pojemnosc_];
    for (int i = 0; i < dlugosc_; ++i) {
        row_[i] = other[i];
    }
    return *this;
    }

    double operator[](int i) {
        if (i > dlugosc_){
            zmienDlugosc(i);
        }
        return row_[i];
    }

    double operator[](int i) const {
        return row_[i];
    }


    int getDlugosc() const { return dlugosc_; }

    int getPojemnosc() const { return pojemnosc_; }

    void print(){
        std::cout << "Zawartosc kolejnych wierszy wektora: \n";
        for (int i = 0; i < dlugosc_; ++i){
            std::cout << "wiersz[" << i + 1 << "] = " << row_[i] << '\n';
        }
    }

    void zmienDlugosc(int nDlugosc){
        if (nDlugosc <= pojemnosc_){
            if (nDlugosc > dlugosc_){
                for (int i = dlugosc_; i < nDlugosc; ++i){
                    row_[i] = 0.;
                }
            }
            dlugosc_ = nDlugosc;
        }
        else {
            double* nRow = new double[nDlugosc];

            for (int i = 0; i < dlugosc_; ++i){
                nRow[i] = row_[i];
            }
            for (int i = dlugosc_; i < nDlugosc; ++i){
                nRow[i] = 0.;
            }

            delete[] row_;
            row_ = nRow;
            dlugosc_=nDlugosc;
            pojemnosc_=nDlugosc;
        }

    }

    

private:

    double* row_;
    int dlugosc_;
    int pojemnosc_;

};


int main(){
    
    return 0;
    
}