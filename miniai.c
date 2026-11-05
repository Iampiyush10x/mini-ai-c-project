
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

    else if(strstr(input, "joke")) {
        printf("AI: Why do programmers prefer dark mode? Because light attracts bugs!\n");
    }

    else if(strstr(input, "help")) {
        printf("AI: You can ask me about C, my name, jokes, or say hello!\n");
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
