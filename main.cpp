#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
#include "argument.cpp"
#include "id_input.cpp"
#include "matesh.cpp"
#include "pricole.cpp"
#include "document_instruc.cpp"


// 174!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



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
		double namber1;
		double namber2;
		int text1;
		int text2;
		str_namber.clear();
		str_namber2.clear();
		if (id == 33)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			input2(&str_namber, &namber1);
			printf("%lf", factorial(namber1));
		}
		else if (id == 95)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n');
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			input2(&str_namber, &namber1);
			koren(&namber1);
		}
		else if (id == 84 || id == 116)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			input2(&str_namber, &namber1);
			tang(&namber1);
		}
		else if (id == 73 || id == 105)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			inchs(&namber1);
		}
		else if (id == 100)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			lg(&namber1);
		}
		else if (id == 115)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			sin2(&namber1);
		}
		else if (id == 99)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			cos2(&namber1);
		}
		else if (id == 97)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			arcs(&namber1);
		}
		else if (id == 114)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			arcc(&namber1);
		}
		else if (id == 103)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while (text1 != '\n')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			input2(&str_namber, &namber1);
			arct(&namber1);
		}
		else if (id == 71)
		{
			text1 = getchar();
			str_namber.push_back(text1);
			while(text1 != ' ')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}

			text2 = getchar();
			str_namber2.push_back(text2);
			while(text2 != '\n')
			{
				text2 = getchar();
				str_namber2.push_back(text2);
			}

			input(str_namber, &namber1, str_namber2, &namber2);
			arcg(&namber1, &namber2);
		}
		else
		{
//znak
			int znak1;

			text1 = getchar();
			str_namber.push_back(text1);
			while(text1 != ' ')
			{
				text1 = getchar();
				str_namber.push_back(text1);
			}
			
			znak1 = getchar();
			znak = znak1;

			while(znak1 != ' ')
				znak1 = getchar();
			

			text2 = getchar();
			str_namber2.push_back(text2);
			while(text2 != '\n')
			{
				text2 = getchar();
				str_namber2.push_back(text2);
			}
			
			input(str_namber, &namber1, str_namber2, &namber2);
			switch (znak)
			{
			case('+'):
				plus(&namber1, &namber2);
//				printf("%lf", "%c", "%lf", "%c", "%lf", "%c", (int)namber1, '+', (int)namber2, '=', namber1 + namber2, '\n');
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

		//delete namber1;
		//namber1 = nullptr;
		//delete namber2;
		//namber2 = nullptr;
//		system("pause");
		printf("\n");
		printf("\n");
	}
	return 0;
}