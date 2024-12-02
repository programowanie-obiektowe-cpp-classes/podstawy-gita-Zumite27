#include "randomVectorGenerator.hpp"
#include <iostream>
int main(){

    auto V = makeRandomVector<int>(5,0,10);
    for (int i : V) std::cout << i << " ";
    std::cout << "\nPodaj granice liczenia i = ";
    int i;
    std::cin >> i;
    auto s = std::count_if(V.begin(), V.end(), [&](int a){return a > i;});
    std::cout << "Wiekszych od " << i <<": " << s << std::endl;
    return 0;
}