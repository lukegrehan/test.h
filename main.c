#include <stdio.h>
#include "test.h"

int foo = 7;
int bar = 2;

init_test(test_foo,{
	assert("foo != 7", foo == 7);
	assert("foo > 10", foo <= 10);
});

init_test(test_bar,{
	assert("bar != 5", bar == 5);
});

int main(int argc, char **argv) {
	run_tests(
		test_foo,
		test_bar
	);
	return 0;
}