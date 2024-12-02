#include <stdio.h>
#include <vector>
#include <algorithm> // std::find, std::rotate

int main() {
    auto vec = makeRandomVector<int>(10,0,10);
    printf("Oryginalny wektor: ");
    for (const auto& i : vec) printf("%d ", i);
    printf("\n");

    auto it = std::find(vec.begin(), vec.end(), 7);

    if (it != vec.end()) {
        std::rotate(vec.begin(), it, vec.end());
    }

    printf("Wektor po przesunieciu: ");
    for (const auto& i : vec) printf("%d ", i);
    printf("\n");

    return 0;
}
