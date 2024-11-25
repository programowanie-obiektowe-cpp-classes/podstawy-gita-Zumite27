#include <stdio.h>
#include <list>

int main() {

    std::list<int> mLista = {1, 2, 3, 4, 5};
    printf("Korzystajac z const_reverse_iterator: \n");
    printf("Elementy listy od tylu to: ");
   
    for (std::list<int>::const_reverse_iterator element = mLista.rbegin(); element != mLista.rend(); ++element) {
        printf("- %d ", *element);
    }
    printf("\n");

    return 0;
}
