#include <iostream>
#include <iomanip>

int main() 
{
    int num = 0 ;
    int start = 0 ;
    int end = 0 ;

    std::cout << "Enter the integer that you want to display its multiplication table" <<std::endl;
    std::cin >> num;
    std::cout << "Enter the start of multiplication table" <<std::endl;
    std::cin >> start;
    std::cout << "Enter the end of multiplication table" <<std::endl;
    std::cin >> end;

    if (start > end)
    {
        std::cout << "The end must be bigger than the start" <<std::endl;
    }
    else
    {
        for (int i = start; i <= end; i++) 
        {
            printf("%d * %d = %d\n", num , i , num*i); 
        }
    }

    return 0;
}