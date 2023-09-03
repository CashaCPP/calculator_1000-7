#include "id_input.h"

int getch( ) {
   struct termios oldt,
   newt;
   int ch;
   tcgetattr( STDIN_FILENO, &oldt );
   newt = oldt;
   newt.c_lflag &= ~( ICANON | ECHO );
   tcsetattr( STDIN_FILENO, TCSANOW, &newt );
   ch = getchar();
   tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
   return ch;
}

void id_input(int* id)
{
#ifdef WINDOWS
	*id = _getch();
#endif

	//initscr();
	*id = getch();
	//endwin();
	
	switch (*id)
	{
	case(8):
		printf("\n");
		id_input(id);
		break;
	case(95):
		printf("_");
		break;
	case(68):
		instuct();
		id_input(id);
		break;
	case(208):
		instuct();
		id_input(id);
		break;
	case(33):
		printf("!");
		break;
	case(27):
		exit(0);
		break;
	case(32):
		printf("");
		break;
	case(40):
		printf("извините такой функции еще нетуб но я усердно работаю над этой функцией.");
		//initscr();
		*id = getch();
		//endwin();
		break;
	case(41):
		printf("извините такой функции еще нетуб но я усердно работаю над этой функцией.");
		//initscr();
		*id = getch();
		//endwin();
		break;
	case(48):
		printf("");
		break;
	case(49):
		printf("");
		break;
	case(50):
		printf("");
		break;
	case(51):
		printf("");
		break;
	case(52):
		printf("");
		break;
	case(53):
		printf("");
		break;
	case(54):
		printf("");
		break;
	case(55):
		printf("");
		break;
	case(56):
		printf("");
		break;
	case(57):
		printf("");
		break;
	case(84):
		printf("tg:");
		break;
	case(116):
		printf("tg:");
		break;
	case(73):
		printf("in:");
		break;
	case(105):
		printf("in:");
		break;
	case(100):
		printf("log10:");
		break;
	case(115):
		printf("sin:");
		break;
	case(99):
		printf("cos:");
		break;
	case(97):
		printf("arcsin:");
		break;
	case(114):
		printf("arccos:");
		break;
	case(103):
		printf("arctg(1):");
		break;
	case(71):
		printf("arctg(2):");
		break;
	default:
		printf("error");
		exit(0);
	}
}