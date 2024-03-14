#include <iostream>
#include <string>

int main() {
    std::cout << "Input: ";
    std::string str;
    std::getline(std::cin, str);

    int commaCount = 0;
    int commaIndex = -1;

    // Знаходимо індекс третьої коми
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ',') {
            commaCount++;
            if (commaCount == 3) {
                commaIndex = i;
                break;
            }
        }
    }

    if (commaIndex != -1) {
        std::cout << "Index: " << commaIndex << std::endl;

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == ',') {
                str.replace(i, 1, "**");
                i++;
            }
        }

        std::cout << "Output width '**': " << str << std::endl;
    }
    else {
        std::cout << "Nothing" << std::endl;
    }

    return 0;
}