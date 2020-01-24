#include <iostream>
#include <string>

std::string Fibonacci(int i);

int main()
{
	int i;
	char repeat = 'y';

	while (repeat == 'Y' || repeat == 'y')
	{
		std::cout << "Type the nth position of the Fibonacci Sequence you would like to go to: ";
		std::cin >> i;
		std::cout << Fibonacci(i);

		std::cout << "\n\nWould you like to do find a different nth position (Y/N): ";
		std::cin >> repeat;
	}
	
	return 0;
}

std::string Fibonacci(int i)
{
	int c = 0;
	int num1 = 0;
	int num2 = 1;
	int result;
	std::string sequence = std::to_string(num1) + ", " + std::to_string(num2);

	while (c < i)
	{
		if (i == 0) return "No data returned. Please enter the nth position you want to go to for the Fibonacci Sequence.";
		else if (i == 1) return std::to_string(num1);
		else if (i == 2) return sequence;
		else
		{
			result = num1 + num2;
			num1 = num2;
			num2 = result;
			sequence = sequence + ", " + std::to_string(result);
			c++;
		}
	}

	return sequence;
}