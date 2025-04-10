# # Цель по умолчанию
# all: integral_test

# # Форматирование кода
# fmt:
# 	find . -regex '.*\.[ch]' -exec clang-format -style=LLVM -i {} +

# # Проверка стиля кода
# check_fmt:
# 	find . -regex '.*\.[ch]' -exec clang-format -style=LLVM --dry-run --Werror {} +

# # Создание статической библиотеки
# libmath.a: tests/integral_test.o integral.o
# 	ar rc libmath.a tests/integral_test.o integral.o

# # Сборка тестового исполняемого файла для интеграла
# integral_test: tests/integral_test.o libmath.a
# 	gcc tests/integral_test.o -L. -lmath -o integral_test -lm

# # Компиляция объектного файла для теста интеграла
# tests/integral_test.o: tests/integral_test.c
# 	gcc -c tests/integral_test.c -o tests/integral_test.o -I.

# # Компиляция объектного файла для integral.c
# integral.o: integral.c
# 	gcc -c integral.c -o integral.o -I.

# # Очистка
# clear:
# 	rm -rf *.o libmath.a integral_test tests/integral_test.o

# # Запуск программы
# run:
# 	./integral_test

# test:
# 	gcc tests/integral_test.o -L. -o integral_test -lm
# 	gcc -c tests/integral_test.c -o tests/integral_test.o -I.
# 	gcc -c integral.c -o integral.o -I.



# add.o: integral.c integral.h
# 	gcc -g -c integral.c -o integral.o

# add.a: integral.o
# 	ar rc integral.a integral.o

# add_test.o: integral_function.c integral.h
# 	gcc -g -c integral_function.c -o integral_function.o

# add_test: integral_function.o integral.a
# 	gcc -g -static -o integral_function integral_function.o integral.a  -lm


# test: integral_function
# 	./integral_function



clear:
	rm -rf *.o *.a *_test


# ---

integral.o: integral.c integral.h
	gcc -g -c integral.c -o integral.o

integral.a: integral.o
	ar rc integral.a integral.o

integral_test.o: integral_test.c integral.h
	gcc -g -c integral_test.c -o integral_test.o

integral_test: integral_test.o integral.a
	gcc -g -o integral_test integral_test.o integral.a -lm


test: integral_test
	./integral_test