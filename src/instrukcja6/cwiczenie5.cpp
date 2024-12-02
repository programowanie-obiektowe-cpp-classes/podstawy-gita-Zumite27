#include <stdio.h>
#include <vector>
#include <algorithm> // std::find, std::sort
#include <cstdlib>   // rand, srand
#include <ctime>     // time

int main() {

    auto vec = makeRandomVector<int>(10,0,10);
    printf("Wektor przed sortowaniem: ");
    for (int i : vec) printf("%d ", i);
    printf("\n");

    auto it = std::find(vec.begin(), vec.end(), 7);

    if (it != vec.end()) {
        std::sort(vec.begin(), it);
    } else {
        std::sort(vec.begin(), vec.end());
    }

    printf("Wektor po sortowaniu: ");
    for (int i : vec) printf("%d ", i);
    printf("\n");

    return 0;
}
