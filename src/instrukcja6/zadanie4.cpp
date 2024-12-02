#include "randomVectorGenerator.hpp"
#include <iostream>
int main(){

    auto V = makeRandomVector<int>(5,0,10);
    for (int i : V) std::cout << i << " ";
    std::cout << "\n";


    auto s = std::count_if(V.begin(), V.end(), [](int a){return a > 7;});
    std::cout << "Wiekszych od 7: " << s << std::endl;
    return 0;
}