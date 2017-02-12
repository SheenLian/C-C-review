#include <iostream>
#include <cstring>

void io_demo(void);
void condition_demo(void);
void fuc_call_by_pointer_demo(int,int);
void swap(int,int);
void array_pointer_demo(void);
void string_demo(void);
void array_of_pointer(void);
void struct_demo(void);
void struct_demo_normal(struct person);
void struct_demo_pointer(struct person *);



int main () {
   io_demo();
   std::cout<<"*******************"<<std::endl;
   condition_demo();
   std::cout<<"*******************"<<std::endl;
   fuc_call_by_pointer_demo(6,8);
   std::cout<<"*******************"<<std::endl;
   array_pointer_demo();
   std::cout<<"*******************"<<std::endl;
   string_demo();
   std::cout<<"*******************"<<std::endl;
   array_of_pointer();
   std::cout<<"*******************"<<std::endl;
   struct_demo();
   return 0;
}

/*input output demo with varables*/
void io_demo(){
     std::cout<<"Hello you foolish human-beings."<<std::endl;
    std::cout<<"12/2/2017 "<<" is the date today."<<std::endl;
    std::cout<<">Enter a number: ";
    int number;
    int sqrt_number;
    std::cin>>number;
    sqrt_number = number*number;
    std::cout <<"The square of "<<number<<" is "<< sqrt_number<<std::endl;
    std::cout <<"Now enter 3 integers: ";
    int n1, n2, n3;
    float avg;
    std::cin >> n1 >> n2 >> n3;
    avg = (n1+n2+n3)/3.0;
    std::cout <<"The average of these 3 numbers is: " <<avg<<std::endl;
}

void condition_demo(){
    int x = 5;
    if(x > 10){
        std::cout<<"X is greater than 10"<<std::endl;
    }else if (x>0){
        std::cout<<"X is greater than 0"<<std::endl;
    }else{
        std::cout<<"X is less than 0"<<std::endl;
    }

    char grade = 'A';
    switch(grade){
    case 'A' :
        std::cout<<"Excellenet!"<< std::endl;
        break;
    case 'B' :
        std::cout<<"Not too bad."<< std::endl;
        break;
    case 'C' :
        std::cout<<"Doing OK"<< std::endl;
        break;
    case 'D' :
        std::cout<<"Need more effort."<< std::endl;
        break;
    case 'F' :
        std::cout<<"What a idiot!"<< std::endl;
        break;
    default :
        std::cout<<"Shut up fool."<< std::endl;
    }
}
/*fuction call by poniter*/
void swap(int *x, int *y){
    int value;
    value = *x;
    *x = *y;
    *y = value;
    return;
}

void fuc_call_by_pointer_demo(int a, int b){
    //int a = 6, b = 8;
    std::cout << "Before swap, value of a :" << a << std::endl;
    std::cout << "Before swap, value of b :" << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap, value of a :" << a << std::endl;
    std::cout << "After swap, value of b :" << b << std::endl;
}

void array_pointer_demo(){
    double num [6] = {1.4, 2.3, 4.1, 5, 6};
    for (int i = 0; i < 6; i++){
        std::cout << *(num+i) <<" ";
    }
}

void string_demo(){
    //C style string;
    char str1[32] = "Hello ";
    char str2[32] = "Foolish human.";
    char str3[] = "";
    int len;
    strcpy(str3,str1);
    std::cout<< str3 <<std::endl;
    strcat(str1,str2);
    std::cout<<str1<<std::endl;
    len = strlen(str2);
    std::cout<<"string 2 is "<<len<<" characters long."<<std::endl;
    //C++ string;
    std::string s1 = "Hello", s2 = " foolish human.", s3;
    s3 = s1;
    std::cout<< s3 <<std::endl;
    s3 = s1 + s2;
    std::cout<< s3 <<std::endl;
    len = s2.size();
    std::cout<<"string 2 is "<<len<<" characters long."<<std::endl;
}

void array_of_pointer(){
    int num[3]={1,2,3};
    int *pnum[3];
    for (int i = 0; i<3; i++){
        pnum[i] = &num[i];
    }
    for(int i=0; i<3; i++){
        std::cout<<*pnum[i]<<" is located at"<<pnum[i]<<std::endl;
    }
    //array is different in this case ca array doesn't need ampersand &
    char *name[2]={"Sheen","Lily"};

    for(int i=0; i<2; i++){
        std::cout<<name[i]<<std::endl;
    }

}

struct person{
    char name[32];
    int age;
};

void struct_demo_pointer(struct person *p){
    std::cout<<"Name: "<<p -> name <<std::endl;
    std::cout<<"Age: "<<p -> age <<std::endl;
}
void struct_demo_normal(struct person p){
    std::cout<<"Name: "<<p.name <<std::endl;
    std::cout<<"Age: "<<p.age <<std::endl;
}
void struct_demo(){
    struct person Sheen;
    strcpy(Sheen.name, "Sheen");
    Sheen.age = 27;
    struct_demo_normal(Sheen);
    struct_demo_pointer(&Sheen);
}
