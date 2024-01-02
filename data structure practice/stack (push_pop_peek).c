#include<stdio.h>
#define max_size 5

int top=-1;                     //global variable
int array[max_size];            //global array

void push(int value)
{
    top++;
    if(top>=max_size)
    {
        printf("overflow!\a\n");
        return 0;
    }
    array[top]=value;
};

void pop()
{
    if(top<0)
    {
        printf("underflow!\n\a");
        return 0;
    }
    int x=array[top];
    array[top]=0;
    top--;
    return x;
};

int peek()
{
    return array[top];
};

void isFull()
{
    if(top==4)
    {
        printf("Array is full or true!\n");
    }
}

void isEmpty()
{
    if(top==-1)
    {
        printf("Array is empty or false!\n");
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
   push(5);
    //push(8);

    //pop();
    //pop();
    pop();
    pop();
    pop();

    isFull();
    isEmpty();

    printf("%d\n", peek());

    return 0;
}

