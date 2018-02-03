Objects = main.o birthday.o people.o

excercise2: $(Objects)
	g++ -o excercise2 $(Objects)

main.o: birthday.h people.h
birthday.o: birthday.h
people.o: birthday.h people.h

.PHONY: clean
clean:
	rm excercise2 $(Objects)
