#include <stdio.h>
#include <string>
#include <algorithm> // std::adjaccent_find

int main() {

    char input[100];
    printf("Podaj ciag znakow: ");
    scanf("%99s", input);

    std::string str(input);

    auto it = std::adjacent_find(str.begin(), str.end());

    if (it != str.end()) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
