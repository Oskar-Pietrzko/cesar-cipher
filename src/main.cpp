#include <iostream>
#include <string>

auto encrypt(const std::string_view text, int shift) -> std::string {
    std::string result;
    shift = shift % 26;

    const int length = static_cast<int>(text.size());

    for (int i = 0; i < length; i++) {
        if (!std::isalpha(text[i])) {
            result += text[i];

            continue;
        }

        if (std::isupper(text[i])) {
            result += static_cast<char>((text[i] + shift - 65) % 26 + 65);
        } else {
            result += static_cast<char>((text[i] + shift - 97) % 26 + 97);
        }
    }

    return result;
}

auto main() -> int {
    std::string input;
    int shift;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Enter shift: ";
    std::cin >> shift;

    std::cin.ignore();

    std::cout << "Encrypted text: " << encrypt(input, shift) << std::endl << std::endl;

    std::cout << "Press Enter to exit...";
    std::cin.get();

    return 0;
}
