Objects = main.o receiveString.o isPalindrome.o

palindrome: $(Objects)
	gcc -o palindrome $(Objects)

main.o: allFunctions.h
reciveString.o: allFunctions.h
is_palindrome.o: allFunctions.h

.PHONY: clean
clean:
	rm palindrome  $(Objects)
