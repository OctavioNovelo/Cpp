#include <iostream>

using namespace std;


int alumnos = 10;
int materias = 6;
int **calificaciones = new int*[alumnos];


int promedio[10];
int *promedios = promedio;
int prom = 0;
int repro = 0;

void Generar_calificaciones ()
{
    for (int i = 0; i < alumnos; i++)
    {
        calificaciones[i] = new int[materias];
    }

    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < materias; j++)
        {
            calificaciones[i][j] = (rand() % 7 + 4);
        }
    }
}

void Mostrar_calificaciones()
{
    for (int i = 0; i < alumnos; i++)
    {
        cout << "Alumno # " << i+1 << "\n";
        for (int j = 0; j < materias; j++)
        {
            cout << calificaciones[i][j] << " ";
        }
        cout << endl;
    }
}

void Calcular_promedio()
{
    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < materias; j++)
        {
            prom += calificaciones[i][j];
        }
        promedios[i] = prom/6; //Promedios apunta al vector promedio
        prom = 0;
    }
    
    for (int i = 0; i < alumnos; i++)
    {
        cout << "Alumno # " << i+1 << " tiene un promedio de " << promedios[i] << "\n";
    }
}

void Mostrar_Candidatos()
{
    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < materias; j++)
        {
            if (calificaciones[i][j] <= 5){
                repro = 1;
            }
            if (promedios[j] >= 8 && repro == 0)
            {
                cout << "Alumno # " << i+1 << " es candidato a beca con un promedio de " << promedios[i] << "\n";
            }
        }
        repro = 0;
    }
}

void Mostrar_reprobados()
{
    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < materias; j++)
        {
            if (calificaciones[i][j] <= 5)
            {
                repro += 1;
            }
        }
        if (repro >= 2)
        {
            cout << "Alumno # " << i+1 << " NO es candidato a beca\n";
        }
    }
}

int main()
{
    srand(time(0));
    Generar_calificaciones();
    Mostrar_calificaciones();
    Calcular_promedio();
    Mostrar_Candidatos();
    Mostrar_reprobados();
}