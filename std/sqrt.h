#include "pow.h"

float sqrt(float base);

float sqrt(float base, int lim);

float sqrt(float base, int precision, int lim);

float sqrt(float base) {
	
	return sqrt(base, 5, 100);

}

float sqrt(float base, int precision) {

	return sqrt(base, precision, 100);

}

float sqrt(float base, int precision, int lim) {

	float x = base;
	float y = pow(x, 2) - base;

	long last = 0;

	int tally = 0;

	while (tally < lim) {

		x -= y/2;
		y = pow(x, 2) - base;

		if (floorL(y * pow(10, precision)) == last) {
			return x;
		}

		last = floorL(y * pow(10, precision));

		tally++;

	}

	return x;

}