#include <iostream>

using namespace std;

class Worker{
//deklaracja zmiennych członkowskich
    public:
    string name="Leosia ssie";
    string surname;

//definicja funkcji członkowskiej
    void showData(){
    cout<<"imię";
  }
};

int main()
{
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;

    cout<<pracownik.name;
    pracownik.showData();
    return 0;
}
