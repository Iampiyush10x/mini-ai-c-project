#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chatbot(char input[]) {

    // Convert input to lowercase
    for(int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    if(strstr(input, "hello") || strstr(input, "hi")) {
        printf("AI: Hello! Nice to meet you!\n");
    }

    else if(strstr(input, "your name")) {
        printf("AI: My name is Mini AI.\n");
    }

    else if(strstr(input, "how are you")) {
        printf("AI: I am doing great! Thanks for asking.\n");
    }

    else if(strstr(input, "what is c")) {
        printf("AI: C is a powerful programming language developed by Dennis Ritchie.\n");
    }

    else if(strstr(input, "who created you")) {
        printf("AI: I was created using the C programming language.\n");
    }

    else if(strstr(input, "your creator")) {
        printf("AI: I was developed by a student as a C mini project.\n");
    }

    else if(strstr(input, "what is string")) {
        printf("AI: A string is an array of characters ending with '\\0'.\n");
    }

    else if(strstr(input, "what is variable")) {
        printf("AI: A variable is a named memory location used to store data.\n");
    }

    else if(strstr(input, "what is data type")) {
        printf("AI: A data type defines the type of data a variable can store.\n");
    }

    else if(strstr(input, "what is int")) {
        printf("AI: int is used to store integer values.\n");
    }

    else if(strstr(input, "what is float")) {
        printf("AI: float is used to store decimal numbers.\n");
    }

    else if(strstr(input, "what is char")) {
        printf("AI: char is used to store a single character.\n");
    }

    else if(strstr(input, "what is array")) {
        printf("AI: An array stores multiple values of the same data type.\n");
    }

    else if(strstr(input, "what is pointer")) {
        printf("AI: A pointer stores the memory address of another variable.\n");
    }

    else if(strstr(input, "what is function")) {
        printf("AI: A function is a block of reusable code that performs a task.\n");
    }

    else if(strstr(input, "what is loop")) {
        printf("AI: A loop is used to repeat a block of code multiple times.\n");
    }

    else if(strstr(input, "what is structure")) {
        printf("AI: A structure groups different data types under one name.\n");
    }

    else if(strstr(input, "what is malloc")) {
        printf("AI: malloc allocates memory dynamically during program execution.\n");
    }

    else if(strstr(input, "what is file handling")) {
        printf("AI: File handling allows a program to create, read, write, and close files.\n");
    }

    else if(strstr(input, "what is recursion")) {
        printf("AI: Recursion is when a function calls itself.\n");
    }

    else if(strstr(input, "joke")) {
        printf("AI: Why do programmers prefer dark mode? Because light attracts bugs!\n");
    }

    else if(strstr(input, "help")) {
        printf("AI: You can ask me about C, variable, data type, array, pointer, function, loop, structure, malloc, file handling, recursion, or jokes!\n");
    }

    else if(strstr(input, "bye") || strstr(input, "exit")) {
        printf("AI: Goodbye! Have a great day!\n");
    }

    else {
        printf("AI: Sorry, I don't understand that yet. Try something else!\n");
    }
}

int main() {

    char input[200];

    printf("====================================\n");
    printf("       MINI AI CHATBOT v1.0\n");
    printf("====================================\n");

    printf("AI: Hello! I am your Mini AI Assistant.\n");
    printf("AI: Type 'help' to see what I can do.\n");
    printf("AI: Type 'exit' to close the chatbot.\n");

    while(1) {

        printf("\nYou: ");
        fgets(input, sizeof(input), stdin);

        if(strstr(input, "exit") || strstr(input, "bye")) {
            printf("AI: Goodbye! Thanks for chatting!\n");
            break;
        }

        chatbot(input);
    }

    return 0;
}
