#include <iostream>
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
}profesor;
//Struct para estudiante
struct Estudiante
{
    int Id_estudiante;
    char CUI[13];
    char Nombre[25];
    char Carnet[10];
    /* data */
}estudiante;
//metodo para agregar atrigutos al struct Profesor
void addRegProfesor(){
    fstream archivo("Profesor.bin",ios::binary|ios::out|ios::app);
        archivo.seekp(sizeof(Profesor));
        cout<<"Ingree ID Profesor: ";
        cin>>profesor.Id_profesor;
        archivo.write((char *)&profesor.Id_profesor,sizeof(profesor.Id_profesor));
        cout<<"Ingree CUI Profesor: ";
        cin>>profesor.CUI;
        archivo.write((char *)&profesor.CUI,sizeof(profesor.CUI));
        cout<<"Ingree Nombre Profesor: ";
        cin>>profesor.Nombre;
        archivo.write((char *)&profesor.Nombre,sizeof(profesor.Nombre));
        cout<<"Ingree Curso Profesor: ";        
        cin>>profesor.Curso;
        archivo.write((char *)&profesor.Curso,sizeof(profesor.Curso));
}
//metodo para agregar atributos al struct Estudiantes
void addRegEstudiante(){
fstream archivo("Estudiante.bin",ios::binary|ios::out|ios::app);
        archivo.seekp(sizeof(Estudiante));
        cout<<"Ingrese ID Estudiante: ";
        cin>>estudiante.Id_estudiante;
        archivo.write((char *)&estudiante.Id_estudiante,sizeof(Estudiante));
        cout<<"Ingree CUI Estudiante: ";
        cin>>estudiante.CUI;
        archivo.write((char *)&estudiante.CUI,sizeof(Estudiante));
        cout<<"Ingree Nombre Estudiante: ";
        cin>>estudiante.Nombre;
        archivo.write((char *)&estudiante.Nombre,sizeof(Estudiante));
        cout<<"Ingree Carnet del Estudiante: ";        
        cin>>estudiante.Carnet;
        archivo.write((char *)&estudiante.Carnet,sizeof(Estudiante));
        archivo.close();
}
//mostrar lista de estudiantes()
void viwRegProfesor(){
    ifstream archivo("Profesor.bin" );
    if(archivo==NULL){   

    }

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

       
        Estudiante *estudiante = new Estudiante;


        switch (select)
        {                               
        case 1 ://INGRESAR DATOS STRUCT PROFESOR
            addRegProfesor();           
            break;
        case 2://INGRESAR DATOS STRUCT ESTUDIANTE
            addRegEstudiante();
            break;
        case 3:
            cout<<"ID: "<<profesor.Id_profesor<<endl;
            cout<<"CUI: "<<profesor.CUI<<endl;
            cout<<"NOMBRE: "<<profesor.Nombre<<endl;
            cout<<"CURSO: "<<profesor.Curso<<endl;
                        
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