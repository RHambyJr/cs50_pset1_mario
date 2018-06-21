//Given user input, draws a pyramid with a gap in the middle to mimic super mario

#include <stdio.h>
#include <cs50.h>

void pyramid(int);

int main(void)
{
    //Holds user answer
    int prompt;

    //Asks user while user gives less than zero or more than 23 as answer
    do
    {
        prompt = get_int("Number: ");
    }
    while (prompt < 0 || prompt > 23);

    pyramid(prompt);
}

//buids pyramid
void pyramid(int numOfLines)
{
    int spaces = numOfLines - 1;
    int blocks = 1;

    //draw line
    for (int i = 0; i < numOfLines; i++)
    {
        //draw spaces if necessary
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        //draw left blocks
        for (int k = 0; k < blocks; k++)
        {
            printf("#");
        }

        //draw gap
        printf("  ");

        //draw right blocks
        for (int l = 0; l < blocks; l++)
        {
            printf("#");
        }

        //new line
        printf("\n");

        //increments
        spaces--;
        blocks++;
    }

}