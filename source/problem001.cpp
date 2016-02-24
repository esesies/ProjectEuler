/* Problem 1: Multiples of 3 and 5
 * By: Jaime Portas Garcia
 * 24.02.2016
 */

#include "problem001.h"
#include "utils.h"
#include <numeric>

namespace problem001
{

	std::vector<int> getMultiplesUnder(int numberUnder, std::vector<int> multiplesOf)
	{
		std::vector<int> multiples;

		//Loop 3 and 5
		for (std::vector<int>::iterator it = multiplesOf.begin(); it != multiplesOf.end(); it++)
		{
			//Loop from 3 (or 5) till numberUnder-1 (999)
			for (int i = *it; i < numberUnder; i++) 
			{
				//is it divisible by 3 (or 5)?
				if ((i % *it) == 0)
				{
					if (!utils::contains(multiples, i))
					{
						multiples.push_back(i);
					}
				}
			}
		}

		return multiples;
	}

	int getAnswer(void)
	{
		std::vector<int> multiples;
		int myints[] = {3,5};
        std::vector<int> vNumbers (myints, myints + sizeof(myints) / sizeof(int) );

		multiples = getMultiplesUnder(1000, vNumbers);

		//Perform the sum and return the value
		return std::accumulate(multiples.begin(), multiples.end(), 0);
	}
}
