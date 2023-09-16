#ifndef IDINPUT_H_
    #ifdef WINDOWS
    #else
        #include <termios.h>
        #include <unistd.h>
    #endif
    #include "document_instruc.h"
    #include <stdlib.h>
#endif

void id_input(int* id);
int getch( );