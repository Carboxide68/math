float pow(float base, int exponent);

float pow(float base, int exponent) {


	if (base == 0)
		return -1.0f;

	else if (exponent == 0)
		return 1.0f;

	else if (exponent < 0)
		return -1.0f;

	float counter = 1.0f;
	for (int i = 0; i < exponent; i++){
		counter *= base;
	}

	return counter;

}
