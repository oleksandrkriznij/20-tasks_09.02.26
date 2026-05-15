#include <iostream>

bool check_brackets(const char* str, int index, int open_count) {
    if (open_count < 0) return false;
    if (str[index] == '\0') return open_count == 0;

    if (str[index] == '(')
        return check_brackets(str, index + 1, open_count + 1);
    else if (str[index] == ')')
        return check_brackets(str, index + 1, open_count - 1);
    
    return check_brackets(str, index + 1, open_count);
}

int main() {
    std::cout << "(()()): " << std::boolalpha << check_brackets("(()())", 0, 0) << std::endl;
    std::cout << "()) ( : " << check_brackets("())(", 0, 0) << std::endl;
    return 0;
}
