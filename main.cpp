/*
 * File: main.cpp
 * Description: Demonstrates the BigInteger Class
 * Developer: Jose Ceballos
 * Email: josec5064@student.vvc.edu
 * */
#include <iostream>
#include "BigInteger.h" 
#include <string>


int main()
{

    BigInteger num1("100");

    BigInteger num2("12");

    std::cout << num1 + num2 << std::endl;
    
    return 0;
}
