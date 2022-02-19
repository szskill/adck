#include <iostream>

/**
 * @brief Generates an ASCII dick. This is what `adck` is all about!
 * 
 * @param length The length of the dick. It preferably should not go over 8.
 * @return std::string 
 */
std::string generate_dick(int length)
{
    std::string dick;

    dick += "  / \\\n";

    for (int i = 0; i < length; i++) {
        dick += "  | |\n";
    }

    dick += "()   ()";

    return dick;
}

int main(int argc, char *argv[])
{
    // Get user-defined length from argv, default to 4 when it can't be parsed
    int length = 4;
    if (argc > 1) {
        length = std::atoi(argv[1]);
        if (length == 0) {
            length = 4;
        }
    }

    std::cout << generate_dick(length) << "\n";

    return 0;
}