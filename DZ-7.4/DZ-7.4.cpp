#include <iostream>
using namespace std;

void sort1(int a[], int size, int third) {
    int buf;
    for (int i = 0; i < third; i++) {           //сортировка части массива
        for (int j = third - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                buf = a[j - 1];
                a[j - 1] = a[j];
                a[j] = buf;
            }
        }
    }
    cout << "Вывод массива после сортировки с реверсом последней трети" << endl;
    for (int i = 0; i < third; i++) {    //вывод части массива после сортировки
        cout << a[i] << " ";
    }
    cout << " | ";

    for (int i = size - 1; i > third-1; i--) { //КОСТЫЛИЩЕ! просто вывод части массива с конца...
        cout << a[i] << " ";
    }

}

void sort2(int a[], int size, int third) {
    int buf;
    for (int i = 0; i < third; i++) {       //сортировка части массива
        for (int j = third - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                buf = a[j - 1];
                a[j - 1] = a[j];
                a[j] = buf;
            }
        }
    }
    cout << "Вывод массива после сортировки с реверсом последних двух третей:" << endl;
    for (int i = 0; i < third; i++) {    //вывод части массива после сортировки
        cout << a[i] << " ";
    }
    cout << " | ";

    for (int i = size - 1; i > third - 1; i--) { //КОСТЫЛИЩЕ! просто вывод части массива с конца...
        cout << a[i] << " ";
    }

}


int main()
{
    setlocale(LC_ALL, "rus");
    const int size = 9;
    int arr[size];
    int third = size / 3;   //размер трети массива
    int average, sum = 0;   //среднее, буфер.
    for (int i = 0; i < size; i++) {    //заполнение массива
        arr[i] = rand() % 100;
        cout << arr[i] << "\t";
        sum = +arr[i];
    }
    average = sum / size;   //вычисление среднего значения массива
    cout << endl;

    if (average > 0) {
        sort1(arr, size, third*2);
    }
    else {
        sort2(arr, size, third);
    }

}
