#include "menuHandler.h"
#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

void handleDrustkrdn(int argc, char* argv[]);
void handleKarkrdn(int argc, char* argv[]);
void handleAmadakrdn(int argc, char* argv[]);
void handleXawankrdn(int argc, char* argv[]);

void handleMenu(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Zmany Barnama Sazy Kurdlan" << std::endl;

        std::cout << "Bakarhenan:" << std::endl;

        std::cout << "kurdlan " << "drustkrdn <nawi proja>  - drust krdni proja" << std::endl;
        std::cout << "kurdlan " << "karkrdn - jebajekrdny proja" << std::endl;
        std::cout << "kurdlan " << "amadakrdn - amadakrdni proja" << std::endl;
        std::cout << "kurdlan " << "xawankrdn - xawaenkrdni  proja" << std::endl;

        system("pause");

        return;
    }

    std::string firstArg = argv[1];

    if (firstArg == "drustkrdn") {
        handleDrustkrdn(argc, argv);
    } else if (firstArg == "karkrdn") {
        handleKarkrdn(argc, argv);
    } else if (firstArg == "amadakrdn") {
        handleAmadakrdn(argc, argv);
    } else if (firstArg == "xawankrdn") {
        handleXawankrdn(argc, argv);
    } else {
        std::cout << "Unknown command. Run kurdlan without arguments for help." << std::endl;
    }

    system("pause");
}

void handleDrustkrdn(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "bakarhenan: kurdlan drustkrdn <nawi_proja>" << std::endl;
        return;
    }
    std::string projectName = argv[2];
    std::cout << "Drust krdni proja: " << projectName << std::endl;

    // Create the project directory
    std::filesystem::path projectPath = projectName;
    if (std::filesystem::exists(projectPath)) {
        std::cout << "Proja " << projectName << " peshwexist e." << std::endl;
        return;
    }
    std::filesystem::create_directory(projectPath);
    std::cout << "Proja " << projectName << " drust kra." << std::endl;

    // Create a sample main.kurd file
    std::ofstream sampleFile(projectPath / "main.kurd");
    if (sampleFile.is_open()) {
        sampleFile << "// نموونەی بەرنامەی کوردلان\n";
        sampleFile << "چاپکردن(\"سڵاو جیهان!\");\n";
        sampleFile.close();
        std::cout << "فایلی نموونە main.kurd دروستکرا." << std::endl;
    } else {
        std::cout << "هەڵە لە دروستکردنی فایلی نموونە." << std::endl;
    }
}

void handleKarkrdn(int argc, char* argv[]) {
    std::cout << "Jebajekrdny proja..." << std::endl;
    // Code to build the project would go here
}

void handleAmadakrdn(int argc, char* argv[]) {
    std::cout << "Amadakrdni proja..." << std::endl;
    // Code to prepare the project would go here
}

void handleXawankrdn(int argc, char* argv[]) {
    std::cout << "Xawaenkrdni proja..." << std::endl;
}

