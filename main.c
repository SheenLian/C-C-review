#include <stdio.h>
#include <stdlib.h>
// ********************this is the way

void sheen(int);
void struct_demo(void);
void pointer_demo(void);
void malloc_demo(void);
void pointer_use(void);

int main()
{
    int x;
    char alphabet[] = "Hello human!";
    puts(alphabet);
    printf(">The main function started...\n");
    printf("Enter a number: ");
    scanf("%d",&x);
    sheen(x);

    struct_demo();

    pointer_demo();

    malloc_demo();

    pointer_use();


    printf(">The main function reach its end\n");
    return(0);

}

void sheen(x){
    int i;
    for(i=0;i<=x;i++){
        printf("%d\n",i);
    }
}

void struct_demo(){
    struct date {
        int year;
        int month;
        int day;
    };
    struct person {
      char name[32];
      struct date birthday;
    };
    struct person me;
    strcpy(me.name,"Sheen Lian");
    me.birthday.year = 1990;
    me.birthday.month = 10;
    me.birthday.day = 7;
    printf("My name is %s.\n I was born on %d/%d/%d.\n",me.name,me.birthday.day,me.birthday.month,me.birthday.year);
}

void pointer_demo(){
    int num;
    int *p_num;
    char name[]="Sheen";
    char *p_name;
    num = 666;
    p_num = &num;
    p_name = &name;
    printf("The varaible is located at %p\n",&num);
    printf("The varaible's value is %d\n",num);
    printf("The varaible is located at %p\n",p_num);
    printf("The varaible's value is %d\n",*p_num);
    printf("The varaible 'name' is located at %p\n",p_name);
}

void malloc_demo (){
    int x;
    int *pint;
    pint = malloc(*pint);
    printf(">>enter a integer that will be allocated at %p: ",pint);
    pint = &x;
    scanf("%d",&x);
    printf(">>You entered: %d.\n", *pint);
    free(pint);
}

void pointer_use(){
    char *a[4]= {">>>>hello",">>>>you",">>>>foolish",">>>>human"};
    int i = 0;
    char* cptr;
    for (i=0;i<4;i++){
            cptr = a[i];
      while(*cptr){
        putchar(*cptr);
        cptr++;
      }
      printf("\n");
    }
}
