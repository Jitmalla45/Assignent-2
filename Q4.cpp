the function declaration void func(char= '*', int=45); is not valid in C++. Here's a more detailed explanation:

Why is the original declaration invalid?
The declaration:
void func(char= '*', int=45);
is invalid because when providing default arguments, each parameter must have both a data type and a parameter name. In this case, the first parameter char does not specify a parameter name, and similarly for the int. C++ requires both a type and name for parameters, even when assigning default values.

Correct Declaration:
The correct way to declare this function would be:
void func(char ch = '*', int num = 45);

Explanation:
char ch = '*': Specifies that ch is of type char, and its default value is '*'.
int num = 45: Specifies that num is of type int, and its default value is 45.

What happens when declared correctly?
If you declare the function correctly and call it like this:
func();          // Uses both default values: ch = '*', num = 45
func('#');       // Uses the first argument, but default for the second: ch = '#', num = 45
func('#', 10);   // Uses both arguments provided: ch = '#', num = 10

Compiler Error:
If you declare it like this:
void func(char= '*', int=45);
The compiler will generate an error like "type name is not allowed" because the syntax is incomplete. The compiler expects both a type and a parameter name.
