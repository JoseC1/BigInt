/*
 * File: BigInteger.h
 * Description: Declares member functions and member variables of BigInteger Class
 * Developer: Jose Ceballos
 * Email: Josec5064@student.vvc.edu
 * */

#ifndef BIG_INTEGER_H
#define BIG_INTEGER_H

#include <string>
#include <vector>
#include <iostream>


class BigInteger
{
    public:
        //Default Constructor
        BigInteger();
        //string will hold a seq of digits 
        BigInteger(std::string values);
        
        //Gets the Size of the digits vector
        int getSize() const;

        //Tells me if this->BigInteger is larger in SIZE than the other BigInteger
        bool isLarger(const BigInteger& other) const;
        
        
        
        friend BigInteger operator+( const BigInteger &left, const BigInteger& right); 

        friend BigInteger operator-(const BigInteger &left, const BigInteger& right); 
        friend BigInteger operator*( const BigInteger & left, const BigInteger& right);

        friend std::ostream& operator<<(std::ostream& out, const BigInteger & right);
    private:
        //Vector will hold all the digits as char
        std::vector<char> digits;
};



#endif
