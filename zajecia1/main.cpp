#include <iostream>

using namespace std;

class Worker{
//deklaracja zmiennych cz�onkowskich
    public:
    string name="Leosia ssie";
    string surname;

//definicja funkcji cz�onkowskiej
    void showData(){
    cout<<"imi�";
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
