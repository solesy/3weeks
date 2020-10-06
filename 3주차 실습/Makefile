cc = g++
target = 3week
objects = main.o RangeArray.o Array.o

$(target): $(objects)
	$(cc) -o $(target) $(objects)

$(objects): RangeArray.h Array.h

.PHONY : clean
clean :
	rm $(target) $(objects)
