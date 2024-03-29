/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 19:50:36
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 19:52:03
 * @FilePath: \cppPrimer\src\ch03\ex3_40.cpp
 * @Description:Not me write.
 * Write a program to define two character arrays initialized
 * from string literals. Now define a third character array to hold the
 * concatenation of the two arrays. Use `strcpy` and `strcat` to copy the two
 * arrays into the third.
 */
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const char cstr1[] = "Hello";
    const char cstr2[] = "world!";

    size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char* cstr3 = new char[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
    delete[] cstr3;
}
