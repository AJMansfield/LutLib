#ifndef TIMELUT_H
#define TIMELUT_H

#include <time.h>
#include <stdint.h>
#include <stdlib.h>


template<size_t size, time_t period = ONE_DAY>
class TimeLUT {
public:
	struct lut_element {
		time_t t : 24;
		uint8_t y : 8;
		constexpr bool operator<(const lut_element& that){
			return t < that.t;
		}
		constexpr bool operator>(const lut_element& that){
			return t > that.t;
		}
		static int cmp(const lut_element* a, const lut_element* b){
			return (*a < *b)? -1 : (*a > *b) ? 1 : 0;
		}
	};

	lut_element lut[size];

	size_t search(time_t t);

	void insert(time_t t, float x);
	float interpolate(time_t t);
	void remove(size_t i);
};



template<size_t size, time_t period>
size_t TimeLUT<size, period>::search(time_t t){
	bsearch(&t, &lut, size, sizeof(lut_element), (int (*)(const void*, const void*)) lut_element::cmp);
	return 0;
}

#endif