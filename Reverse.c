#include <stdio.h>

// Function prototype for both getString and print "void" statements

void getString(char *);

void print(char *); 

// Main Function

int main() {

    char string[100];

    getString(string);

    print(string);

}

// Length of string functions

int length(char *string) {

    int x = 0;

    while(string[x] != 0) {

        x++;

    }

    return x;

}

// Function returns 1 as char is lower case else 0 if not

int isLower(char c) {
    if(c >= 'a' && c <= 'z') {

        return 1;

    }

    return 0;

}

// Function is converting from lowercase char to uppercase char as it returns char c

char isUpper(char c) {

    if(isLower(c)) {

        return c - ('a' - 'A');

    }

    return c;

}

// Function gets string from the keyboard of our laptop

void getString(char *string) {

    printf("Enter a string: ");

    gets(string);

}

// Function reverses string

void reverse(char *string) {

    int x = length(string);

    char temp;

    for(int i = 0; i < x / 2; i++) {
        
        temp = string[i];

        string[i] = string[x - i - 1];

        string [x - i - 1] = temp;

    }

}

// Function to capitalize any words/letters

int capitalize(char *string) {

    int total = 0;

    int x = length(string);

    for(int i = 0; i < x; i++) {

        if(isLower(string[i])) {

            total++;

            string[i] = isUpper(string[i]);

        }

    }

    return total;

}

// Print statements after typing a phrase

void print(char *string) {

    int x = length(string);

    reverse(string);
    
    int total = capitalize(string);

    for(int i = 0; i < x; i++) {

        printf("%c\n", string[i]);

    }

    printf("\nThe string is %d chars and %d chars were capitalized.\n", x, total);

}
