#include <stdio.h>

#define line printf("-------------------------\n");

void calSquareArea()
{
    double widths, longs, bases, highs;
    double areaSquare, areaTriangle;

    printf("Pic Square.1\n");
    printf("Input widths : ");
    scanf("%lf", &widths);
    printf("Input longs : ");
    scanf("%lf", &longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line
}

void calTriangArea()
{
    double bases, highs;
    double areaTriangle;

    printf("Pic Square.1\n");
    printf("Input bases : ");
    scanf("%lf", &bases);
    printf("Input highs : ");
    scanf("%lf", &highs);
    areaTriangle = bases * highs;
    printf("Area square is : %.2lf\n", areaTriangle);
    line
}


void main()
{
    int i;

    line
    printf("    SHAPE AREA\n");
    line

    for( i = 1; i <= 2; i = i+1)
    {
        calSquareArea();
    }
    for( i = 1; i <= 2; i = i+1)
    {
        calTriangArea();
    }

}