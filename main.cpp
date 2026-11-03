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

    cout << «Enter student name: «;

    cin >> student.name;

    cout << «Enter student age: «;

    cin >> student.age;

    cout << «Enter average grade: «;

    cin >> student.averageGrade;

    students.push_back(student);

    cout << «Student added successfully!\n»;

}

void showAllStudents() {

    if (students.empty()) {

        cout << «No students yet.\n»;

        return;

    }

    for (const Student& student : students) {

        cout << «\nName: « << student.name;

        cout << «\nAge: « << student.age;

        cout << «\nAverage grade: « << student.averageGrade << «\n»;

    }

}

void findStudent() {

    string name;

    cout << «Enter student name: «;

    cin >> name;

    for (const Student& student : students) {

        if (student.name == name) {

            cout << «Name: « << student.name << «\n»;

            cout << «Age: « << student.age << «\n»;

            cout << «Average grade: « << student.averageGrade << «\n»;

            return;

        }

    }

    cout << «Student not found.\n»;

}

void showBestStudent() {

    if (students.empty()) {

        cout << «No students yet.\n»;

        return;

    }

    Student best = students[0];

    for (const Student& student : students) {

        if (student.averageGrade > best.averageGrade) {

            best = student;

        }

    }

    cout << «Best student: « << best.name << «\n»;

    cout << «Average grade: « << best.averageGrade << «\n»;

}

void showGroupAverage() {

    if (students.empty()) {

        cout << «No students yet.\n»;

        return;

    }

    double sum = 0;

    for (const Student& student : students) {

        sum += student.averageGrade;

    }

    cout << «Group average: « << sum / students.size() << «\n»;

}

int main() {

    int choice;

    do {

        cout << «\n===== STUDENT MANAGER =====\n»;

        cout << «1. Add student\n»;

        cout << «2. Show all students\n»;

        cout << «3. Find student\n»;

        cout << «4. Show best student\n»;

        cout << «5. Show group average\n»;

        cout << «0. Exit\n»;

        cout << «Choose an option: «;

        cin >> choice;

        switch (choice) {

        case 1:

            addStudent();

            break;

        case 2:

            showAllStudents();

            break;

        case 3:

            findStudent();

            break;

        case 4:

            showBestStudent();

            break;

        case 5:

            showGroupAverage();

            break;

        case 0:

            cout << «Goodbye!\n»;

            break;

        default:

            cout << «Invalid option.\n»;

        }

    } while (choice != 0);

    return 0;

}