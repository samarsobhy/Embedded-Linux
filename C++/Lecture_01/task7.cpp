#include <iostream>
#include <string>
#include <bitset> // For converting binary to decimal

int main() 
{
    int choice;

    std::cout << "Choose conversion type:\n";
    std::cout << "1. Decimal to Binary\n";
    std::cout << "2. Binary to Decimal\n";
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        // Decimal to Binary
        std::cout << "Enter a decimal number: ";
        int decimalNumber;
        std::cin >> decimalNumber;
        if (!std::isdigit(decimalNumber))
        {
            std::cout << "Invalid input. Only non-negative integers are allowed." << std::endl;
        }
        else
        {
           std::cout << "Binary representation: " << std::bitset<32>(decimalNumber) << std::endl;
        }
    } 
    else if (choice == 2) 
    {
        // Binary to Decimal
        std::cout << "Enter a binary number: ";
        std::string binaryNumber;
        std::cin >> binaryNumber;
        int decimal = 0;
        int base = 1; // 2^0
        int is_decimalNumber =0;
        for (int i = binaryNumber.length() - 1; i >= 0; --i) 
        {
            if (binaryNumber[i] == '1') 
            {
                decimal += base;
            } 
            else if (binaryNumber[i] == '0') 
            {
                // Valid binary digit, do nothing
            } 
            else 
            {
                std::cout << "Invalid binary number. Only '0' and '1' are allowed" << std::endl;
                is_decimalNumber = -1; // Return -1 to indicate an error
               break;
           2 }
            base *= 2; // Move to the next bit
        }

        if (is_decimalNumber != -1) 
        {
            std::cout << "Decimal representation: " << decimal << std::endl;
        }
    } 
    else 
    {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
