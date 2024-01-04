#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please Use Lower Case Or Intergers durring test!\n");
    char r = get_char("Are you ready for the test y/n ");

    if (r == 'n')
    {
        printf("Take Your Time To Prepare ");
    } 
    else {
        printf("Lets Begin! ");
    }
}