#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int size = 5;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* a = new int[size];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        int n;
        cout << "\nMenu:" << endl;
        cout << "1 - Remove even values of an array" << endl;
        cout << "2 - Remove odd values of an array" << endl;
        cout << "3 - Show the current array" << endl;
        cout << "4 - Exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            for (int i = 0; i < size; i++)
            {

                if (*(a + i) % 2 == 0)
                {
                    for (int j = i; j < size - 1; j++)
                    {

                        *(a + j) = *(a + j + 1);
                    }
                    size--;
                    i--;
                }
            }
        } break;
        case 2:
        {
            for (int i = 0; i < size; i++)
            {
                if (*(a + i) % 2 != 0)
                {
                    for (int j = i; j < size - 1; j++)
                    {
                        *(a + j) = *(a + j + 1);
                    }
                    size--;
                    i--;
                }
            }
        } break;
        case 3:
        {
            cout << "Array: ";
            for (int i = 0; i < size; i++)
            {
                //a[i]
                cout << *(a + i) << " ";
            }
        } break;

        case 4:
        {
            delete[] a;
            return 0;
        } break;

        default:
        {
            cout << "\nError. Please enter the correct number" << endl;
        }
        }
    }
}