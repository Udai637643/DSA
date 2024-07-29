#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    string gender;

public:
    int Age;

    // Simple constructor
    Hero()
    {
        cout << "This is constructor call" << endl;
    }

    // Parametrized constructor

    Hero(int age, string gen)
    {
        this->gender = gen;
        cout << "this:-" << this << endl;
        this->Age = age;
    }

    //copy constructor

     Hero(Hero &temp)
    {
        cout<<"Copy construnctor called"<<endl;
        this->gender = temp.gender;
        cout << "this:-" << this << endl;
        this->Age = temp.Age;
    }
    // for return the value
    string getterGen()
    {
        return gender;
    }
    // for set the value
    void setterGen(string g)
    {
        gender = g;
    }

    int getterAge()
    {
        return Age;
    }
    // for set the value
    void setterAge(int age)
    {
        Age = age;
    }
};
int main()
{
    Hero obj1(10, "male");

    cout << "the value of age:-" << obj1.Age << endl;
    cout << "Address:-" << &obj1 << endl;
    cout << "The gen is :-" << obj1.getterGen();
cout<<endl<<endl;

//to make copy constructor
    Hero obj2(obj1);

cout << "the value of age:-" << obj1.Age << endl;
    cout << "Address:-" << &obj1 << endl;
    cout << "The gen is :-" << obj1.getterGen();

    // static allocation
    // object creation
    //     Hero obj1;
    //     obj1.setterGen("Male");
    //     obj1.setterAge(20);
    //     cout << "Age:-" << obj1.getterAge() << endl;
    //     cout << "Gender:-" << obj1.getterGen() << endl;
    // cout<<endl;

    // //Dynamic Allocation
    // //object creation
    // Hero *obj2= new Hero;

    // obj2->setterAge(30);
    // obj2->setterGen("female");
    // cout << "Age:-" << obj2->getterAge() << endl;
    // cout << "Gender:-" << obj2->getterGen() << endl;
}