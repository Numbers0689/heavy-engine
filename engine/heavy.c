#include<stdio.h>
#include<stdlib.h>
#include "heavy.h"

int main()
{
    AllInit();

    U64 play = 0ULL;

    play |= (1ULL << SQ64(E4));
    play |= (1ULL << SQ64(E3));
    play |= (1ULL << SQ64(E2));

    printf("Start: \n\n");
    printBitBoard(play);

    int count = CNT(play);
    printf("Count: %d\n", count);

    int index = POP(&play);
    printf("index: %d\n", index);
    printBitBoard(play);
    count = CNT(play);
    printf("Count: %d\n", count);
    return 0;
}