/* 
 * File: BigInteger.cpp
 * Description: Implements member functions of BigInteger class
 * Developer: Jose Ceballos
 * Email: Josec5064@student.vvc.edu
 * */
#include "BigInteger.h" 


BigInteger::BigInteger()
{

}

//Reads a seq of digits and stores them in vector digits
BigInteger::BigInteger(std::string values)
{

   // Reading the string values into the vector 
   for(int i =0; i < values.length(); i++)
   {
       //Stores each digit from the values string in the char vector
       digits.push_back(values[i]); 
   }
}

int BigInteger::getSize() const
{
    return digits.size();
}

//Tells me if this BigInteger larger in Size than the other BigInteger
bool BigInteger::isLarger(const BigInteger& other) const
{
    //Returns true if this BigInteger is larger than the other 
    if(getSize() >= other.getSize())
    {
        return true;
    }

    //Else 
    return false;
}

//Friend Function
BigInteger operator+( const BigInteger &left, const BigInteger& right)
{
    //Holds answer
    BigInteger answer;
    int carry = 0; //holds carry number
    //This will test for the largest size between left and right 
    if(left.isLarger(right))
    {
        //If left is larger than use leftSize in for loop
        for(int i = 0; i < left.getSize(); i++)
        {
            //Ensures we dont go out of bound
            if(i < right.getSize())
            {
                //-'0' converts the chars into a integer
                int calculation = (left.digits[i] -'0'  + right.digits[i] - '0' + carry);
                carry = calculation / 10; //Computes carry
                calculation %= 10; //Computes Answer
                answer.digits.push_back(calculation + '0'); //Storing answer
            }
            //This else statement will run once all the right digits have been inputed 
            else
            {
                int calculation = left.digits[i] - '0' + carry;
                carry = calculation/10; 
                calculation %=10; //Computes answer
                answer.digits.push_back(calculation + '0' );
            }
        }
        answer.digits.push_back(carry + '0'); //Pushes the last carry of the calculation 
    }
    else if(!(left.isLarger(right)))
    {
        for(int i = 0; i < right.getSize();i++)
        {

        }
    }
    else 
    {
        answer.digits.push_back('0');
    }
    return answer;
}

//Friend Function
BigInteger operator-(const BigInteger& left, const BigInteger& right)
{

}

//Friend Function
BigInteger operator*(const BigInteger &left, const BigInteger &right)
{

}

//Friend Function
std::ostream& operator<<(std::ostream& out, const BigInteger & right)
{
    //Print the vector of char
    for(int i = 0; i < right.digits.size(); i++)
    {
        //Storing all the chars in the out ostream object 
        out << right.digits[i];
    }
    return out; //Returning the ostream object so we can chain multiple ostream 
}


