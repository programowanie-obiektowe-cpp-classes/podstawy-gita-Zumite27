#include <stdio.h>
#include <list>

int main() {

    std::list<int> mLista = {1, 2, 3, 4, 5};

    printf("Elementy listy od tylu to: ");
    for (auto element = mLista.rbegin(); element != mLista.rend(); ++element) {
        printf("-%d ", *element);
    }
    printf("\n");

    return 0;
}
