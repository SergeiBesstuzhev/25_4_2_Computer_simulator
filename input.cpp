#include "input.h"
#include "operation.h"

#include <iostream>

void input_num(counts count) {
    std::cout << "Enter 8 num: " << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cin >> count.count[i];
    }
}

void sum(counts count) {
    for (int i = 0; i < 8; i++) {
        int sum = 0;
        sum += count.count[i];
        if (sum != 0) {
            std::cout << "Sum of numbers: " << sum << std::endl;
        }
        else std::cout << "Nothing entered" << std::endl;
    }
}

void display(counts count) {
    for (int i = 0; i < 8; i++) {
        std::cout << count.count[i] << " ";
    }
}
