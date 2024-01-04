#include <cs50.h>
#include <stdio.h>
// Include this header for string comparison
#include <string.h> 

int main(void)
{
    int score = 0;

    printf("Please Use Lower Case Or Integers During Test!\n");
    char r = get_char("Are you ready for the test y/n ");

    if (r == 'n')
    {
        printf("Take Your Time To Prepare ");
    } 
    else 
    {
        printf("Let's Begin! ");

        printf("Question 1\n");
        string answer = get_string("What is the capital of Colorado? ");

        // Use strcmp for string comparison
        if (strcmp(answer, "denver") == 0)
        {
            score++;
            // Use %d for printing integers
            printf("Correct, Score: %d\n", score); 
        } 
        else 
        {
            printf("Incorrect, Score: %d\n", score);
        }

        printf("Question 2\n");
        string answer2 = get_string("What is the largest planet in our solar system? ");

        if (strcmp(answer2, "jupiter") == 0)
        {
            score++;
            printf("Correct, Score: %d\n", score);
        } 
        else 
        {
            printf("Incorrect, Score: %d\n", score);
        }

        printf("Question 3\n");
        int answer3 = get_int("How many countries are in the UN? ");

        if (answer3 == 193)
        {
            score++;
            printf("Correct, Score: %d\n", score);
        } 
        else 
        {
            printf("Incorrect, Score: %d\n", score);
        }


    }

    return 0;
}