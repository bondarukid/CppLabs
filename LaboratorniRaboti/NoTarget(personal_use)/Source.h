#pragma once
#ifndef SOURCE_H
#define SOURCE_H

int SumOfNumber(int number)
{
	int result = 0;

	while (number != 0)
	{
		result += number % 10;
		number /= 10;
	}

	return result;
}

#endif
