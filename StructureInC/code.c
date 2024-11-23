#include<stdio.h>
#include<string.h>
// Structure in C (definition)

struct person {
    char name[51];
    int age;
    char phone_no[12];
    char address[201];
};

// Declaration

int main() {
    struct person p1;
    char name[]={'A','B','I','R','\0'};
    strcpy(p1.name,name);
    printf("%s\n",p1.name);
    // output 
    // ABIR
}