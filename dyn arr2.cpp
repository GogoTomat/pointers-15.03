#include <iostream>
#include <cmath>

using namespace std;

int main() {

int* ip = new int;
   double* mas = new double[50];

   int size;
   cin >> size;
   int* dar;

   dar = new int[size];

   for (int i = 0; i < size; i++) {
       dar[i] = rand() % 10;
       cout << dar[i] << "\t";
   


   int* ip = new int;
   delete[] arr;
   delete ip;

   int* ip = new int[50];






   int sizeA, sizeB;
   cout << "Size of the first arr: ";
   cin >> sizeA;

   cout << "Size of the second arr: ";
   cin >> sizeB;

   int* arrA = new int[sizeA];
   int* arrB = new int[sizeB];

   for (int i = 0; i < sizeA; i++)
   {
       arrA[i] = rand() % 10;
       cout << arrA[i] << "\t";
   }
   cout << endl;

   for (int i = 0; i < sizeB; i++)
   {
       arrB[i] = rand() % 10;
       cout << arrB[i] << "\t";
   }



   int tmp = 0;

   for (int i = 0; i < sizeA; i++)
   {
       for (int j = 0; j < sizeB; j++)
       {
           if (arrA[i] == arrB[j])
           {
               tmp++;
           }
       }
   }

   int sizeC = tmp;
   int* arrtmp = new int[sizeC];
   tmp = 0;

   for (int i = 0; i < sizeB; i++)
   {
       for (int j = 0; j < sizeA; j++)
       {
           if (arrB[i] == arrA[j])
           {
               arrtmp[tmp] = arrB[i];
               tmp++;
           }
       }
   }
   cout << endl;

   int* arrC = new int[sizeC];
   for (int i = 0; i < sizeC; i++)
   
       arrC[i] = arrtmp[i];
       cout << arrC[i] << " ";
   }