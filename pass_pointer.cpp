#include <iostream>

using namespace std;


void print_array(int* arry, int arrySize);
void print_int(int* integer);



int main()
{
    int arry[4]={1,2,3,4};
    int b = 4;
    print_int(&b);
    cout<<arry<<endl;
    print_array(arry,4);
    return 0;
}


void print_array(int* array, int arrySize){
    for (int i=0; i<arrySize; i++){
        cout<<">The "<<i<<"th element is: "<<*(array+i)<<endl;
        cout<<">The "<<i<<"th element is located at: "<<array+i<<endl;
    }
}

void print_int(int* integer){
    cout<<integer<<endl;
    cout<<*integer<<endl;
}
