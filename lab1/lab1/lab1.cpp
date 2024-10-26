#include "pch.h" 
using namespace System;

int main(array<System::String^>^ args)

{
    Console::OutputEncoding = System::Text::Encoding::UTF8;
    Console::InputEncoding = System::Text::Encoding::UTF8;

    Console::WriteLine(L"¬вед≥ть де€к≥ слова через проб≥л:");
    String^ text = Console::ReadLine();

    Console::WriteLine(L"¬вед≥ть першу букву шуканого слова:");
    wchar_t bukva = Console::Read();

    array<String^>^ words = text->Split(' ');

    System::Collections::Generic::List<String^>^ mWords = gcnew System::Collections::Generic::List<String^>();

    for each (String ^ word in words)
    {
        if (!String::IsNullOrEmpty(word) && word[0] == bukva)
        {
            mWords->Add(word);
        }
    }

    if (mWords->Count > 0)
    {
        Console::WriteLine(L"«найден≥ слова:");
        for each (String ^ word in mWords)
        {
            Console::WriteLine(word);
        }
    }
    else
    {
        Console::WriteLine(L"—лова, що починаютьс€ на '{0}', не знайдено.", bukva);
    }

    return 0;
}