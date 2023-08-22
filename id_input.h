//#pragma once


#ifndef IDINPUT_H_
    #ifdef WINDOWS
        //#include <conio.h>
    #else
        #include <ncurses.h>
    #endif
    #include "document_instruc.h"
#endif

void id_input(int* id);