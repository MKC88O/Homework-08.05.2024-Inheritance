#include "Person.h"

    void Person::SetName(string name) {
        this->name = name;
    }

    void Person::SetSurname(string surname) {
        this->surname = surname;
    }

    string Person::GetName() const {
        return name;
    }

    string Person::GetSurname() const {
        return surname;
    }

    Person::Person() : Person("Ivan", "Ivanov") {}

    Person::Person(string name, string surname) {
        SetName(name);
        SetSurname(surname);
    }

    Person::Person(const Person& original) : Person("Ivan", "Ivanov") {
        this->name = original.name;
        this->surname = original.surname;
    }

    Person::~Person() {}

    void Person::Print() const {
        cout << "Name:\t\t\t " << GetName() << " " << GetSurname() << "\n";
    }
