#define run_tests(...)\
do{\
	int _tests_run;\
	int _allPassed = 1;\
	char *(*_tests[])() = {__VA_ARGS__,NULL};\
	char *_result;\
\
	for(_tests_run=0;_tests[_tests_run] != NULL;_tests_run++){\
\
		if ((_result = _tests[_tests_run]()) != 0){\
			printf("\n%s\n", _result);\
			_allPassed = 0;\
		} else printf(".");\
	}\
\
	if(_allPassed) printf("\nAll Passed\n");\
	printf("Tests run: %d\n", _tests_run);\
}while(0)

#define init_test(_name,_body) static char * _name() {{_body}return 0;}

#define assert(_message, _test) do { if (!(_test)) return _message; } while (0)
