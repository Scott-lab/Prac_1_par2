#include <iostream>
using namespace std;
class GatoSimple
{
public:
GatoSimple();
~GatoSimple();
private:
int suEdad;
};
GatoSimple::GatoSimple()
{
cout << "Se llamo al constructor" << endl;
suEdad = 1;
}
GatoSimple::~GatoSimple(){
cout << "Se llamo al destructor" << endl;
}
int main(){
cout << "GatoSimple Pelusa ... " << endl;
GatoSimple Pelusa;
cout << "GatoSimple *apFelix = new GatoSimple" << endl;
GatoSimple * apFelix = new GatoSimple;
cout << "delete apFelix..." << endl;
delete apFelix;
cout << "Saliendo, observe como se va Pelusa... " << endl;
return 0;
}
