ALL_SRCS := $(shell find ./src ./test -type f -name '*.cpp' -o -name '*.h')

install:
	@rm -rf build &&   \
	mkdir build &&	   \
	cd build &&        \
	cmake .. &&        \
	make

rebuild:
	@cd build &&       \
	cmake .. &&        \
	make

clean:
	@rm -rf build

# Runing cmake test
test-all: rebuild
	@cd build && make test

# running executables
test-details: rebuild
	@build/chapter_01_unittest

# Formatting inline
format-forced:
	@find ./src ./test -type f \( -name '*.cpp' -o -name '*.h' \)    \
						    -exec clang-format -style=google -verbose -i {}    \;

# Format cheking without updating the source code
format-check:
	@for file in $(ALL_SRCS) ; do                                    \
	    clang-format -style=google -verbose $$file > temp_XMXZQT ;   \
			diff temp_XMXZQT $$file ;                                    \
			rm temp_XMXZQT ;                                             \
	done
	@cpplint $(ALL_SRCS)	
	@# Now working
	@#@find ./src ./test -type f \( -name '*.cpp' -o -name '*.h' \) \
  #-exec sh -c 'diff <(clang-format -style=google -verbose "$$0") "$$0" ' {} \;   # to Escape $, use $$
