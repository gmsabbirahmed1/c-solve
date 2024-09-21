#include <stdio.h>
#include <stdlib.h>
#define N 10

int stack[N];
int top =-1;

void push() {
    int x;
    printf("Enter a element that you want to store: ");
    scanf("%d", &x);
    if(top==N-1) {
        printf("{Error \n You can't insert(stack overflow)\n}");
    } else {
        top++;
        stack[top] = x;
    }
}


void pop() {
    if(top  ==    -1) {
        printf("Under flow: ");
    } else {
        top-- ;
    }
}


void peek() {
    if(top  ==    -1) {
        printf("Under flow: ");
    } else {
        printf("%d\n",  stack[top]);
    }
}

void display() {
     printf(".\n");
     if(top == -1) {
        printf("Stack is empty\n");
     }

    else {for(int i=top;  i>=0;   i--) {
        printf("%d\t",stack[i]);
    }
    printf(".\n");
    }
 printf(".\n");
}

int main() {
     while(1) {
    printf("Enter 1 for push   :\nEnter 2 for pop    :\nEnter 3 for peek   :\nEnter 4 for display:\nEnter 5 for exit   :\n--------------------\nyou entered= ");


        int scan;
        scanf("%d", &scan);
        printf("\n");


        switch(scan) {

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        case 5:
            printf("Exiting.......\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");


        }
        if(scan==5) {
            break;
        }
    }
    return 0;
}
