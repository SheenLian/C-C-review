#include <iostream>

using namespace std;



class Box{
public:
    double l, w, h, volume;
    Box(double length, double width, double height){
        l = length;
        w = width;
        h = height;
    }
    double getVolume(){
        volume = this->l*w*h;
        return volume;
    }
    void p_rint(){
        cout<<"This is parent class."<<endl;
    }
};
//Inheritance
class Cubic_Box: public Box{
public:
    Cubic_Box(double length, double width, double height): Box(length, width, height){};
    bool is_cube(){
        if(l==w && w==h){
            cout<<"This box is a cubic box!"<<endl;
            return true;
        }else{
            cout<<"This box is not a cubic box!"<<endl;
            return false;
        }
    }
    //Polymorphism
    void p_rint(){
        cout<<"This is child class."<<endl;
    }
};

int main()
{
    Box box1(2.0, 2.0, 2.0);
    Cubic_Box box2(2.0,3.0,2.0);
    box2.is_cube();
    cout << box1.getVolume() << endl;
    cout << box2.getVolume() << endl;
    box1.p_rint();
    box2.p_rint();
    return 0;
}
