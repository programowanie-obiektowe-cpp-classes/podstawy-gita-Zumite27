#include "randomVectorGenerator.hpp"
#include <iostream>
int main(){

    auto V = makeRandomVector<int>(5,0,10);
    for (int i : V) std::cout << i << " ";
    std::cout << "\n";


    auto s = std::count(V.begin(), V.end(), 7);
    std::cout << "Rownych 7: " << s << '\n';
    return 0;
}