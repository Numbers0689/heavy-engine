#include<stdio.h>
#include "heavy.h"

int main()
{
    AllInit();

    U64 play = 0ULL;

    printf("Start: \n\n");
    printBitBoard(play);

    play |= (1ULL << SQ64(E4));
    printf("Start: \n\n");
    printBitBoard(play);
    return 0;
}