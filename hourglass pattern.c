#include <stdio.h>
int main() {
 int n = 4;
 // upper inverted pyramid
 for(int i = n; i >= 1; i--) {
for(int j = i; j <= n - i; j++) {
printf(" "); }
for(int j = 1; j <= 2 * i - 1; j++) {
 printf("*"); }
 printf("\n"); }
 // lower pyramid
for(int i = 2; i <= n; i++) {
for(int j = i; j <= n ; j++) {
printf(" "); }
for(int j = 1; j <= 2 * i - 1; j++) {
    printf("*");}
    printf("\n"); }
        return 0 ;
    }
