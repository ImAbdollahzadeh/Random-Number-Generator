#include "RandomGenerator.h"

#ifdef _WIN32 || _WIN64

#include <windows.h>
#include <intrin.h>

double RandomGen(int start, int end) {
	unsigned __int64 i = __rdtsc();
	i <<= 54;
	double j = (double)(i >> 54)/999.00;
	return (double)start + (((double)end - (double)start) * (j > 1.0 ? 1.0 : j));
}

#else

double RandomGen(int start, int end) { return 0.0; }

#endif // WIN32 || WIN64
