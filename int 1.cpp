#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
};
struct Student* createStudent(const char* name, int age) {
    struct Student* s = (struct Student*)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy(s->name, name);
    s->age = age;
    printf("Constructor called: Student %s (age %d) created.\n", s->name, s->age);
    return s;
}
void destroyStudent(struct Student* s) {
    if (s != NULL) {
        printf("Destructor called: Student %s destroyed.\n", s->name);
        free(s);
    }
}
int main() {
    printf("Creating student object..);
    struct Student* s1 = createStudent("Alice", 20);
    printf("Student name: %s, age: %d\n", s1->name, s1->age);
    // "Destructor" equivalent
    destroyStudent(s1);
    printf("Program finished.\n");
    return 0;
}
