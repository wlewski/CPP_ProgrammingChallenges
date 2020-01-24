#include <iostream>
#include <string>

void FizzBuzz();
void FizzBuzzRecursive(int i);

int main()
{
	std::cout << "While Loop FizzBuzz\n";
	FizzBuzz();

	std::cout << "\nRecursive FizzBuzz\n";
	FizzBuzzRecursive(1);
	return 0;
}

// Utilizing a While Loop
void FizzBuzz()
{
	int i = 1;
	std::string var;

	while (i < 101)
	{
		var = "";
		if (i % 3 == 0) var = "Fizz";
		if (i % 5 == 0) var = var + "Buzz";
		std::cout << i << " " << var << '\n';

		i++;
	}
}

// Utilizing a Recursive Function
void FizzBuzzRecursive(int i)
{
	std::string var = "";

	if (i < 101)
	{
		if (i % 3 == 0) var = "Fizz";
		if (i % 5 == 0) var = var + "Buzz";

		std::cout << i << " " << var << '\n';
		i++;
		FizzBuzzRecursive(i);
	}
}

