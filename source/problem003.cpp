/* Problem 003: Largest prime factor
 * By: Jaime Portas Garcia
 * 03.03.2016
 */

#include "problem003.h"
//#include <algorithm>
//#include <numeric>
#include "utils.h"


namespace problem003
{
	long factorize(long long number)
	{
		if ((number % 2) == 0)
			return 2;
		for (long i = 3; i < number; i+=2)
			if (utils::isPrime(i))
				if ((number % i) == 0)
					return i;
		return 0;
	}


	long getAnswer(void)
	{
		long long num = 600851475143;
		long primeNum;
		std::vector<long> primesList;

		for (long i = 0; i < num; i++)
		{
			primeNum = factorize(num);
			if (primeNum != 0)
			{
				//number can be factorized
				primesList.push_back(primeNum);
				num /= primeNum;
				i = 0;
			}
			else
			{
				//number cant be factorized
				primesList.push_back(static_cast<long>(num));
				break;
			}
		}

		return primesList.back();
	}
}
