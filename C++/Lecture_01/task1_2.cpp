#include <iostream>
#include <iomanip>

int main() 
{
    std::cout << "ASCII Code Table\n";
    std::cout << "------------------------------------------\n";
    std::cout << "Char | ASCII\n";
    std::cout << "------------------------------------------\n";

    for (int i = 0; i < 128; ++i) 
    {
        // Alternative Approach
        if (i < 32 || i == 127) 
        { // Use a placeholder for non-printable characters -Some ASCII values (like 0-31)-
            std::cout << " " << " | " << std::setw(3) << i << std::endl;
        } 
        else
        {
            std::cout << static_cast<char>(i) << " | " << std::setw(3) << i << std::endl;
        }
    }


    return 0;
}