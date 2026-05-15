#include <iostream>

struct point {
    int x;
    int y;
    int z;
};

std::ostream& operator<<(std::ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}

std::istream& operator>>(std::istream& in, point& p) {
    in >> p.x >> p.y >> p.z;
    return in;
}

int main() {
    point p;
    std::cout << "Enter x, y, z: ";
    std::cin >> p;
    std::cout << "3D Point: " << p << std::endl;
    return 0;
}
