#include <stdio.h>
#include <vector>
#include <numeric> // std::inner_product

int main() {
    std::vector<double> vec1 = {1.2, 2.4, 3.6};
    std::vector<double> vec2 = {4.0, 5.0, 6.0};

    if (vec1.size() != vec2.size()) {
        printf("Error: Wektory musza miec te sama dlugosc!\n");
        return 1;
    }

    double dot_product = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0.0);

    printf("Iloczyn skalarny wynosi: %.2f\n", dot_product);

    return 0;
}
