/* Problem 007: 10001st prime
 * By: Jaime Portas Garcia
 * 04.03.2016
 */

#include "problem007.h"
#include "utils.h"

namespace problem007
{
	int GetPrimeNumber(int pos)
	{
		int counter = 1;
		int number = 3;
		while (true)
		{
			if (utils::isPrime(static_cast<long long>(number)))
				counter++;
			if (counter == pos)
				return number;
			number += 2;
		}
	}

	int getAnswer(void)
	{
		return GetPrimeNumber(10001);
	}
}
