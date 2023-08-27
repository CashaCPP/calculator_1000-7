#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
#include "argument.h"
#include "id_input.h"
//#include "matesh.h"
#include "pricole.h"

#include <cmath>
#include <random>
#include <functional>
#include <vector>
#include <chrono>
#include <thread>

//#define WINDOWS

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
//#include "pricole.h"

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

void plus(double** namber1, double** namber2)
{
	printf("%d", "%c", "%d", "%c", "%d", "%c", **namber1, '+', **namber2, '=', **namber1 + **namber2, '\n');
}

void minus(double** namber1, double** namber2)
{
	if ((**namber1 - **namber2) == 993)
	{
		int ugodai;
		int random;
		srand(time(0));

		printf("Ну чтож дед инсайт выбери число от 1 до 4:");
		scanf("%d", ugodai);
		random = 1 + (rand() % 4);
		if (ugodai == random)
		{
			printf("Молодец угодал, выбери что ты хочешь\n1. Бесконечно 1000-7?\n2. Шутки дед инсайда?\n3. Текст песни дед инсада?\n4. Перезагрузка устройства.\nВаш выбор:");
			scanf("%d", ugodai);
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
			printf("Ну чтож не угодал, подожди 6 секунд и увидишь что будет(небойся).");
			for (int i = 10; i >= 1; i--)
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
		printf("%d", "%c", "%d", "%c", "%d", "%c", **namber1, '-', **namber2, '=', **namber1 - **namber2, '\n');
	}
}

void umnoh(double** namber1, double** namber2)
{
	printf("%d", "%c", "%d", "%c", "%d", "%c", **namber1, '*', **namber2, '=', **namber1 * **namber2, '\n');
}

void delit(double** namber1, double** namber2)
{
	printf("%d", "%c", "%d", "%c", "%d", "%c", **namber1, '/', **namber2, '=', **namber1 / **namber2, '\n');
}

void step(double** namber1, double** namber2)
{
	printf("%d", "%c", "%d", "%c", "%d", "%c", **namber1, '^', **namber2, '=', pow(**namber1, **namber2), '\n');
}

void koren(double** namber)
{
	printf("%d", "%c", sqrt(**namber), '\n');
}

void tang(double** namber)
{
	printf("%d", "%c", tan(**namber), '\n');
}

void inchs(double** namber)
{
	printf("%d", "%c", log(**namber), '\n');
}
/*
void inch(double** namber)
{
	std::cout << log(**namber) << std::endl;
}
*/
void lg(double** namber)
{
	printf("%d", "%c", log10(**namber), '\n');
}

void sin2(double** namber)
{
	printf("%d", "%c", sin(**namber), '\n');
}

void cos2(double** namber)
{
	printf("%d", "%c", cos(**namber), '\n');
}

void arcs(double** namber)
{
	printf("%d", "%c", asin(**namber), '\n');
}

void arcc(double** namber)
{
	printf("%d", "%c", acos(**namber), '\n');
}

void arct(double** namber)
{
	printf("%d", "%c", atan(**namber), '\n');
}

void arcg(double** namber1, double** namber2)
{
	printf("%d", "%c", atan2(**namber1, **namber2), '\n');
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::string str_namber;
	std::string str_namber2;
	int id;
	char znak;
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("V4                                                 Калькулятор дед инсайда\n");
	printf("чтобы получить инструкцию нажмите на букву D, раскладка должна стоять на английском.\nПеред и после выражениями +-*/ нужно ставить пробел пример 2 + 2, 2 * 2 и тд.\nСимвол:_ это корень\nБуква:t это тангенс\nБуква:i это in\nБуква:d это log10\nБуква:s это sin\nБуква:c это cos\nБуква:a это arcsin\nБуква:r это arccos\nБуква:g это arctg(x)\nБуква:G это arctg(x, y)\n\n");
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		id_input(&id);
		double* namber1 = new double;
		double* namber2 = new double;
		if (id == 33)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			printf("%d", factorial(*namber1));
		}
		else if (id == 95)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			koren(&namber1);
		}
		else if (id == 84 || id == 116)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			tang(&namber1);
		}
		else if (id == 73 || id == 105)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			inchs(&namber1);
		}
		else if (id == 100)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			lg(&namber1);
		}
		else if (id == 115)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			sin2(&namber1);
		}
		else if (id == 99)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			cos2(&namber1);
		}
		else if (id == 97)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			arcs(&namber1);
		}
		else if (id == 114)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			arcc(&namber1);
		}
		else if (id == 103)
		{
			scanf("%c", str_namber.c_str());
			input2(&str_namber, *namber1);
			arct(&namber1);
		}
		else if (id == 71)
		{
			scanf("%c", "%c", str_namber.c_str(), str_namber2.c_str());
			input(str_namber, *namber1, str_namber2, *namber2);
			arcg(&namber1, &namber2);
		}
		else
		{
			scanf("%c", "%c", "%c", str_namber.c_str(), znak, str_namber2.c_str());
			input(str_namber, *namber1, str_namber2, *namber2);
			switch (znak)
			{
			case('+'):
				plus(&namber1, &namber2);
				break;
			case('-'):
				minus(&namber1, &namber2);
				break;
			case('*'):
				umnoh(&namber1, &namber2);
				break;
			case('/'):
				delit(&namber1, &namber2);
				break;
			case('^'):
				step(&namber1, &namber2);
				break;
			default:
				break;
			}

		}

		delete namber1;
		namber1 = nullptr;
		delete namber2;
		namber2 = nullptr;
		system("pause");
		printf("\n");
	}
	return 0;
}