#include <stdio.h>
#include <vector>

int main() {

    std::vector<int> v(100, 42);
    //std::vector<int> v{100, 42};

    printf("Rozmiar: %d, Pojemnosc: %d",v.size(), v.capacity() )

    return 0;
}
