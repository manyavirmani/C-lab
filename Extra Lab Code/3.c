#include <stdio.h>

int x = 100; 

void displayValues() {
    int x = 50; 
    printf("Inside function - Local x: %d\n", x);
}

void displayGlobalValue() {
    printf("Inside displayGlobalValue - Global x: %d\n", x);
}

int main() {
    printf("Outside function - Global x: %d\n", x);
    
    displayValues();
    displayGlobalValue();
    
    int x = 25; 
    printf("In main function - Local x: %d\n", x);
    
    return 0;
}