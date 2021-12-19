#include <iostream>
#include <string>
#include "input.h"
#include "operation.h"

int main() {
    while (true) {
        std::string command;
        std::cout << "Enter command: ";
        std::cin >> command;
        if (command == "input") {
            input_num();
        }
        else if (command == "sum") {
            sum();
        }
        else if (command == "save") {
            data_add();
        }
        else if (command == "load") {
            data_read();
        }
        else if (command == "input") {
            input_num();
        }
        else if (command == "display") {
            display();
        }
        else if (command == "exit") {
            return 0;
        }
        else std::cout << "Unknown command: " << command << std::endl;
    }
}