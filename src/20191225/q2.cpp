#include <iostream>
using namespace std;

int jiecheng(int n) 
{
    if (n == 1) 
    {
        return 1;
    }
    return jiecheng(n - 1) * n;
}
int main()
{
    int x;
    cin >> x;
    cout << "数" << x << "的阶乘为：" << jiecheng(x);
}

