#include <stdio.h>
#include <string>
#include <algorithm> // std::reverse

int main() {
    char input[200];

    printf("Podaj ciag znakow: ");
    scanf("%199s", input);

    std::string str(input);
    std::reverse(str.begin(), str.end());

    printf("Odwrocony ciag: %s\n", str.c_str());

    return 0;
}
