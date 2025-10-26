#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    // Using conditional statements 
    if (x > 0 && y > 0)
        printf("Point (%d, %d) lies in Quadrant I\n", x, y);

    else if (x < 0 && y > 0)
        printf("Point (%d, %d) lies in Quadrant II\n", x, y);

    else if (x < 0 && y < 0)
        printf("Point (%d, %d) lies in Quadrant III\n", x, y);

    else if (x > 0 && y < 0)
        printf("Point (%d, %d) lies in Quadrant IV\n", x, y);

    else if (x == 0 && y == 0)
        printf("Point (%d, %d) lies at the Origin\n", x, y);

    else if (x == 0)
        printf("Point (%d, %d) lies on the Y-axis\n", x, y);

    else if (y == 0)
        printf("Point (%d, %d) lies on the X-axis\n", x, y);

    else
        printf("Invalid input\n");

    return 0;
}
