//libraries needed to be used in this project//
#include <cs50.h>
#include <stdio.h>

//function used to get the necessary height and put in the response, using an int number
int get_height(void);// the ; is used to make a declaration of the said function//
int main(void)
{
    //here im making a way to get the height function with cs50 libraries
    //to get what i want in a more quick way than just using <stdio.h> library
    int height = get_height();

    for (int row = 1; row <= height; row++)
    {
        for(int space = 0; space < height - row; space++)
        {
            printf(" ");
        }
        for (int hash =0; hash < row; hash ++)
        {
            printf("#");
        }
            printf(" ");

        for (int hash = 0; hash < row; hash ++)
        {
            printf("#");

        }
        printf ("\n");
    }
}


//here im trying to put an do while loop to get the exact numbers i want to get and put in the height function
int get_height (void)
{
    int height;
    do
    {
        height = get_int ("put an height between 1 and 8 = ");
    }
    while (height < 1 || height >8);
    return height;
}

