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

bool isPalindrome(int number)
{
    return (reverse_number(number) == number) ? true : false;
}


int main(void)
{
    int number ;
    
    std::cout<<"enter number :";
    std::cin>>number;
    
    if(isPalindrome(number))
        std::cout<< number << " is Palindrome\n";
    else
        std::cout<< number << " is not Palindrome\n";
    
}

