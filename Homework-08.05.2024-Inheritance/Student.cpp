#include "Student.h"

    Student::Student() {}
    Student::Student(string name, string surname) {
        SetName(name);
        SetSurname(surname);
    }

    Student::~Student() {}

    void Student::SetProspal(int prospal) {
        this->prospal = prospal;
    }

    int Student::GetProspal() const {
        return prospal;
    }

    void Student::Zachetka(int grade) {
        grades.push_back(grade);
        quantityGrades++;
    }

    void Student::sdalExam(string predmet) {
        exams.push_back(predmet);
    }
    void Student::averageGrades() const {
        if (grades.empty()) {
            cout << "No grades!";
            return;
        }
        double sumGrades = 0;
        for (int grade : grades) {
            sumGrades += grade;
        }
        double avgGrades = sumGrades / quantityGrades;
        cout << avgGrades;
    }
    void Student::prospalParu() {
        prospal++;
        p++;
        if (prospal >= 5) {
            Zachetka(1);
            prospal = 0;
        }
    }
  
    void Student::Print() const {
        Person::Print();
        cout << "Grades:\t\t\t";
        if (grades.empty()) {
            cout << " No grades!";
        }
        for (int grade : grades) {
            cout << " " << grade;
        }
        cout << "\n";
        cout << "Average grade:\t\t ";
        averageGrades();
        cout << "\n";
        cout << "Prospal paru: \t\t " << prospal << "(" << p << ")" <<  " raz\n";
        cout << "Sdal examen po :\t ";
        if (!exams.empty()) {
            for (string exam : exams) {
                cout << "\n\t\t\t";
                cout << "- " << exam;
            }
            cout << "\n";
        }
        else {
            cout << "OOPS! Ne sdal ne odnogo examena:(\n";
        }
    }