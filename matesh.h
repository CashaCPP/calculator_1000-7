#ifndef MATESH_H_
	#define MATESH_H_
	#include <iostream>
	#include <cmath>
	#include <random>
	#include <functional>
	#include <vector>
	#include <chrono>
	#include <thread>
	#include "pricole.h"
#endif

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
	std::cout << **namber1 << "+" << **namber2 << "=" << **namber1 + **namber2 << std::endl;
}

void minus(double** namber1, double** namber2)
{
	if ((**namber1 - **namber2) == 993)
	{
		int ugodai;
		int random;
		srand(time(0));

		std::cout << "�� ���� ��� ������ ������ ����� �� 1 �� 4:";
		std::cin >> ugodai;
		random = 1 + (rand() % 4);
		if (ugodai == random)
		{
			std::cout << "������� ������, ������ ��� �� ������\n1. ���������� 1000-7?\n2. ����� ��� �������?\n3. ����� ����� ��� ������?\n4. ������������ ����������.\n��� �����:";
			std::cin >> ugodai;
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
			std::cout << "�� ���� �� ������, ������� 6 ������ � ������� ��� �����(�������)." << std::endl;
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
		std::cout << **namber1 << "-" << **namber2 << "=" << **namber1 - **namber2 << std::endl;
	}
}

void umnoh(double** namber1, double** namber2)
{
	std::cout << **namber1 << "*" << **namber2 << "=" << **namber1 * **namber2 << std::endl;
}

void delit(double** namber1, double** namber2)
{
	std::cout << **namber1 << "/" << **namber2 << "=" << **namber1 / **namber2 << std::endl;
}

void step(double** namber1, double** namber2)
{
	std::cout << **namber1 << "^" << **namber2 << "=" << pow(**namber1, **namber2) << std::endl;
}

void koren(double** namber)
{
	std::cout << sqrt(**namber) << std::endl;
}

void tang(double** namber)
{
	std::cout << tan(**namber) << std::endl;
}

void inchs(double** namber)
{
	std::cout << log(**namber) << std::endl;
}
/*
void inch(double** namber)
{
	std::cout << log(**namber) << std::endl;
}
*/
void lg(double** namber)
{
	std::cout << log10(**namber) << std::endl;
}

void sin2(double** namber)
{
	std::cout << sin(**namber) << std::endl;
}

void cos2(double** namber)
{
	std::cout << cos(**namber) << std::endl;
}

void arcs(double** namber)
{
	std::cout << asin(**namber) << std::endl;
}

void arcc(double** namber)
{
	std::cout << acos(**namber) << std::endl;
}

void arct(double** namber)
{
	std::cout << atan(**namber) << std::endl;
}

void arcg(double** namber1, double** namber2)
{
	std::cout << atan2(**namber1, **namber2) << std::endl;
}