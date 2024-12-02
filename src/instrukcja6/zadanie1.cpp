#include "randomVectorGenerator.hpp"
#include <iostream>
int main(){

    auto V = makeRandomVector<int>(5,0,10);
    for (int i : V) std::cout << i << " ";
    std::cout << "\n";


    std::sort(V.begin(), V.end());
    for (int i : V) std::cout << i << " ";
    std::cout << "\n";
    return 0;
}