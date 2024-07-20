#include <iostream>

int main ()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0; 
    int max = 0;

    std::cout <<"Enter first number ";
    std::cin >> num1;
    std::cout <<"Enter second number ";
    std::cin >> num2;
    std::cout <<"Enter third number ";
    std::cin >> num3;
    
    if (num1 > num2)
    {
        max = num1;
    }
    else if (num2 > num3)
    {
        max = num2;
    } 
    else if (num1 > num3) 
    {
        max = num1;
    }
    else
    {
        max = num3;
    }
    
    std::cout <<"The maximum number between three values is "<< max <<std::endl;
    
    return 0;
}
