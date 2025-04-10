# clear:
# 	rm -rf *.o *.a *_test

# fmt:
# 	clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

# check_fmt:
# 	clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

# # ---

# roots.o: roots.c roots.h
# 	gcc -g -c roots.c -o roots.o

# roots.a: roots.o
# 	ar rc roots.a roots.o

# tests.o: tests.c roots.h
# 	gcc -g -c tests.c -o tests.o

# tests: tests.o roots.a
# 	gcc -g -static -o tests tests.o roots.a  -lm


# test: tests
# 	./tests_test



clear:
	rm -rf *.o *.a *_test


# ---

roots.o: roots.c roots.h
	gcc -g -c roots.c -o roots.o

roots.a: roots.o
	ar rc roots.a roots.o

roots_test.o: roots_test.c roots.h
	gcc -g -c roots_test.c -o roots_test.o

roots_test: roots_test.o roots.a
	gcc -g -o roots_test roots_test.o roots.a  -lm


test: roots_test
	./roots_test