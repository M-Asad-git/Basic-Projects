#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 17) {
        printf("Adult\n");
    } else {
        printf("Not an adult\n");
    }
  system("pause"); // Optional, mostly for Windows
    return 0;
}
