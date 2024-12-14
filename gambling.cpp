
#include <iostream>

int main() {
    srand(time(0));
    int x = rand() % 10 + 1;
    if (x == 1) {
        std::cout << "🍒🍒🍒";
    }
    if (x == 2) {
        std::cout << "🍋🍋🍋";
    }
    if (x == 3) {
        std::cout << "🔔🔔🔔";
    }
    if (x == 4) {
        std::cout << "🍒🍋🔔";
    }
    if (x == 5) {
        std::cout << "🍋🔔🍒";
    }
    if (x == 6) {
        std::cout << "🔔🍋🔔";
    }
    if (x == 7) {
        std::cout << "🔔🍒🔔";
    }
    if (x == 8) {
        std::cout << "🔔🍒🔔";
    }
    if (x == 9) {
        std::cout << "7️⃣7️⃣7️⃣";
    }

    return 0;
}
