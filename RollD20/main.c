#include <stdio.h>
#include <stdlib.h>

int main()
{
    int face;
    srand(time(NULL));

    face = 1 + rand() % 20;

    if(face == 1){
        printf("Critical fail: %2d", face);
    }else if(face == 20){
        printf("Critical sucess: %2d", face);
    }else{
        printf("Face: %2d" ,face);
    }
    return 0;
}
