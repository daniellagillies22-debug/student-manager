#include <iostream>

#include <vector>

#include <string>

using namespace std;

struct Student {

    string name;

    int age;

    double averageGrade;

};

vector<Student> students;

void addStudent() {

    Student student;

    cout << "Enter student name: ";

    cin >> student.name;

    cout << "Enter student age: ";

    cin >> student.age;

    cout << "Enter average grade: ";

    cin >> student.averageGrade;

    students.push_back(student);

    cout << "Student added successfully!\n";

}

void showAllStudents() {

    if (students.empty()) {

        cout << "No students yet.\n";

        return;

    }

    for (const Student& student : students) {

        cout << "\nName: " << student.name;

        cout << "\nAge: " << student.age;

        cout << "\nAverage grade: " << student.averageGrade << "\n";

    }

}

int main() {

    cout << "Student Manager\n";

    return 0;