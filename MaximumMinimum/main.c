#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);
int minimum(int x, int y, int z);
int main(void)
{

    int n1, n2, n3;
    printf("Enter with three numbers: \n");
    scanf("%d%d%d", &n1, &n2, &n3);


    printf("The maximum is: %d\n", maximum( n1, n2, n3));
    printf("The minimum is: %d", minumum( n1, n2, n3));
    return 0;

}

int maximum( int x, int y, int z)
{
    int max = x;

    if(y > max){
        max = y;
    }
    if(z > max){
        max = z;
    }
    return max;
}
int minumum( int x, int y, int z)
{
    int min = x;

    if(y < min){
        min = y;
    }
    if(z < min){
        min = z;
    }
    return min;
}
