/* Problem 006: Sum square difference
 * By: Jaime Portas Garcia
 * 04.03.2016
 */

#include "problem006.h"


namespace problem006
{
	int GetSumOfSquares(int maxNumber)
	{
		int sum = 0;
		for (int i = 1; i <= maxNumber; i++)		
			sum += i*i;
		return sum;
	}

	int GetSquareOfSum(int maxNumber)
	{
		int sum = 0;
		for (int i = 1; i <= maxNumber; i++)
			sum += i;
		return sum*sum;
	}

	int getAnswer(void)
	{
		int maxNumber = 100;
		return (GetSquareOfSum(maxNumber) - GetSumOfSquares(maxNumber));
	}
}
