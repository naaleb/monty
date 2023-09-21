Monty C - Stacks and Queues Implementation
Overview
This project aims to implement a Monty interpreter in C that can handle both Stacks (LIFO - Last-In, First-Out) and Queues (FIFO - First-In, First-Out) data structures.
Monty is a simple programming language used for manipulating data structures. 
This project involves creating a program that reads Monty bytecode files and executes the instructions accordingly.
Team Members
•	Hermas Naalebkuur 
•	Almond Abebor
Getting Started
Follow these steps to set up and run the Monty interpreter:
1.	Clone the Repository:
git clone https://github.com/naaleb/monty.git

git clone [https://github.com/naaleb/monty.git] 
2.	Compile the Program:
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

3.	Run Monty:
Monty Bytecode
Monty bytecode files contain instructions for manipulating the stack or queue data structures. Each instruction is on a new line and consists of a single word followed by an optional argument. Example instructions:
•	push 1: Pushes the integer 1 onto the stack.
•	pop: Removes the top element from the stack.
•	queue: Switches the data structure mode to Queue (FIFO).
•	stack: Switches the data structure mode to Stack (LIFO).
•	pall: Prints all the values in the stack/queue.
Refer to the Monty documentation for a complete list of instructions.
Features
•	Stack and Queue Support: The interpreter supports both LIFO and FIFO data structures.
•	Error Handling: Comprehensive error handling to provide meaningful error messages.
•	Instruction Execution: Executes Monty bytecode instructions accurately.
Contributions
Contributions to this project are welcome! 
License
This project is an ALX software engineer student project.
