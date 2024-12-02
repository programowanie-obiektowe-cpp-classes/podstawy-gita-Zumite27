#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
    auto vec = makeRandomVector<int>(10,0,10);
    printf("Oryginalny wektor: ");
    for (const auto& i : vec) printf("%d ", i);
    printf("\n");

    vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());

    printf("Wektor po usunieciu liczby 3: ");
    for (const auto& i : vec) printf("%d ", i);
    printf("\n");

    return 0;
}
