
#if 0
#include<stdio.h>

int fun_recursive(int value)
{
    if(value == 0 || value == 1)
    {
        return 1;
    }
    else
        return (fun_recursive(value-1) + fun_recursive(value-2));
}
int main()
{
    int var=0,c,i_var=0;
    printf("Enter a number");
    scanf("%d",&var);
    for(c=0;c <= var;c++)
    {
        printf("%d ",fun_recursive(i_var));
        i_var++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char a=30,b=40,c=10;
    char d=(a*b)/c;
    printf("%d",d);
    return 0;
}


#include<stdio.h>
int main()
{
    int buf[100],n,i;
    printf("Enter how many enter elements");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&buf[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",buf[i]);
        printf(" ");
    }
    return 0;
}



#include<stdio.h>
int main()
{
    char* str = "hello" "," "world";
    printf("%s",str);
    return 0;
}

#include<stdio.h>
int main()
{
    char s[]="Hello Hyderabad";
    const char *s1="Hello Hyderabad";
    printf("%lu",sizeof(s));
    s[0] = 'j';
    printf("\n%s",s);
    printf("\n%lu",sizeof(s1));
    return 0;
}



#include<stdio.h>
void fun(char **str1_ptr,char **str2_ptr)
{
    char *temp = *str1_ptr;
    *str1_ptr = *str2_ptr;
    *str2_ptr = temp;
}
int main()
{
    char *str1 = "Geeksfor";
    char *str2 = "Geek";
    fun(&str1,&str2);
    printf("str1 is %s,str2 is %s ",str1,str2);
    return 0;
}


#include<stdio.h>
int main()
{
    char *str;
    int size=4;
    str = (char *)malloc(sizeof(char)*size);
    *(str+0) = 'G';
    *(str+1) = 'e';
    *(str+2) = 'e';
    *(str+3) = '\0';
    printf("%s",str);
}


#include<stdio.h>
#include<string.h>
int main()
{
    int toknum=0;
    char src[] = "Hello..world!";
    const char deliminater[] = ". !";
    char *token = strtok(src,deliminater);
    while(token != NULL)
    {
        printf("%d: %s\n",++toknum,token);
        token = strtok(NULL,deliminater);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    struct
    {
        unsigned int uint3: 3;
    }small;

    unsigned int value = 255-2;
    small.uint3 = value;
    printf("%d\n",small.uint3);

//    for(small.uint3=0;small.uint3<8;small.uint3++)
//    {
//        printf("%d\n",small.uint3);
//    }
    return 0;
}


#include<stdio.h>
int get_last(int array[],size_t length)
{
    return array[length-1];
}
int main()
{
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    size_t size = sizeof(array); /*find size of array in bytes*/
    size_t length = sizeof(array) / sizeof(array[0]); /*find the length of array elements*/
    printf("%d\n",size);
    printf("%d\n",length);
    size_t last = get_last(array,length);
    printf("%d\n",last);
    return 0;
}


#include<stdio.h>
enum OP
{
    ADD = '+',
    SUB = '-',
};

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

int (*getmath(enum OP op))(int,int)
{
    switch(op)
    {
        case ADD:
            return &add;
        case SUB:
            return &sub;
        default:
            return NULL;

    }
}
int main(void)
{
    int a,b,c;
    int (*fp)(int,int);

    fp=getmath(ADD);

    a=1,b=2;
    c=(*fp)(a,b);
    printf("%d+%d=%d",a,b,c);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
uint32_t w,x,y,z;

uint32_t xorshift128(void)
{
    uint32_t t=x;
    t ^= t << 11U;
    t ^= t >> 8U;
    x=y;x=z;z=w;
    w ^= w >> 19U;
    w ^= t;
    return w;
}
int main(void)
{
    uint64_t s;
    s=xorshift128();
    printf("%ld",s);
    return 0;
}



#include<stdio.h>
int main()
{
	if(!printf("Hello"))
		printf("Hello");
	else
		printf("world");
	return 0;
}



#include<stdio.h>
int addsum(int num)
{
	int sum=0;
	while(num != 0)
	{
		sum = sum + num%10;
		num = num / 10;
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d",addsum(n));
	return 0;
}


#include<stdio.h>
int printnos(unsigned int num)
{
    if(num > 0)
    {
        printnos(num -1);
        printf("%d ",num);
    }
    return;
}
int main()
{
 int num;
 printf("Enter a number: ");
 scanf("%d",&num);
 printnos(num);
 return 0;
}


#include<stdio.h>

int main()
{
    unsigned int num;
    int i;
    scanf("%u", &num);
    for(i=0; i<16; i++)
    {
        printf("%d", (num<<i & 1<<15)?1:0);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    struct value
    {
        int bit1:1;
        int bit3:4;
        int bit4:4;
    }bit;
    printf("%d\n", sizeof(bit));
    return 0;
}


#include<stdio.h>
int sumdig(int);
int main()
{
    int a, b;
    a = sumdig(123);
    b = sumdig(123);
    printf("%d, %d\n", a, b);
    return 0;
}
int sumdig(int n)
{
    int s, d;
    if(n!=0)
    {
        d = n%10;
        n = n/10;
        s = d+sumdig(n);
    }
    else
        return 0;
    return s;
}


#include<stdio.h>
int fun(int, int);
typedef int (*pf) (int, int);
int proc(pf, int, int);

int main()
{
    printf("%d\n", proc(fun, 6, 6));
    return 0;
}
int fun(int a, int b)
{
   return (a==b);
}
int proc(pf p, int a, int b)
{
   return ((*p)(a, b));
}


#include<stdio.h>
int addmult(int ii, int jj)
{
    int kk, ll;
    kk = ii + jj;
    ll = ii * jj;
    return (kk,ll);
}

int main()
{
    int i=3, j=4, k, l;
    k = addmult(i, j);
    l = addmult(i, j);
    printf("%d %d\n", k, l);
    return 0;
}
#include<stdio.h>
int i;
int fun1(int);
int fun2(int);

int main()
{
    extern int j;
    int i=3;
    fun1(i);
    printf("%d,", i);
    fun2(i);
    printf("%d", i);
    return 0;
}
int fun1(int j)
{
    printf("%d,", ++j);
    return 0;
}
int fun2(int i)
{
    printf("%d,", ++i);
    return 0;
}
int j=1;




#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
int main()
{
	int val, option;
	clrscr();
	do
	{
		printf("\n *****MAIN MENU*****");
		printf("\n 1. PUSH");
		printf("\n 2. POP");
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n Enter your option : ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
                printf("\n Enter the number to be pushed on stack :");
                scanf("%d", &val);
                top = push(top, val);
                break;
			case 2:
                top = pop(top);
                break;
			case 3:
                val = peek(top);
                if (val != -1)
                    printf("\n The value at the top of stack is : %d", val);
                else
                    printf("\n STACK IS EMPTY");
                break;
			case 4:
                top = display(top);
                break;
		}
	}while(option != 5);
	getch();
	return 0;
}
struct stack *push(struct stack *top, int val)
{
	struct stack *ptr;
	ptr = (struct stack*)malloc(sizeof(struct stack));
	ptr -> data = val;
	if(top == NULL)
	{
		ptr -> next = NULL;
		top = ptr;
	}
	else
	{
		ptr -> next = top;
		top = ptr;
	}
	return top;
}
struct stack *display(struct stack *top)
{
	struct stack *ptr;
	ptr = top;
	if(top == NULL)
	printf("\n STACK IS EMPTY");
	else
	{
		while(ptr != NULL)
		{
			printf("\n%d", ptr -> data);
			ptr = ptr -> next;
		}
	}
	return top;
}
struct stack *pop(struct stack *top)
{
	struct stack *ptr;
	ptr = top;
	if(top == NULL)
	printf("\n STACK UNDERFLOW");
	else
	{
		top = top -> next;
		printf("\n The value being deleted is : %d", ptr -> data);
		free(ptr);
	}
	return top;
}
int peek(struct stack *top)
{
	if(top==NULL)
	return –1;
	else
	return top–>data;
}



#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *create_all(struct node *);
struct node *display(struct node *);

int main()
{
	int option;

	do{
		printf("\n\n*******MAIN MENU********");
		printf("\n 1: Create a list");
		printf("\n 2: Display the list");
		printf("\n 3: Exit");
		printf("\n\n Enter your option: ");
		scanf("%d",&option);

		switch(option)
		{
			case 1: start = create_all(start);
					printf("\n Hearder list Created");
					break;
			case 2: start = display(start);
					break;
		}
	}while(option != 3);
	return 0;
}

struct node *create_all(struct node *start)
{
	int num;
	struct node *new_node,*ptr;

	printf("\n Enter -1 end");
	printf("\nEnter your node data: ");
	scanf("%d",&num);

	while(num != -1)
	{
		new_node = (struct node *) malloc(sizeof(struct node));
		new_node->data=num;
		new_node->next=NULL;

		if(start == NULL)
		{
			start = (struct node *)malloc(sizeof(struct node));
			start->next = new_node;
		}
		else
		{
			ptr = start;
			while(ptr->next != NULL)
				ptr=ptr->next;

			ptr->next = new_node;
		}

		printf("\n Enter the node data: ");
		scanf("%d",&num);
	}
	return start;
}


struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr->next != NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	return start;
}
#endif


