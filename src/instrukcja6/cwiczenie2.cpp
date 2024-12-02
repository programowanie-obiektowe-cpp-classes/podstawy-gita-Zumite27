#include <stdio.h>
#include <string>
#include <algorithm> // std::search

int main() {

    char input[200];
    printf("Podaj ciag znakow: ");
    scanf("%199s", input);

    std::string str(input);

    std::string sub1 = "piesek";
    std::string sub2 = "kotek";

    auto it1 = std::search(str.begin(), str.end(), sub1.begin(), sub1.end());
    auto it2 = std::search(str.begin(), str.end(), sub2.begin(), sub2.end());

    if (it1 != str.end() || it2 != str.end()) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
