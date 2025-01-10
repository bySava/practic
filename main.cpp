double my_pow(double base, unsigned int exponent)
{
	if (exponent == 0)
		return 1;
	else if (exponent == 1)
		return base;
	else if (exponent % 2 == 0)
		return my_pow(base * base, exponent / 2);
	else
		return my_pow(base * base, exponent / 2) * base;
}