
# Where to find user code.
USER_DIR = .
USER_HEADERS = .

COV_FLAGS = -fprofile-arcs -ftest-coverage

# Flags passed to the preprocessor.
# Set Google Test's header directory as a system directory, such that
# the compiler doesn't generate warnings in Google Test headers.
CPPFLAGS += -isystem $(GTEST_INCLUDE)

# Flags passed to the C++ compiler.
# Gtest requires the C++11-standard compliant compiler
CXXFLAGS += -g -Wall -Wextra -pthread -std=c++14 -O0

COV_FLAGS = -fprofile-arcs -ftest-coverage

LFLAGS = --coverage

# All tests produced by this Makefile.  Remember to add new tests you
# created to the list.
TESTS = test


# House-keeping build targets.
.PHONY: all
all : $(TESTS) test.gcda cov

.PHONY: clean
clean :
	rm -f $(TESTS) *.o gtest*.a result.* test.gc* test.info
	rm -rf result

# Builds gtest.a and gtest_main.a.

############################################################
# test_counter
############################################################
test.o : test.cpp
	$(CXX) $(CPPFLAGS) -I$(USER_HEADERS) $(CXXFLAGS) $(COV_FLAGS) \
		-c $< -o $@

test : test.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $(CXXFLAGS) $^ -o $@ -lgtest -lgtest_main $(LFLAGS)

test.gcda:
	./test

.PHONY: cov
cov: test.gcda
	lcov -d . -t test -o test.info -b . -c
	genhtml -o result test.info
	gcovr test.info --html -o result.html
	gcovr test.info -o result.txt
