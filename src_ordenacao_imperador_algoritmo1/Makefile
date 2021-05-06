CC=g++
CFLAGS=-std=c++17 -Wall -Wextra
EXEC=./tp2
TMPOUT=tp2.testresult

$(EXEC): civilizacao.cpp bubbleSortModificado.cpp main.cpp
	$(CC) $(CFLAGS) civilizacao.cpp bubbleSortModificado.cpp main.cpp -o $(EXEC)

clean:
	rm tp2
