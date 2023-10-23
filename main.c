#include <stdio.h>
int main(void){
    float f,c,d;
    int a;
    printf("Enter the first temperature in Fahrenheights\n");
    scanf("%f",&f);
    printf("Enter the last temperature in Fahrenheights\n");
    scanf("%f",&d);
    printf("Enter the intervals of the table\n");
    scanf("%d",&a);

    while(f<=d){
        c=(f-32)/1.8;
        printf("\t%f in Fahrenheights\t  = %f degrees celsius\n",f,c);
        f=f+a;
    }
    return 0;
}
