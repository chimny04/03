# include <stdio.h>

int main(void) {
    float a;
    float b;
    
    printf("enter a number (a) : "); 
    scanf("%d", &a);
    printf("enter another number (b) : ");
    scanf("%d", &b);
    
    printf("the result of division (a/b) is %f\n", a/b);
    
    system("PAUSE");
    return 0;
}
