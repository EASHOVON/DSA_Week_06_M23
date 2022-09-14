#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int globalId = 100;

class Person
{
    string name;
    int id;
    float salary;

public:
    Person()
    {
        this->name = "";
        this->id = -1;
        this->salary = -1.0;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }

    Person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        this->id = globalId;
        globalId++;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};

int main()
{
    // Stack<string> st;
    // st.Push("Shovon");
    // st.Push("Rakib");
    // st.Push("Rubel");
    // st.Push("Shohel");

    // while (!st.Empty())
    // {
    //     cout << st.Pop() << endl;
    // }

    // cout << st.Size() << endl;
    // if (!st.Empty())
    //     cout << st.Top() << endl;

    Stack<Person> st;
    Person a("Shovon Ahmed", 10500.50);
    Person b("Mysha Ahmed", 9500.25);
    Person c("Adiyan Ahmed", 10500.15);
    st.Push(a);
    st.Push(b);
    st.Push(c);

    while (!st.Empty())
    {
        Person printObj;
        printObj = st.Pop();
        printObj.print();
    }
    return 0;
}