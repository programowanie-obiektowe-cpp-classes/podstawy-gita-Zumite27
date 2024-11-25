#include <stdio.h>
#include <vector>
#include <string>

class Human {
public:
    Human(const std::string& name) : name(name) {
        printf("Wywolanie konstruktora dla %s\n", name);
    }

    Human(std::string&& name) noexcept : name(std::move(name)) {
        printf("Wywolanie konstruktora przenoszacego dla %s\n", this->name);
    }

    ~Human() {
        printf("Wywolanie destruktora dla %s\n", name);
    }

    std::string name;
};


void displayHumans(const std::vector<Human>& humans) {
    printf("Lista osob w wektorze to: ")
    for (const auto& human : humans) {
        printf("-%s ", human.name);
    }
    if (humans.empty()) {
        printf("Wektor jest pusty");
    }
    printf("\n");
    
}

int main() {
    std::vector<Human> humans;
    std::string input;

    while (true) {
        printf("Podaj imie albo komende 'pop' lub 'stop': ");
        std::cin >> input;

        if (input == "stop") {
            break;
        } else if (input == "pop") {
            if (!humans.empty()) {
                humans.pop_back();
                printf("Usunieto ostatni element wektora.\n")
            } else {
                printf("Wektor jest pusty, wiec nie mozna usunac ostatniego elementu.\n");
            }
        } else {
            humans.emplace_back(input);
        }

        displayHumans(humans);
    }

    printf("Koniec programu.\n");

    return 0;
}
