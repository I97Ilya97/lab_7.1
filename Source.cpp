#include <iostream> 
#include <string> 
#include <locale> 


bool polindrom(std::string str)
{

	int len = str.length();
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "rus");
	std::string str;
	std::cout <<"Чтобы выйти введи exit" << std::endl;
	do
	{
		std::cout << "Введи строку: ";
		getline(std::cin, str);
		if (str == "exit") break;
		if (polindrom(str))
		{
			std::cout << "Строка является полидромом!" << std::endl;
		}
		else
		{
			std::cout << "Строка не является полидромом!" << std::endl;
		}
	} while (true);
	system("pause");
	return 0;
}
