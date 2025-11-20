#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {

    // check if no arguments are provided
    if (argc < 2) {
        std::cout << "Zmany Barnama Sazy Kurdlan" << std::endl;
        
        std::cout << "Bakarhenan:" << std::endl;

        std::cout << "kurdlan " << "drustkrdn <nawi proja>  - drust krdni proja" << std::endl;
        std::cout << "kurdlan " << "karkrdn - jebajekrdny proja" << std::endl;
        std::cout << "kurdlan " << "amadakrdn - amadakrdni proja" << std::endl;
        std::cout << "kurdlan " << "xawankrdn - xawaenkrdni  proja" << std::endl;

        system("pause");

        return 0;
    }

    std::string firstArg = argv[1];

    system("pause");

    return 0;
}
