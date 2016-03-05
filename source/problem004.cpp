/* Problem 004: Largest palindrome product
 * By: Jaime Portas Garcia
 * 03.03.2016
 */

#include "problem004.h"
#include "utils.h"


namespace problem004
{
	int getAnswer(void)
	{
		int product;
		int result = 0;

		for (int i = 999; i > 99; i--)
		{
			for (int j = 999; j > 99; j--)
			{
				product = i*j;
				if (utils::isPalindrome(product))
					if (product > result)
						result = product;
			}
		}

		return result;
	}
}
