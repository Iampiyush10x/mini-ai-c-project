
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTIONS 100

// String arrays to store chatbot knowledge
char *keywords[MAX_QUESTIONS] = {
    "hello",
    "hi",
    "your name",
    "how are you",
    "what is c",
    "history of c",
    "who created c",
    "features of c",
    "what is variable",
    "what is data type",
    "what is int",
    "what is float",
    "what is char",
    "what is double",
    "what is array",
    "what is string",
    "what is pointer",
    "what is function",
    "what is loop",
    "what is for loop",
    "what is while loop",
    "what is do while loop",
    "what is if statement",
    "what is switch",
    "what is structure",
    "what is union",
    "what is enum",
    "what is typedef",
    "what is malloc",
    "what is calloc",
    "what is free",
    "what is printf",
    "what is scanf",
    "what is file handling",
    "what is recursion",
    "what is header file",
    "what is compiler",
    "what is keyword",
    "what is operator",
    "what is comment",
    "what is constant",
    "what is macro",
    "what is storage class",
    "what is static",
    "what is extern",
    "what is sizeof",
    "what is null pointer",
    "what is dangling pointer",
    "what is memory leak",
    "what is segmentation fault",
    "your creator",
    "who created you",
    "joke",
    "help"
};

char *answers[MAX_QUESTIONS] = {
    "AI: Hello! Nice to meet you!",
    "AI: Hello! How can I help you?",
    "AI: My name is Mini AI.",
    "AI: I am doing great! Thanks for asking.",
    "AI: C is a powerful, general-purpose programming language developed by Dennis Ritchie in 1972.",
    "AI: C was developed at Bell Labs by Dennis Ritchie in 1972. It became popular because it is fast, simple, and portable.",
    "AI: C was created by Dennis Ritchie at Bell Labs.",
    "AI: C is fast, portable, simple, supports low-level memory access, and is widely used for system programming.",
    "AI: A variable is a named memory location used to store data.",
    "AI: A data type defines the type and size of data a variable can store, such as int, float, char, and double.",
    "AI: int is a data type used to store integer values, for example: int age = 20;",
    "AI: float is a data type used to store decimal numbers, for example: float price = 99.50;",
    "AI: char is a data type used to store a single character, for example: char grade = 'A';",
    "AI: double is a data type used to store large decimal numbers with more precision than float.",
    "AI: An array is a collection of elements of the same data type stored in continuous memory locations.",
    "AI: A string is an array of characters ending with the null character '\\0'.",
    "AI: A pointer is a variable that stores the memory address of another variable.",
    "AI: A function is a block of reusable code that performs a specific task.",
    "AI: A loop is used to repeat a block of code multiple times.",
    "AI: A for loop repeats code a fixed number of times. Example: for(int i = 0; i < 5; i++)",
    "AI: A while loop repeats code as long as its condition is true.",
    "AI: A do-while loop executes the code at least once, then repeats while the condition is true.",
    "AI: An if statement executes a block of code only when a condition is true.",
    "AI: switch is a selection statement used to choose one block of code from many cases.",
    "AI: A structure is a user-defined data type that groups different data types together.",
    "AI: A union allows different data types to share the same memory location.",
    "AI: An enum is a user-defined data type that represents a set of named integer constants.",
    "AI: typedef gives a new name to an existing data type, making code easier to read.",
    "AI: malloc allocates memory dynamically at runtime. Example: int *p = malloc(5 * sizeof(int));",
    "AI: calloc allocates memory dynamically and initializes all bytes to zero.",
    "AI: free releases dynamically allocated memory back to the system.",
    "AI: printf is used to print output on the screen.",
    "AI: scanf is used to take input from the user.",
    "AI: File handling in C allows programs to create, read, write, and close files using fopen, fread, fwrite, and fclose.",
    "AI: Recursion is when a function calls itself to solve a problem.",
    "AI: A header file contains function declarations and macros. Examples: stdio.h, string.h, math.h.",
    "AI: A compiler converts C source code into machine-readable executable code.",
    "AI: Keywords are reserved words with special meaning in C, such as int, if, while, return, and struct.",
    "AI: Operators are symbols used to perform operations, such as +, -, *, /, ==, &&, and ||.",
    "AI: Comments are notes in code ignored by the compiler. Single-line comments use // and multi-line comments use /* */.",
    "AI: A constant is a value that cannot be changed during program execution.",
    "AI: A macro is defined using #define and is replaced by its value before compilation.",
    "AI: Storage classes define the scope, lifetime, and visibility of variables. Examples: auto, static, extern, register.",
    "AI: static variables retain their value between function calls and have limited scope.",
    "AI: extern tells the compiler that a variable or function is defined in another file.",
    "AI: sizeof returns the size of a variable or data type in bytes.",
    "AI: A NULL pointer does not point to any valid memory location.",
    "AI: A dangling pointer points to memory that has already been freed or deallocated.",
    "AI: A memory leak happens when dynamically allocated memory is not released using free().",
    "AI: A segmentation fault occurs when a program tries to access memory it is not allowed to access.",
    "AI: I was developed by a student as a C mini project.",
    "AI: I was created using the C programming language.",
    "AI: Why do programmers prefer dark mode? Because light attracts bugs!",
    "AI: You can ask me about C basics, variables, pointers, arrays, loops, functions, structures, file handling, memory, or say hello!"
};

int total_questions = sizeof(keywords) / sizeof(keywords[0]);

void to_lowercase(char input[]) {
    for(int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }
}

void chatbot(char input[]) {

    to_lowercase(input);

    for(int i = 0; i < total_questions; i++) {
        if(strstr(input, keywords[i]) != NULL) {
            printf("%s\n", answers[i]);
            return;
        }
    }

    printf("AI: Sorry, I don't understand that yet. Try asking about C!\n");
}

int main() {

    char input[200];

    printf("====================================\n");
    printf("       MINI AI CHATBOT v2.0\n");
    printf("====================================\n");

    printf("AI: Hello! I am your Mini AI Assistant.\n");
    printf("AI: Ask me anything about the C language.\n");
    printf("AI: Type 'help' to see what I can do.\n");
    printf("AI: Type 'exit' to close the chatbot.\n");

    while(1) {

        printf("\nYou: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        if(strstr(input, "exit") != NULL || strstr(input, "bye") != NULL) {
            printf("AI: Goodbye! Thanks for chatting!\n");
            break;
        }

        chatbot(input);
    }

    return 0;
}
