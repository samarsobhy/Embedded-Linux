
#include <iostream>
int main ()
{
    int ang1 = 0;
    int ang2 = 0;
    int ang3 = 0; 
    int max = 0;

    std::cout <<"Enter first angle ";
    std::cin >> ang1;
    std::cout <<"Enter second angle ";
    std::cin >> ang2;
    std::cout <<"Enter third angle ";
    std::cin >> ang3;
    
    if (ang1 <= 0 || ang2 <=0 || ang3<=0)
    {
        std::cout <<"The angles should be greater than 0 " <<std::endl;
    }
    else if (ang1 >= 180 || ang2 >= 180 || ang3 >= 180)
    { 
        std::cout <<"The angles should be smaller than 180 " <<std::endl;
    }
    else
    {
        if (ang1 + ang2 + ang3 == 180)
        {
            // std::cout <<"The angles are from valid triangle " <<std::endl;
            if (ang1 == 90 || ang2 == 90 || ang3 == 90)
            {
                std::cout <<"It is a right angle triangle " <<std::endl;
                // Check for impractical or nearly degenerate triangles
                if (ang1 < 10 || ang2 < 10 || ang3 < 10)  
                {
                    std::cout << "Warning: The triangle is highly skewed or nearly degenerate.\n";
                }
            }
            else
            {
                std::cout <<"It is not a right angle triangle " <<std::endl;
            }
        }
        else
        {
            std::cout <<"The angles are not from valid triangle " <<std::endl;
        }
    }
        
    return 0;
}