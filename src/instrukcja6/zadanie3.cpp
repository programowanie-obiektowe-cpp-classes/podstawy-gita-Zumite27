#include "randomVectorGenerator.hpp"
#include <iostream>

struct MalejacaKol {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main(){

    auto V = makeRandomVector<int>(5,0,10);
    for (int i : V) std::cout << i << " ";
    std::cout << "\n";

    std::sort(V.begin(), V.end(), MalejacaKol());
    for (int i : V) std::cout << i << " ";
    std::cout << "\n";

    return 0;
}

