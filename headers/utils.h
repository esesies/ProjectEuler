#ifndef UTILS_H
#define UTILS_H

#include <algorithm>
#include <string>

namespace utils
{

    //bool contains(const C &v, const T &x)
    //Parameters:
    //  v: a container of some sort
    //  x: the value being checked
    //Returns:
    //  true if the container v contains x, otherwise false
    template <class C, class T>
    inline bool contains(const C &v, const T &x) 
	{
        return (std::end(v) != std::find(std::begin(v), std::end(v), x));
    }

	//bool isPrime(int num)
    //Parameters:
    //  num: the number being checked
    //Returns:
    //  true if num is prime, otherwise false
    bool isPrime(long long num);


	std::string invertString(std::string &in);

	bool isPalindrome(int num);



}

#endif //UTILS_H