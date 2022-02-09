#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

//metodo para el menu principal    
void mainMenu(){
cout<<"1. Registro Profesor"<<endl;
cout<<"2. Registro Estudiante"<<endl;
cout<<"3. Ver Registro"<<endl;
cout<<"4. Salir"<<endl;
}

//Struct para los atributos de Profesor
struct Profesor
{
    int Id_profesor;
    char CUI[13];
    char Nombre[25];
    char Curso[25];
    /* data */
};
//Struct para estudiante
struct Estudiante
{
    int Id_estudiante;
    char CUI[13];
    char Nombre[25];
    char Carnet[25];
    /* data */
};

//agregar nuevo campo para Profesor
void agregarProfesor(){
        ofstream archivo;
        archivo.open("Profesor.bin",std::ofstream::out | ios::binary);
        
        

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

        Profesor *profesor = new Profesor;
        Estudiante *estudiante = new Estudiante;


        switch (select)
        {
                                       

        case 1 ://INGRESAR DATOS STRUCT PROFESOR
        
            
            
            
            break;
        case 2://INGRESAR DATOS STRUCT ESTUDIANTE
            cout<<"Ingrese Id del Estudiante : ";
            cin>>estudiante->Id_estudiante;
            cout<<"Ingrese CUI del Estudiante : ";
            cin>>estudiante->CUI;
            cout<<"Ingrese Nombre del Estudiante : ";
            cin>>estudiante->Nombre;
            cout<<"Ingrese Numero de Carnet : ";
            cin>>estudiante->Carnet;
            cout<<endl;
            cout<<"***DATOS REGISTRADOS***"<<endl;
 
            break;
        case 3:
            
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