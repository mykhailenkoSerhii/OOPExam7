#include "Task.h"
#include "iostream"

using namespace std;

template<typename T> void min(T* list, int size, T& min)
{
    for (int i = 0; i < size; ++i)
    {
        T val = list[i];
        if (val < min)
            min = val;
    }
}

template<> void min(char* list, int size, char& min)
{
    for (int i = 0; i < size; ++i)
    {
        char val = list[i];
        if (val < min)
            min = val;
    }
}

void task1()
{
    charTest();
    intTest();
    doubleTest();
}

void charTest()
{
    cout << "Testing with char" << endl;
    int n;
    cout << "Input how many characters you want to input ";
    cin >> n;

    char arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    char minVal = 'z';
    min(arr, n, minVal);
    cout << "Min result : " << minVal << endl;
}

void intTest()
{
    cout << "Testing with int" << endl;
    int n;
    cout << "Input how many numbers you want to input ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int minVal = 9999999;
    min(arr, n, minVal);
    cout << "Min result : " << minVal << endl;
}

void doubleTest()
{
    cout << "Testing with double" << endl;
    int n;
    cout << "Input how many numbers you want to input ";
    cin >> n;

    double arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    double minVal = 99999999;
    min(arr, n, minVal);
    cout << "Min result : " << minVal << endl;
}
