#include <cstdio>
#include <cctype>  // For isprint function

int main() 
{
    printf("ASCII Code Table\n");
    printf("------------------------------------------\n");
    printf("Char | ASCII\n");
    printf("------------------------------------------\n");

    for (int i = 0; i < 128; ++i) 
    {
        printf("%c | %d\n", isprint(i) ? i : ' ', i); 
    }

    return 0;
}
