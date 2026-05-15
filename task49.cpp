#include <iostream>

struct point {
    int x, y, z;
};

std::ostream& operator<<(std::ostream& out, const point& p) {
    return out << "(" << p.x << ", " << p.y << ", " << p.z << ")";
}

std::istream& operator>>(std::istream& in, point& p) {
    return in >> p.x >> p.y >> p.z;
}

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;

    void push_back(T val) {
        if (size == capacity) {
            int new_cap = capacity == 0 ? 1 : capacity * 2;
            T* new_data = new T[new_cap];
            for (int i = 0; i < size; i++) new_data[i] = data[i];
            delete[] data;
            data = new_data;
            capacity = new_cap;
        }
        data[size++] = val;
    }
};

int main() {
    vector<point> points = {nullptr, 0, 0};
    points.push_back({0, 0, 0});
    points.push_back({1, 1, 1});
    points.push_back({-5, 3, 2});

    std::cout << "Current points:" << std::endl;
    for(int i=0; i<points.size; i++) std::cout << points.data[i] << " ";
    
    point new_p;
    std::cout << "\nEnter new point (x y z): ";
    std::cin >> new_p;
    points.push_back(new_p);

    std::cout << "Final list: ";
    for(int i=0; i<points.size; i++) std::cout << points.data[i] << " ";
    std::cout << std::endl;

    delete[] points.data;
    return 0;
}
