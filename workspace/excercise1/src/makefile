Objects = project1.o shape.o

project1: $(Objects)
	g++ -o project1 $(Objects)

project1.o: shape.h
shape.o: shape.h

.PHONY: clean
clean:
	rm project1  $(Objects)
