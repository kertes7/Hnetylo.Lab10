#include <iostream>
#include <Windows.h>
#include <string>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string text = "Ось номери: +38(067)123-45-67, +38(050)555-55-55 та +38(063)999-88-77.";

    for (size_t i = 0; i < text.size() - 16; i++) {
        std::string part = text.substr(i, 17);

        if (part[0] == '+' && part[1] == '3' && part[2] == '8' &&
            part[3] == '(' && isdigit(part[4]) && isdigit(part[5]) && isdigit(part[6]) && part[7] == ')' &&
            isdigit(part[8]) && isdigit(part[9]) && isdigit(part[10]) && part[11] == '-' &&
            isdigit(part[12]) && isdigit(part[13]) && part[14] == '-' &&
            isdigit(part[15]) && isdigit(part[16]))
        {
            std::cout << "Знайдено номер: " << part << std::endl;
        }
    }

    return 0;
}
