#include <stdio.h>
#include <vector>

int main() {

    std::vector<int> v;

    printf("Rozmiar0: %d, Pojemnosc0:  %d\n", v.size(), v.capacity());
    printf("Adres pierwszego elementu wektora: %d\n", &v[0]);

    for (int i = 0; i < 100; ++i) {
        vec.push_back(i);
        printf("Dla %d elementow-> Rozmiar: %d, Pojemnosc: %d, Adres p.e. &v[0]: %d", v.size(), v.capacity(), &v[0]);
    }

    return 0;
}
