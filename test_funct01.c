#include <stdio.h>

#define line printf("-------------------------\n");

void main()
{
    double widths, longs, bases, highs;
    double areaSquare, areaTriangle;

    line
    printf("    SHAPE AREA\n");
    line

    printf("Pic Square.1\n");
    printf("Input widths : ");
    scanf("%lf", &widths);
    printf("Input longs : ");
    scanf("%lf", &longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line

    printf("Pic Square.2\n");
    printf("Input widths : ");
    scanf("%lf", &widths);
    printf("Input longs : ");
    scanf("%lf", &longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line
    
    printf("Pic Square.3\n");
    printf("Input widths : ");
    scanf("%lf", &widths);
    printf("Input longs : ");
    scanf("%lf", &longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line

    getch();
}