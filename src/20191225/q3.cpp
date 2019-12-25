#include <iostream>
using namespace std;

class Person
{
private:
    int _height;
    int _weight;
    int _age;

public:
    Person(int height, int weight, int age)
    {
        _height = height;
        _weight = weight;
        _age = age;
    }

    void sleep()
    {
        cout << "睡眠" << endl;
    }
};

int main()
{
    int age = 19, height = 170, weight = 60;
    Person zhouxue(height, weight, age);

    cout << "周雪的身高是:" << height << "cm; 体重是：" << weight << "kg; 年龄是：" << age << endl;
    zhouxue.sleep();
}