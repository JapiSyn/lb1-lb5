#include "pch.h"
#include <Windows.h>

using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Console::WriteLine(L"������ ���� �������:");
    String^ text = Console::ReadLine();

    array<wchar_t>^ arr = text->ToCharArray();

    Array::Reverse(arr);
    String^ result = gcnew String(arr);

    Console::WriteLine(L"������������ �����: " + result);



    return 0;
}