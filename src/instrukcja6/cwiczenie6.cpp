#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {3, 1, 4, 3, 2, 5, 3, 7, 3};

    printf("Oryginalny wektor: ");
    for (const auto& num : vec) {
        printf("%d ", num);
    }
    printf("\n");

    vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());

    printf("Wektor po usunieciu liczby 3: ");
    for (const auto& num : vec) {
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}
