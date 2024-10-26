#include "pch.h"
#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace System;

void Print(array<int, 2>^ arr, int n) {
    Console::WriteLine();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Console::Write(arr[i, j] + L" ");
        }
        Console::WriteLine();
    }
    Console::WriteLine();
}

array<int, 2>^ MinusMatrix(array<int, 2>^ arr, array<int, 2> ^ arr1, array<int, 2>^ arr2, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i, j] = arr1[i, j] - arr2[i, j];
        }
    }
    return arr;
}

int main(array<System::String ^> ^args)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));

    int n;
    Console::WriteLine(L"¬вед≥ть розм≥р матриц≥ NxN: ");
    while (true) {
        try {
            n = int::Parse(Console::ReadLine());
            break;
        }
        catch (...) {
            Console::WriteLine(L"Ќе число");
        }
    }

    array<int, 2>^ matrix1 = gcnew array<int, 2>(n, n);
    array<int, 2>^ matrix2 = gcnew array<int, 2>(n, n);
    array<int, 2>^ matrix3 = gcnew array<int, 2>(n, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix1[i, j] = rand() % 101;
            matrix2[i, j] = rand() % 101;
        }
    }
    Console::WriteLine(L"ѕерша матриц€: ");
    Print(matrix1, n);
    Console::WriteLine(L"ƒруга матриц€: ");
    Print(matrix2, n);
    MinusMatrix(matrix3, matrix2, matrix1, n);
    Console::WriteLine(L"“рет€ матриц€(р≥зниц€ другоњ та першоњ): ");
    Print(matrix3, n);

    return 0;
}