#include <iostream>
#include "menu.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    Menu menu = Menu();
    menu.PrintLogin();
    menu.Print();
}
