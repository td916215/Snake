#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Prompt user for the length of the snake.
    printf("Enter the length of the snake: ");

    // Get length input from user.
    int snakeLength;
    scanf("%d", &snakeLength);

    // Start building snake with tail.
    printf("***");

    // Build the snake body.
    for (int i = 0; i < snakeLength; i++)
    {
            printf("=");
    }

    // Finish snake with head.
    printf("<:>~");

    //printf("Hello world!\n");
    return 0;
}
