#include <stdio.h>
#include <stdlib.h>

// hello function
// this function will return an integer which is always zero;
// this function need one integer as parameter to determine which string will be print on the screen.
// We use printf here to output our cute string
// When we declared the string, we use type char* since this is C language which has no string type.
// In C++ you can use std::string for string and in Java you can use String object.
// This is because C is a really old language that has no many feature as we have in modern language
// C, which is a general-purpose, procedural computer programming language supporting
// structured programming, lexical variable scope, and recursion, with a static type system,
// was first invented in Bell Lab by Dennis Ritchie between 1972 and 1973. Before C was invented, people
// are using Assembly language to program.
int hello(int a) {
    // We declared the string (char*) 12 char-size large since we are going to put 11 characters and the
    // \0 ending character in this variable. C style string use \0 as the recognize of the end of string.
    // The 11 characters we put here is Hello World, which is generally use when testing a new program.
    // The term "Hello World" is also created by C. It was first be used as an example in the 
    // seminal 1978 book The C Programming Language. The example program in that book prints "
    // hello, world", and was inherited from a 1974 Bell Laboratories internal memorandum 
    // by Brian Kernighan, Programming in C: A Tutorial
    char* str = malloc(sizeof(char)*12);
    if (a) str = "Hello World";
    else str = "Hello Phone";
    
    // Print the string use %s
    // If you want to print integer, use %d. If you want to print a float number, use %f.
    // C use these to determine how to format the string since C cannot recognize the type
    // when you pass parameters into printf because of lack of genric. In C++ we can use template
    // to design a new printf function that doesn't need to use these hard-recognized symbol anymore and
    // in the C# language they finally has implement this in official output stream.
	printf("%s", str);
	return 0;
}

int main() {
   // Calling a function here.
   // We pass the 1 to the function since we want it to print "Hello World". We pass 1 instead of true
   // because C doesn't has bool type. Type boolean was first introduced to C family in C++. In C, they
   // use integer to replace the true and false. Only 0 is falsy and the other integers will become true
   // if you use them in if condition expression or something like loops
   int value = hello(1);
   
   // We returned value, which should be 0 here to tell computer and our user that this program
   // ended normally. If you return some other number that basically means there were some problems
   // when executing the program.
   return value;
}
