#include <stdio.h>
#include <string>
#include <algorithm> // std::reverse

int main() {
    char input[200];

    printf("Podaj ciąg znaków: ");
    scanf("%199s", input);

    std::string str(input);
    std::reverse(str.begin(), str.end());
    
    printf("Odwrócony ciąg: %s\n", str.c_str());

    return 0;
}
