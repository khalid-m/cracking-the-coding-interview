install:
	@rm -rf build &&   \
	mkdir build &&	   \
	cd build &&        \
	cmake .. &&        \
	make
clean:
	@rm -rf build
run:
	@build/chapter_01_unittest
