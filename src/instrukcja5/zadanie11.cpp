#include <stdio.h>
#include <list>

int main() {
    std::list<int> mLista = {1, 2, 3, 4, 5};


    // int a = mLista[0]; //Błąd kompilacji

    printf("Lista std::list nie obsluguje operatora [].\n");

    auto element = mLista.begin();
    std::advance(element, 2); // Przesunięcie do trzeciego elemntu
    printf("Trzeci element listy to: %d\n", *element);

    return 0;
}
