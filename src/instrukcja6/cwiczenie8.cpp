#include <stdio.h>
#include <vector>
#include <algorithm> // std::any_of
#include <cstdlib>   // rand, srand
#include <ctime>     // time

int main() {
    srand(static_cast<unsigned>(time(0)));

    std::vector<double> vec;
    for (int i = 0; i < 10; ++i) {
        double random_num = -1.0 + static_cast<double>(rand()) / RAND_MAX * 2.0; // [-1, 1]
        vec.push_back(random_num);
    }

    printf("Wektor liczb: ");
    for (const auto& num : vec) {printf("%.2f ", num);}
    printf("\n");

    bool has_greater_than_09 = std::any_of(vec.begin(), vec.end(), [](double x) {return x > 0.9;});

    if (has_greater_than_09) {
        printf("Wektor zawiera liczbe wieksza niz 0.9.\n");
    }
    else {
        printf("Wektor nie zawiera liczby wiekszej niz 0.9.\n");
    }

    return 0;
}
