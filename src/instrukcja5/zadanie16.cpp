#include <stdio.h>
#include <list>

int main() {

    std::list<int> mLista = {1, 2, 3, 4, 5};

    printf("Modyfikacja ze zwiekszaniem wartosci elementu listy o 1: \n");
    printf("Elementy listy od tylu to: ");
    for (std::list<int>::reverse_iterator element = mLista.rbegin(); element != mLista.rend(); ++element) {
        *element += 1;
        printf("- %d ", *element);
    }
    printf("\n");

    return 0;
}
