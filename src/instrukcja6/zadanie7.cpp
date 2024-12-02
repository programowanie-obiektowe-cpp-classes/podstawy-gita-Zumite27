#include "randomVectorGenerator.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

// Klasa Tresh
class Tresh {
public:
    Tresh() : granica{0} {}
    Tresh(int a) : granica{a} {}
    ~Tresh() {}

    bool operator()(int i) const {
        return i > granica;
    }

    int granica;
};

int main() {
    auto V = makeRandomVector<int>(5, 0, 10);
    for (int i : V) {
        std::cout << i << " ";
    }

    std::cout << "\nPodaj granice liczenia: ";
    int i;
    std::cin >> i;

    auto s = std::count_if(V.begin(), V.end(), [&](int a){return a > i;});
    std::cout << "Wiekszych od " << i <<": " << s << std::endl;

    return 0;
}