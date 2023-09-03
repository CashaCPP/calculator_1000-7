//#pragma once


#ifndef IDINPUT_H_
    #ifdef WINDOWS
        //#include <conio.h>
    #else
        //#include <ncurses.h>
        #include <termios.h>
        #include <unistd.h>
    #endif
    #include "document_instruc.h"
    #include <stdlib.h>
#endif

void id_input(int* id);
int getch( );