/* Problem 002: Even Fibonacci numbers
 * By: Jaime Portas Garcia
 * 24.02.2016
 */

#include "problem002.h"
#include <algorithm>
#include <numeric>
#include "utils.h"


namespace problem002
{
	bool isOdd(int value)
	{
		return ((value % 2) == 1);
	}

	std::vector<int> getSerie(int maxNumber)
	{
		std::vector<int> serie;
		int nextItem;

		//Fibonacci serie
		serie.push_back(1);
		serie.push_back(2);

		for (int i = 0; serie.back() < maxNumber; i++ )
		{
			nextItem = serie[i] + serie[i+1];
		    serie.push_back(nextItem);
		}
		serie.pop_back();

		//Remove the Odds
		serie.erase(std::remove_if(serie.begin(), serie.end(), isOdd), serie.end());

		return serie;
	}

	int getAnswer(void)
	{
		std::vector<int> serie;
		
		serie = getSerie(4000000);

		//Other solution
		//long result = 0;
		//for (std::vector<long>::iterator it = serie.begin(); it != serie.end(); it++)
		//{
		//	if ((*it % 2) == 0)
		//		result += *it;	//Take only the even values
		//}

		return std::accumulate(serie.begin(),serie.end(),0);
	}
}
