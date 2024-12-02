#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib> 
#include <ctime> 

int main() {
    srand(static_cast<unsigned>(time(0)));

    std::vector<double> vec1;
    for (int i = 0; i < 10; ++i) {
        double random_num = -1.0 + static_cast<double>(rand()) / RAND_MAX * 2.0; // [-1, 1]
        vec1.push_back(random_num);
    }

    printf("Pierwszy wektor: ");
    for (const auto& num : vec1) {printf("%.2f ", num);}
    printf("\n");

    std::vector<double> vec2(vec1.size());

    std::transform(vec1.begin(), vec1.end(), vec2.begin(), [](double x) {return std::sin(x);});

    printf("Drugi wektor (sinusy): ");
    for (const auto& num : vec2) {printf("%.2f ", num);}
    printf("\n");

    return 0;
}
