#include <iostream>

using namespace std;

/*
6.
La Universidad Brian Lara dispone de los registros de todos los cursos que se dictar�n en el a�o actual.
Por cada curso se registr� la
siguiente informaci�n:
N�mero de curso (entero)
N�mero de aula (10, 20, 30, 40, 50, 60, 70, 80, 90, 100)
Turno ('M' - Ma�ana, 'T' - Tarde, 'N' - Noche)
Cantidad de alumnos inscriptos

El fin de la carga de datos se indica con un n�mero de curso igual a cero.
La informaci�n no est� agrupada ni ordenada. Se pide calcular informar:

A) Por cada aula, la cantidad total de cursos que la utilizaron.
B) El promedio de alumnos por turno (se muestra un s�lo resultado).

   (consigna custom)
   Promedio de alumnos de la totalidad de los cursos por turno

C) Por cada aula, la m�xima cantidad de alumnos inscriptos en un curso.
   Por ejemplo, si el aula 50 es utilizada por el curso 1 con 30 alumnos
   y el curso 2 con 75 alumnos. Entonces, la mayor cantidad de alumnos inscriptos para el aula 50 es de 75.
*/



void puntoA(int aulas[], int acuAulas[], int aula){
    for(int i=0; i<10; i++){

        if(aula == aulas[i]){
            acuAulas[i] += 1;
        }
    }
}


int main(){

    int curso, aulas[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, acuAulas[10]={}, aula, alumno;
    int alumnoM=0, alumnoT=0, alumnoN=0, contM=0, contT=0, contN=0;
    char turno;

    cout << "Numero de curso: " << endl;
    cin >> curso;

    while(curso != 0){
        cout << "Turno: " << endl;
        cin >> turno;
        cout << "Alumnos: " << endl;
        cin >> alumno;
        cout << "Aula: " << endl;
        cin >> aula;


        switch(turno){
            case 'M' :

                alumnoM+=alumno;
                contM++;
            break;


            case 'T' :

                alumnoT+=alumno;
                contT++;
            break;

            case 'N' :

                alumnoN+=alumno;
                contN++;
            break;


            default:
            break;

        }


        puntoA(aulas, acuAulas, aula);


        cout << "Numero de curso: " << endl;
        cin >> curso;
    }

    //Punto A
    cout <<"Punto A: " <<endl;
    for(int i=0; i<10; i++){
        cout << "cantidad total de cursos que la utilizaron " << aulas[i] << " " << acuAulas[i] <<endl;
    }

    cout <<endl <<endl;

    cout <<"Punto B: " <<endl;
    cout << "Promedio de alumnos de la totalidad de los cursos por turno Ma�ana: " << alumnoM / contM <<endl;
    cout << "Promedio de alumnos de la totalidad de los cursos por turno Tarde: " << alumnoT / contT <<endl;
    cout << "Promedio de alumnos de la totalidad de los cursos por turno Noche: " << alumnoN / contN <<endl;

    cout <<endl <<endl;


    return 0;
}
