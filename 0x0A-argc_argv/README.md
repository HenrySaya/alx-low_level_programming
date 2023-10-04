## 0x0A.c-argc_argv
This project explores the use of command line arguments argc and argv in C programming. It consists of five programs:

## 0-whatsmyname.c
This program prints its name followed by a new line. If you rename the program, it will print the new name without having to compile it again. The program does not remove the path before the name of the program.

## 1-args.c
This program prints the number of arguments passed into it. It will print a number followed by a new line.

## 2-args.c
This program prints all arguments it receives. All arguments will be printed, including the first one. Each argument will be printed on a new line.

## 3-mul.c
This program multiplies two numbers. It will print the result of the multiplication followed by a new line. The program assumes that the two numbers and the result of the multiplication can be stored in an integer. If the program does not receive two arguments, it will print "Error" followed by a new line, and return 1.

## 4-add.c
This program is designed to add two numbers. It will print the result of the addition followed by a new line. It also assumes that the two numbers and the result of the addition can be stored in an integer. If the program does not receive two arguments, it will print "Error" followed by a new line, and return 1.

## 100-change.c
This program calculates and prints the minimum number of coins needed to make change for an amount of money in cents.

#Usage: ./change cents
cents is the amount of cents you need to give back.
If the number of arguments passed to your program is not exactly 1, it will print "Error" followed by a new line, and return 1.
The program uses atoi to parse the parameter passed to your program.
If the number passed as the argument is negative, it will print 0 followed by a new line.
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
## Usage
To compile and run any of these programs, use the following steps:

1) open your preferred terminal or command prompt.
2) Navigate to the directory containing the program you want to run.
3) Compile the program using gcc (replace program_name.c with the actual name of the program):
	gcc program_name.c -o program_name
4) Run the program:
	./program_name [arguments]
5) Replace [arguments] with the necessary input for the specific program.
