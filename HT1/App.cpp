#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//metodo para el menu principal    
void mainMenu(){
cout<<"1. Registro Profesor"<<endl;
cout<<"2. Registro Estudiante"<<endl;
cout<<"3. Ver Registro"<<endl;
cout<<"4. Salir"<<endl;
}

//Inicio del programa
int main(){
    int select;
    bool bsalir =false;

//dowhile que manejara el flujo de la app
do{
    
        mainMenu();
        cout<<"\nIngrese una opicion: ";
        cin>>select;
        switch (select)
        {
        case 1 :
            cout<<"PRESIONO 1"<<endl;        
            break;
        case 2:
            cout<<"PRESIONO 2"<<endl;
            break;
        case 3:
            cout<<"PRESIONO 3"<<endl;
            break;
        case 4:
            bsalir=true;
        break;
        
        default:
            cout<<"Opcion no valida"<<endl;           
        }
    

}while (bsalir!=true);

return 0;

}