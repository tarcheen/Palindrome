/*
Developer: Hamed Mirlohi
Date: 09/11/2019

 
In this program we are checking whether a number is palindrome or not.
Logic is to see if the number matches its reverse
*/

#include <iostream>

// reversing a number
int reverse_number(int number)
{
    int result = 0;
    int remain;
    while(number > 0)
    {
        remain = number % 10;
        result = result * 10 + remain;
        number /= 10;
    }
    return result;
}

inline bool isPalindrome(int number)
{
    return (reverse_number(number) == number) ? true : false;
}


int main(void)
{
    std::cout << "This program checks whether a certain number is palindrome....\n";
    int number;

    while(true)
    {
        std::cout << "Please enter a number: ";
        std::cin >> number;
        if( isPalindrome(number) )
            std::cout<< "\n" << number << " is Palindrome\n";
        else
            std::cout<< number << " is not Palindrome\n";
        if(number == 999)
            break;
    }

    
}

