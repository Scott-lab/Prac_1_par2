#include <iostream>
using namespace std;
class GatoSimple{
public:
GatoSimple(){
suEdad = 2;
}
~GatoSimple(){}
int ObtenerEdad()const{
return suEdad;
}
void AsignarEdad(int edad){
suEdad = edad;
}
private:
int suEdad;
};
int main(){
GatoSimple * Pelusa = new GatoSimple;
cout << "Pelusa tiene " << Pelusa->ObtenerEdad();
cout << " anios de edad" << endl;
Pelusa->AsignarEdad(5);
cout << "Pelusa tiene " << Pelusa->ObtenerEdad();
cout << " anios de edad" << endl;
delete Pelusa;
return 0;
}
