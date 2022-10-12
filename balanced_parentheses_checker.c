// program to check whether a given expression contains balanced parantheses.
/*
  Examples:
    {}{} : balanced.
    {{]] : not balanced.
    }{   : not balanced.
    ()()(: not balanced.
    5{   : not balanced.
    {[()]}: balanced.
*/

// program to check whether a given expression contains balanced parentheses.
#include <stdio.h>
#include <stdlib.h>
#define stacksize 50

// utility functions
int expr_size(char expression[]);
void push(char ch);

// main functions
int parentheses_check(char expression[]);
void check(char exp[]);

// driver function
int main()
{
    // example
    char exp[] = "{[9*(5+4)+(7^2)]/[99*5]}";
    check(exp);

    return 0;
}

// declaring stack to check parentheses
char stack[stacksize];
int top = -1;

// FUNCTIONS:

// utility functions
int expr_size(char expression[])
{
    int size = 0;
    while (expression[size] != '\0')
    {
        size++;
    }
    return size;
}

void push(char ch)
{
    if (top < stacksize)
    {
        stack[++top] = ch;
    }
    else
    {
        printf("OOF! stackoverflow.");
    }
}

// main parentheses checker function
int parentheses_check(char expression[])
{
    int size = expr_size(expression);

    for (int i = 0; i < size; i++)
    {
        if (expression[i] == '{' || expression[i] == '(' || expression[i] == '[')
        {
            push(expression[i]);
        }
        else if (expression[i] == '}')
        {
            if (stack[top] == '{')
            {
                top--;
            }
            else
            {
                return 0;
            }
        }
        else if (expression[i] == ']')
        {
            if (stack[top] == '[')
            {
                top--;
            }
            else
            {
                return 0;
            }
        }
        else if (expression[i] == ')')
        {
            if (stack[top] == '(')
            {
                top--;
            }
            else
            {
                return 0;
            }
        }
    }
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// tells the user whether the given expression has balanced parentheses or not
void check(char exp[])
{
    int checkvar = parentheses_check(exp);
    if (checkvar)
    {
        printf("parentheses Are Balanced");
    }
    else
    {
        printf("Not balanced! Recheck parentheses.");
    }
}
