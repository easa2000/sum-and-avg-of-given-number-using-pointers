#include<stdio.h>
void main()
{
    int m, *pm = &m;
    int n, *pn = &n;
    int range;
    int sum = 0, *psum = &sum;
    float avg, *pavg = &avg;
    printf("\n Enter the starting and ending limit of the numbers to be summed: \n");
    scanf("%d %d",pm, pn);
    range = n - m;
    while(*pm <= *pn)
    {
        *psum = *psum + *pm;
        *pm = *pm + 1;
    }
    printf("\n Sum of numbers = %d",*psum);
    *pavg = (float)*psum / range;
    printf("\n Average of numbers = %.2f",*pavg);
}
