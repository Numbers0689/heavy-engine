#include<stdio.h>
#include "heavy.h"

int main()
{
    AllInit();

    for(int index = 0; index < BOARD_SQ_NUM; ++index)
    {
        if(index%10==0) printf("\n");
        printf("%5d", Sq120ToSq64[index]);
    }

    printf("\n");

    for(int index = 0; index < 64; ++index)
    {
        if(index%8==0) printf("\n");
        printf("%5d", Sq64ToSq120[index]);
    }

    printf("\n");

    return 0;
}