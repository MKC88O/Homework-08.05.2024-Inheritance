// Homework-08.05.2024-Inheritance.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Aspirant.h"

using namespace std;

int main()
{
    Person p("Ivan", "Ivanov");
    p.Print();
    cout << "\n";

    Student s("Petr", "Petrov");
    s.Print();
    cout << "\n";

    s.Zachetka(11);
    s.Print();
    cout << "\n";

    s.Zachetka(12);
    s.Zachetka(10);
    s.Print();
    cout << "\n";

    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.prospalParu();
    s.Print();
    cout << "\n";

    s.sdalExam("C++");
    s.sdalExam("C++ OOP");
    s.sdalExam("Python");
    s.sdalExam("HTML");
    s.Print();
    cout << "\n";

    Aspirant a("Vasya", "Pupkin", "Programming in C++");
    a.Zachetka(12);
    a.sdalExam("C++ OOP");
    a.prospalParu();
    a.Print();
    cout << "\n";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
