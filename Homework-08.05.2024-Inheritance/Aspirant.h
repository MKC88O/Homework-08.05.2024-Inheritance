#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Aspirant : public Student {
    string dissertation;
public:
    Aspirant();
    Aspirant(string name, string surname, string dissertation);
    ~Aspirant();

    void SetDissertation(string dissertation);
    string GetDissertation() const;

    void Print() const;
};
