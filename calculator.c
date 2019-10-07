#include<stdio.h>
#include<conio.h>
void main(){
    int ch;
    while(1) {
        printf("enter your choice\n");
        //printf("");
        printf("0-to exit\n"
               "1-for addition of two number\n"
               "2-for subtracting of two number\n"
               "3-multiplication of two number\n"
               "4-division of two number\n"
               "5-find square of a number\n"
               "6-find number is even or odd\n"
               "7-finding cube of a number\n"
             );
        //printf("");
//        printf("");
//        printf("");
//        printf("");
//        printf("");
//        printf("");
        scanf("%d",&ch);
        if(ch == 0) {
            break;
        }
        switch(ch){
            int output;
            int a, b;
            case 1:
                printf("enter 2 numbers for addition");
                scanf("%d%d", &a, &b);
                output=a+b;
                printf("addition=%d",output);
                break;
            case 2:
                output=a-b;
                printf("subtraction=%d",output);
                break;
            case 3:
                output=a*b;
                printf("multiplication=%d",output);
                break;
            case 4:
                output=a/b;
                printf("division=%d",output);
                break;
            case 5:
                output=a*a;
                printf("square=%d",output);
                break;
            case 6:
                output=a%2;
                if(output==0){
                    printf("even");
                } else {
                   printf("odd\n");
                }
                output=b%2;
                //output==0? printf("even"): printf("odd");
                if(output==0){
                   printf("even");
                } else{
                    printf("odd");
                }
                break;
            case 7:
                output=a*a*a;
                printf("cube=%d",output);
                break;
        }
    }
}
