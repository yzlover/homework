#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void printAgeAndWeight()
    {
        cout << "年龄为：" << age << "; 体重为：" << weight << "kg";
    }
};

