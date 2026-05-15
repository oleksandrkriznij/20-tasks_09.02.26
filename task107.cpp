#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    int id;
    int age;
    double grade;
};

bool compare_by_grade_desc(const student& a, const student& b) {
    return a.grade > b.grade;
}

bool compare_by_age(const student& a, const student& b) {
    return a.age < b.age;
}

int main() {

    vector<student> students = {
        {1, 20, 85.5},
        {2, 18, 91.2},
        {3, 22, 78.0}
    };

    sort(students.begin(), students.end(), compare_by_grade_desc);

    cout << "By grade:" << endl;

    for (auto s : students) {
        cout << s.id << " " << s.grade << endl;
    }

    sort(students.begin(), students.end(), compare_by_age);

    cout << "By age:" << endl;

    for (auto s : students) {
        cout << s.id << " " << s.age << endl;
    }

    return 0;
}
