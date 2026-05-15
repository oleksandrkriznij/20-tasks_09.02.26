#include <iostream>

struct char_vector {
    char* data;
    int size;
    int capacity;

    void print_string() {
        for (int i = 0; i < size; i++) {
            std::cout << data[i];
        }
        std::cout << std::endl;
    }
};

int main() {
    char_vector cv = {new char[5]{'C', 'p', 'p', '!', '!'}, 5, 5};
    cv.print_string();
    delete[] cv.data;
    return 0;
}
