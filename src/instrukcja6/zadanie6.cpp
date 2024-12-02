#include "randomVectorGenerator.hpp"
#include <iostream>

class Tresh{
public:
    Tresh(): granica{0}{}
    Tresh(int& a):granica{a}{}
    ~Tresh(){}

    bool operator()(int& i){
        return i > granica;
    }
    int granica;
};

int main(){

    auto V = makeRandomVector<int>(5,0,10);
    for (int i : V) std::cout << i << " ";
    std::cout << "\nPodaj granice liczenia i = ";
    int i;
    std::cin >> i;
    Tresh limit{i};
    auto s = std::count_if(V.begin(), V.end(), limit);
    std::cout << "Wiekszych od " << i <<": " << s << std::endl;
    return 0;
}