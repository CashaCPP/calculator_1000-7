#ifndef MATESH_H_
	#define MATESH_H_
	#include <stdio.h>
	#include <cmath>
	#include <random>
	#include <functional>
	#include <vector>
	#include <chrono>
	#include <thread>
#endif
#include "pricole.h"

double factorial(double namber)
{
	if ((int)namber <= 1)
	{
		return 1;
	}
	else
	{
		return namber * factorial(namber - 1);
	}
}

void plus(double* namber1, double* namber2)
{
	printf("%lf", "%c", "%lf", "%c", "%lf", "%c", (int)*namber1, '+', (int)*namber2, '=', *namber1 + *namber2, '\n');
//	printf("%lf", *namber2);
}

void minus(double* namber1, double* namber2)
{
	if ((*namber1 - *namber2) == 993)
	{
		int ugodai;
		int ugodai1;
		int random;
		srand(time(0));

		printf("Ну чтож дед инсайт выбери число от 1 до 4:");

		ugodai1 = getch();
		switch (ugodai1)
		{
		case 49:
			printf("1\n");
			ugodai = 1;
		break;
		case 50:
			printf("2\n");
			ugodai = 2;
		break;
		case 51:
			printf("3\n");
			ugodai = 3;
		break;
		case 52:
			printf("4\n");
			ugodai = 4;
		break;
		default:
			break;
		}

		random = 1 + (rand() % 4);
		if (ugodai == random)
		{
			printf("Молодец угодал, выбери что ты хочешь\n1. Бесконечно 1000-7?\n2. Шутки дед инсайда?\n3. Текст песни дед инсада?\n4. Перезагрузка устройства.\nВаш выбор:");
			ugodai1 = getch();
			switch (ugodai1)
			{
			case 49:
				printf("1\n");
				ugodai = 1;
			break;
			case 50:
				printf("2\n");
				ugodai = 2;
			break;
			case 51:
				printf("3\n");
				ugodai = 3;
			break;
			case 52:
				printf("4\n");
				ugodai = 4;
			break;
			default:
				break;
			}

			switch (ugodai)
			{
			case(1):
				r1000m7();
			break;
			case(2):
				shut(random);
			break;
			case(3):
				text();
			break;
			case(4):
				nopc();
			break;
			}
		}
		else
		{
			printf("Ну чтож не угодал, подожди 6 секунд и увидишь что будет(небойся).\n");
			
			for (int i = 6; i >= 1; i--)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			}

			switch (random)
			{
			case(1):
				r1000m7();
			break;
			case(2):
				shut(random);
			break;
			case(3):
				text();
			break;
			case(4):
				nopc();
			break;
			}
		}
	}
	else
	{
		printf("%lf", "%c", "%lf", "%c", "%lf", "%c", (int)*namber1, '-', (int)*namber2, '=', *namber1 - *namber2, '\n');
	}
}

void umnoh(double* namber1, double* namber2)
{
	printf("%lf", "%c", "%lf", "%c", "%lf", "%c", (int)*namber1, '*', (int)*namber2, '=', *namber1 * *namber2, '\n');
}

void delit(double* namber1, double* namber2)
{
	printf("%lf", "%c", "%lf", "%c", "%lf", "%c", (int)*namber1, '/', (int)*namber2, '=', *namber1 / *namber2, '\n');
}

void step(double* namber1, double* namber2)
{
	printf("%lf", "%c", "%lf", "%c", "%lf", "%c", (int)*namber1, '^', (int)*namber2, '=', pow(*namber1, *namber2), '\n');
}

void koren(double* namber)
{
	printf("%lf", "%c", sqrt(*namber), '\n');
}

void tang(double* namber)
{
	printf("%lf", "%c", tan(*namber), '\n');
}

void inchs(double* namber)
{
	printf("%lf", "%c", log(*namber), '\n');
}

void lg(double* namber)
{
	printf("%lf", "%c", log10(*namber), '\n');
}

void sin2(double* namber)
{
	printf("%lf", "%c", sin(*namber), '\n');
}

void cos2(double* namber)
{
	printf("%lf", "%c", cos(*namber), '\n');
}

void arcs(double* namber)
{
	printf("%lf", "%c", asin(*namber), '\n');
}

void arcc(double* namber)
{
	printf("%lf", "%c", acos(*namber), '\n');
}

void arct(double* namber)
{
	printf("%lf", "%c", atan(*namber), '\n');
}

void arcg(double* namber1, double* namber2)
{
	printf("%lf", "%c", atan2(*namber1, *namber2), '\n');
}