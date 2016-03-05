/* utils.cpp
 * By: Jaime Portas Garcia
 */

#include "utils.h"
#include <cmath> //sqrt




bool utils::isPrime(long long num)
{
	if (num < 2)
		return false; //0 and 1 are not prime
	if ((num & 1) == 0)
		return (num == 2); //If the even number is 2, return true. Else return false.
	int root = static_cast<int>(std::ceil(sqrt((double)num)));
	for (int i = 3; i <= root; i+=2)
		if ((num % i) == 0)
			return false;
	return true;
}

std::string utils::invertString(std::string &in)
{
	std::string out;
	for(int i = (in.size() - 1); i >= 0; i--)
		out.push_back(in.at(i));

	return out;
}

bool utils::isPalindrome(int num)
{
	std::string ss = std::to_string(static_cast<__int64>(num));
	std::string ssInverted = utils::invertString(ss);
	if (ss.compare(ssInverted) != 0)
		return false;
	return true;
}