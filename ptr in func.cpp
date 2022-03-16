#include <iostream>
#include <cmath>

using namespace std;


void func(int* arr, int size, int* summ, int* mult)
{

    for (int i = 0; i < size; i++)
    {
        *summ += *(arr + i); //a[i]
    }
    cout << "Sum: " << *summ << endl;
    for (int j = 0; j < size; j++)
    {
        *mult *= (*arr + j);
    }
    cout << "Mult: " << *mult << endl;
}

int main()
{

    const int size = 5;
    int arr[size];
    int summ = 0;
    int multi = 1;

    int* psumm = &summ;
    int* pmulti = &multi;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << endl;
    }

    int* pa = &arr[0];
    func(pa, size, psumm, pmulti);

    return 0;