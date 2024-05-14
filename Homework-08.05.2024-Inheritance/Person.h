#pragma once
#include <iostream>
using namespace std;
class Person {
    string name;
    string surname;
public:
    void SetName(string name);
    void SetSurname(string surname);

    string GetName() const;
    string GetSurname() const;

    Person();
    Person(string name, string surname);
    Person(const Person& original);

    ~Person();

    void Print() const;
};

