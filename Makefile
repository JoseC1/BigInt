#Makefile script

main: *.cpp
	@g++ *.cpp -o main

run:
	@./main

edit:
	@vim main.cpp

clean:
	@rm main


