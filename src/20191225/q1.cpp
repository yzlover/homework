#include <iostream>
using namespace std;

int main()
{
    int length = 10;
    int array[length];
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    int max = -1;
    for (int i = 0; i < length; i++) 
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << "最大的数为: " << max << endl;
}