GTEST_GIT = googletest

setup: | $(GTEST_GIT)

$(GTEST_GIT):
	git clone https://github.com/google/googletest.git $@

.PHONY: clean

clean:
	rm -rf $(GTEST_GIT)
