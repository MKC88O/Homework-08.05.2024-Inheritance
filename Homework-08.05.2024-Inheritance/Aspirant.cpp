#include "Aspirant.h"

    Aspirant::Aspirant() {}
    Aspirant::Aspirant(string name, string surname, string dissertation) : Student(name, surname) {
        SetDissertation(dissertation);
    }
    Aspirant::~Aspirant() {}

    void Aspirant::SetDissertation(string dissertation) {
        this->dissertation = dissertation;
    }

    string Aspirant::GetDissertation() const {
        return dissertation;
    }

    void Aspirant::Print() const {
        Student::Print();
        cout << "Dissertation theme: " << dissertation << "\n";
    }