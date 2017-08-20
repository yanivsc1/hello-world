#include <stdio.h>
#include "SPFIARGame.h"
#include "SPMainAux.h"

/**
 * Main -
 * Defines a new game, and then enters a game loop that finishes when user quits.
 * @return
 * 0 - when the game is over.
 */
int main()
{
    setbuf(stdout, NULL);
    int diff;
    SPFiarGame* spfr = NULL;
    int result = -2;
    while (result == -2)
    {
        diff = initialization();
        if(diff == -1)
        {
            printQuitMessage();
            return 0;
        }
        spfr = spFiarGameCreate(HISTORY_SIZE);
        spfr->currentPlayer = SP_FIAR_GAME_PLAYER_1_SYMBOL;
        result = Game(spfr, diff);
        spFiarGameDestroy(spfr);
    }

	return 0;
}

kaki
