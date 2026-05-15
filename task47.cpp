#include <iostream>

// Додамо структуру point, щоб перевірити універсальність
struct point {
    int x, y;
};
std::ostream& operator<<(std::ostream& out, const point& p) {
    return out << "(" << p.x << ", " << p.y << ")";
}

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;

    void print() {
        std::cout << "[";
        for (int i = 0; i < size; i++) {
            std::cout << data[i];
            if (i < size - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    int arr_int[] = {1, 2, 3};
    vector<int> v_int = {arr_int, 3, 3};
    v_int.print();

    point arr_pts[] = {{0, 0}, {1, 1}};
    vector<point> v_pts = {arr_pts, 2, 2};
    v_pts.print();

    return 0;
}
