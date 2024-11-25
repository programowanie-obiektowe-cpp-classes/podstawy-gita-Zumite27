#include <stdio.h>
#include <list>

int main() {


    // Zadanie 12
    //std::list<int> mLista = {1,2,3,4,5};

    // Zadanie 13
    std::list<int> mLista = {1};
    mLista.push_front(2);
    mLista.push_front(3);
    mLista.push_front(4);
    mLista.push_front(5);


    printf("Elementy listy to: ");
    for (const int& value : mLista) {
        printf("- %d ", value);
    }
    printf("\n");

    return 0;
}


