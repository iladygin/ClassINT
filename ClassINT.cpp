#include <iostream>
#include <stdio.h>
#include "TXlib.h"

int current_var = 0;
int max_var = 0;
int color = 0;

class Int 
{
    int value = 0;
public:
    
    Int (int number) : value(number) 
    {
        max_var++;
        current_var++;
        color = size_t(this) & 0xF;
        if (color == 0)
            color = 7;
        txSetConsoleAttr(0x70);
        printf("\nCONSTRUCTOR WITH");
        txSetConsoleAttr();
        printf(" ");
        txSetConsoleAttr(color);
        printf("parametrs(%d)", number);
        txSetConsoleAttr();
        printf(" was successfully launched, current_var = %d, address: ", current_var);
        txSetConsoleAttr(color);
        printf("[%p]\n", this);
    }

    Int(const Int& a) : value (a.value)
    {
        max_var++;
        current_var++;
        color = size_t(this) & 0xF;
        if (color == 0)
            color = 7;
        txSetConsoleAttr(0x20);
        printf("\nCOPY CONSTRUCTOR");
        txSetConsoleAttr();
        printf(" for ");
        txSetConsoleAttr(color);
        printf("%d", value);
        txSetConsoleAttr();
        printf(" was successfully launched, current_var = %d, address:", current_var);
        txSetConsoleAttr(color);
        printf(" [%p]\n", this);
    }
    
    Int() : value(0)
    {
        max_var++;
        current_var++;
        color = size_t(this) & 0xF;
        if (color == 0)
            color = 7;
        txSetConsoleAttr(0xE0);
        printf("\nDEFAULT CONSTRUCTOR");
        txSetConsoleAttr(); 
        printf("was successfully launched, current_var = %d, address:", current_var);
        txSetConsoleAttr(color);
        printf(" [%p]\n", this);
    }
    
    ~Int() 
    {
        current_var--;
        color = size_t(this) & 0xF;
        if (color == 0)
            color = 7;
        txSetConsoleAttr(0x60);
        printf("\nDESTRUCTOR");
        txSetConsoleAttr();
        printf(" for ");
        txSetConsoleAttr(color);
        printf("%d", value);
        txSetConsoleAttr();
        printf(" was successfully launched, current_var = %d, address:", current_var);
        txSetConsoleAttr(color);
        printf(" [%p]\n", this);
    }
    
    friend Int operator + (const Int& a,const Int& b)
    {
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("\n[%p] ", &a);
        
        txSetConsoleAttr();
        printf(" ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("[%p]", &b);
        
        txSetConsoleAttr();
        printf(" Addition ");
        
        color = size_t(&a) & 0xF;
        if (color == 0)
            color =5;
        txSetConsoleAttr(color);
        printf("%d", a.value);
        
        txSetConsoleAttr();
        printf(" and ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("%d", b.value);
        
        txSetConsoleAttr();
        printf(" is performed...\n");
        
        txSetConsoleAttr();
        printf("\nResult: ");
        txSetConsoleAttr(0x1);
        printf("%d\n", a.value + b.value);

        return Int (a.value + b.value);   
    }
    
    friend Int operator - (const Int& a,const Int& b)
    {
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("\n[%p] ", &a);
        
        txSetConsoleAttr();
        printf(" ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("[%p]", &b);
        
        txSetConsoleAttr();
        printf(" Substraction ");
        
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("%d", a.value);
        
        txSetConsoleAttr();
        printf(" and ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("%d", b.value);
        
        txSetConsoleAttr();
        printf(" is performed...\n");
        
        txSetConsoleAttr();
        printf("\nResult: ");
        txSetConsoleAttr(0x1);
        printf("%d\n", a.value - b.value);

        return Int (a.value - b.value);   
    }
    
    friend Int operator * (const Int& a,const Int& b)
    {
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("\n[%p] ", &a);
        
        txSetConsoleAttr();
        printf(" ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("[%p]", &b);
        
        txSetConsoleAttr();
        printf(" Multiplication ");
        
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("%d", a.value);
        
        txSetConsoleAttr();
        printf(" and ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("%d", b.value);
        
        txSetConsoleAttr();
        printf(" is performed...\n");
        
        txSetConsoleAttr();
        printf("\nResult: ");

        txSetConsoleAttr(0x1);
        printf("%d\n", a.value * b.value);
        
        return Int (a.value * b.value);;   
    }
    
    friend Int operator / (const Int& a,const Int& b)
    {
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("\n[%p] ", &a);
        
        txSetConsoleAttr();
        printf(" ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("[%p]", &b);
        
        txSetConsoleAttr();
        printf(" Division ");
        
        color = size_t(&a) & 0xF;
        if (color == 0)
            color = 5;
        txSetConsoleAttr(color);
        printf("%d", a.value);
        
        txSetConsoleAttr();
        printf(" and ");
        
        color = size_t(&b) & 0xF;
        if (color == 0)
            color = 6;
        txSetConsoleAttr(color);
        printf("%d", b.value);
        
        txSetConsoleAttr();
        printf(" is performed...\n");
        
        txSetConsoleAttr();
        printf("\nResult: ");
        
        txSetConsoleAttr(0x1);
        printf("%d\n", a.value / b.value);
        
        return Int (a.value / b.value);   
    }
    
    Int operator = (Int a)
    {
        value = a.value;
        return *this;   
    }
    
    friend bool operator > (Int a, Int b)
    {
        if (a.value > b.value)
            return true;
        else
            return false;
    }

    friend bool operator < (Int a, Int b)
    {
        if (a.value < b.value)
            return true;
        else
            return false;
    }
    
    friend bool operator >= (Int a, Int b)
    {
        if (a.value >= b.value)
            return true;
        else
            return false;
    }
    
    friend bool operator <= (Int a, Int b)
    {
        if (a.value <= b.value)
            return true;
        else
            return false;
    }
    
    friend bool operator != (Int a, Int b)
    {
        if (a.value != b.value)
            return true;
        else
            return false;
    }
    
    friend bool operator == (Int a, Int b)
    {
        if (a.value == b.value)
            return true;
        else
            return false;
    }
}; 

int main()
{

    //printf("\nNOW b\n");
    //Int b = 10;
    
    //printf("\nNOW c\n");
    //Int c = 0 - b / 2 - 1 + b * 10;
    
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            Int b = i + j;
            Int c = 0 - b;
        }
            
    txSetConsoleAttr(0x1);
    printf("\nMaximum quantity of variables: ");
    txSetConsoleAttr(0xA);
    printf("%d\n", max_var);
	
    return 0;
}
