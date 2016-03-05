/* Problem 005: Smallest multiple
 * By: Jaime Portas Garcia
 * 04.03.2016
 */

#include "problem005.h"


namespace problem005
{
	int GetCommonMultiple(int maxNumber)
	{
		int index = maxNumber;

		while(true)
		{
			for (int j = (maxNumber-1); j > 0; j--)
			{
				if ((index % j) != 0)
					break;
				if (j == 1)
					return index;
			}
			index += maxNumber;
		}
	}

	int getAnswer(void)
	{
		return GetCommonMultiple(20);
	}
}
