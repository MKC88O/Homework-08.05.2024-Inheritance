#pragma once
#include <iostream>
#include "Person.h"
#include <vector>

using namespace std;
class Student : public Person {
    vector <int> grades;
    vector<string> exams;
    int quantityGrades = 0;
    int prospal = 0;
    int p = 0;
public:
    Student();
    Student(string name, string surname);
    ~Student();
    
    void SetProspal(int prospal);
    int GetProspal() const;

    void Zachetka(int grade);
    void sdalExam(string predmet);
    void averageGrades() const;
    void prospalParu();
    void Print() const;
};

