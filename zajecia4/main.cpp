#include <iostream>

using namespace std;

class rectangle{
    public:
    float width;
    float height;

    float showArea();
    float showPerimeter();
    void showAlldata();
};
    float rectangle::showArea(){
       return width * height;
    };
    float rectangle::showPerimeter(){
        return 2 * width + 2 * height;
    };
    void rectangle::showAlldata(){
        cout<<"D³ugoœci boków: "<<width<<" "<<height<<" Pole: "<<rectangle::showArea()<<"Obwod: "<<rectangle::showPerimeter();

    };

int main()
{
    setlocale(LC_CTYPE,"polish");
    rectangle prostokat;

    prostokat.width=5;
    prostokat.height=5;

    prostokat.showAlldata();
    return 0;
}
