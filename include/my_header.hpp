//  Copyright (c) 2017 Antoine Tran Tan
//	Copyright (c) 2017 Alice Verot

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
#include <cmath>
double exo1(double rayon)
{
	double volume;
	volume = (4.0/3.0) * 3.14*rayon*rayon*rayon;
		return volume;
}
void exo2(short a, short b)
{
	short y;
	y = a < b && !a;
}
double exo3(double rayon)
{
	double volume;
	volume = (4.0/3.0)*pow(rayon, 3) * 3.14;
	return volume;
}
#endif // MY_HEADER_HPP

