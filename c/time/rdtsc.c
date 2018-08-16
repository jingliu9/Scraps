#include "utils.h"
#include <stdint.h>

static inline uint64_t RDTSC()
{
  unsigned int hi, lo;
  __asm__ volatile("rdtsc" : "=a" (lo), "=d" (hi));
  return ((uint64_t)hi << 32) | lo;
}

int main(void)
{
	uint64_t i = RDTSC();
	// sanity check
	if (i == 0) {
		printf("error with rdtsc ! (%lu)\n", i);
		exit(1);
	} else {
		/* v = t.time * 1000 + t.millitm; */
		/* printf("time as int is: %llums\n", v); */
	}

	test_start();
	for (i = 0; i < N; i++) {
        RDTSC();
	}
	test_end();

	return 0;
}


