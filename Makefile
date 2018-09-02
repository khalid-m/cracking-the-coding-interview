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

test-all: rebuild
	@cd build && make test

test-details: rebuild
	@build/chapter_01_unittest
