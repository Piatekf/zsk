#include <iostream>

using namespace std;

class Worker{
//deklaracja zmiennych cz³onkowskich
    public:
    string name="Leosia ssie";
    string surname;

//definicja funkcji cz³onkowskiej
    void showData(){
    cout<<"imiê";
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
