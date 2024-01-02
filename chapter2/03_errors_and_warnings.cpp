//============== TYPES OF ERRORS AND WARNINGS===============//
// 1-> COMPILE TIME ERRORS //
// 2-> RUNTIME ERRORS //
// 3-> WARNINGS //

//============ COMPILE TIME ERROR =============//
/* Compile-Time Errors: Errors that occur when you violate the rules of writing syntax are known as Compile-Time errors. This compiler error indicates something that must be fixed before the code can be compiled. All these errors are detected by the compiler and thus are known as compile-time errors.
Most frequent Compile-Time errors are:

1-> Missing Parenthesis (})
2-> Printing the value of variable without declaring it
3-> Missing semicolon (terminator)
 */

//============= RUN TIME ERROR ===============//
/* Runtime Errors:
1-> A runtime error in a program is an error that occurs while the program is running after being successfully compiled.
2-> Runtime errors are commonly called referred to as “bugs” and are often found during the debugging process before the software is released.
3-> When runtime errors occur after a program has been distributed to the public, developers often release patches, or small updates designed to fix the errors.
4-> Anyone can find the list of issues that they might face if they are a beginner in this article.
5->While solving problems on online platforms, many run time errors can be faced, which are not clearly specified in the message that comes with them. There are a variety of runtime errors that occur such as logical errors, Input/Output errors, undefined object errors, division by zero errors, and many more.

Types of Runtime Errors:
1-> SIGFPE: SIGFPE is a floating-point error. It is virtually always caused by a division by 0. There can be mainly three main causes of SIGFPE error described as follows:

1-> Division by Zero.
2-> Modulo Operation by Zero.
3-> Integer Overflow.*/

//============== WARNINGS ==============//
/*

User
WHAT IS WARNINGS IN CPP
ChatGPT
In C++, "warnings" typically refer to compiler warnings. When you compile a C++ program, the compiler analyzes your code and may generate warnings to alert you about potential issues or code constructs that might lead to errors or unexpected behavior during runtime. Compiler warnings are not errors, but they indicate areas of your code that might need attention or improvement.

Some common examples of compiler warnings include:

1-> Unused Variables: A warning might be issued if you declare a variable but never use it in your code.
2-> Uninitialized Variables: If you use a variable without initializing it, the compiler might issue a warning.
3-> Type Mismatch: If there is a potential type mismatch or loss of data during assignment, the compiler may issue a warning.

Warnings are essential for improving the quality of your code and catching potential issues early in the development process. It's generally a good practice to address and resolve compiler warnings to ensure the correctness and reliability of your C++ programs. However, there may be cases where you intentionally suppress or ignore certain warnings, but it's important to do so judiciously and with a clear understanding of the potential consequences.*/
