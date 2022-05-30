GTEST_GIT = googletest
LCOV_GIT = lcov

TARGETS = $(GTEST_GIT) $(LCOV_GIT)

setup: | $(GTEST_GIT) $(LCOV_GIT)

$(GTEST_GIT):
	git clone https://github.com/google/googletest.git $@
	cd $@; \
		mkdir build; \
		cd build; \
		cmake ..; \
		make

$(LCOV_GIT):
	git clone https://github.com/linux-test-project/lcov.git $@
	cd $@; \
		git fetch --all --tags; \
		git checkout tags/v1.15 -b v1.15;

.PHONY: clean
clean:
	rm -rf $(TARGETS)
