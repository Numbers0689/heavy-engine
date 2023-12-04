#include "heavy.h"


U64 GeneratePosKey(const STRUCT_BOARD *pos) {

    int sq = 0;
    int piece = EMPTY;
    U64 finalKey = 0;

    //pieces
    for (sq = 0; sq < BOARD_SQ_NUM; ++sq)
    {
        piece = pos->pieces[sq];
        if(piece != NO_SQ && piece != EMPTY)
        {
            ASSERT(piece >= wP && piece <= bK);
            finalKey ^= pieceKeys[piece][sq];
        }
    }

    if(pos -> side == WHITE)
    {
        finalKey ^= sideKey;
    }
    
    if(pos -> enPas != NO_SQ)
    {
        ASSERT(pos -> enPas >= 0 && pos -> enPas < BOARD_SQ_NUM);
        finalKey ^= pieceKeys[EMPTY][pos->enPas];
    }

    ASSERT(pos->castlePerm >= 0 && pos->castlePerm <= 15);

    finalKey ^= castleKeys[pos->castlePerm];

    return finalKey;
}