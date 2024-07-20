#include <iostream>

int main() 
{
    char letter = 0;

    std::cout <<"Enter a letter ";
    std::cin.get(letter); //to capture all characters, including whitespace (e.g., spaces, tabs, newlines)

    if (std::isalpha(letter)) 
    {
        //std::cout << "The input is a letter"<<std::endl; 
        if ( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'||
             letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' )
        {
            std::cout << letter <<" is a vowel letter" <<std::endl;
        }
        else
        {
            std::cout << letter <<" is not a vowel letter" <<std::endl;
        }
    } 
    else 
    {
        if (std::isspace(letter))
        {
            std::cout << "The input is a whitespace character.\n";
        }
        else
        {
            std::cout << letter <<" is not a letter" <<std::endl;
        }
    }

    return 0;
}