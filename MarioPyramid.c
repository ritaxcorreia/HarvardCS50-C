#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        // get the integer height from the user
        height = get_int("Height: \n");
    }
    // validate that the height is [1-8]
    while (height < 1 || height > 8);

    //printf("%i \n", height);

    // This part builds a right-aligned pyramid, only

    // the 1st for loop starts at 0, runs for number of times as per the height value (<9) and increments 1 line
    for (int x = 0; x < height; x++)
    {
        // the 2nd loop prints the columns
        for (int y = 0; y < height; y++)
        {
            // this condition prints # when y (column) is less than or equal to X (row) for the rows, when it's 0 prints SPACE and else prints an #, places it in row0 and column3 prints an #

            if (y <= x)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
        }
    }
}