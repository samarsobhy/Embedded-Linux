#include <iostream>

int main() 
{
    std::string input;
    int sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> input;
    
    for (char ch : input)
    {
        if (std::isdigit(ch))
        {
            sum += ch - '0' ; //convert it to the corresponding integer value by subtracting the ASCII value of '0' (which is 48) from the ASCII value of ch.
                              //If ch is '1', then ch - '0' is 49 - 48 which equals 1.
        }
        else
        {
            std::cout <<"Warning: Non-digit characters were ignored"<<std::endl;
        }
    }   
    
    std::cout <<"The sum of digits of "<<input<<" is "<<sum<<std::endl;
   
    return 0;
}
