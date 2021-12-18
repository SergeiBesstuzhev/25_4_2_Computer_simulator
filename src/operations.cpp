#include "../include/operations.h"

#include <fstream>

void data_add(counts count) {
    std::ofstream count_add("data.txt", std::ios::app | std::ios::trunc);
    for (int i = 0; i < 8; i++) {
        count_add << std::endl << count.count[i];
    }
    count_add.close();
}
void data_read(counts count) {
    std::ifstream count_read("data.txt");
    for (int i = 0; i < 8; i++) {
        count_read >> count.count[i];
    }
}