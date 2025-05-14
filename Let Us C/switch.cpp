#include<stdio.h>
int main()
{
    int name;// 1 for ali, 2 for asif, 3 for saqib, 4 for junaid, 5 for asad
    printf("Enter your number in brother from acending (1-5)", name);
    scanf("%d", &name);

    switch(name) {
        case 1: printf("Your name is:Ali\n");
        break;
        case 2: printf("Your name is:Asif\n");
        break;
        case 3: printf("Your name is:Saqib\n");
        break;
        case 4: printf("Your name is:Junaid\n");
        break;
        case 5: printf("Your name is:Asad\n");
        break;
        default: printf("You entered invalid number");

        return 0;
    }
}