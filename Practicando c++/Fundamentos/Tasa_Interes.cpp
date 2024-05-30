//tasa de interes

#include <iostream>
#include <cmath>
using namespace std;

double Interes_simple ()
{
    double vf, vp, r;
    int n, opcion;
    do
    {
    
    
    cout<<"Ingrese monto a invertir\n";
    cin>> vp;
    cout<<"Ingrese tasa de interes anual\n";
    cin>> r;
    cout<<"Ingrese anios de la inversion\n";
    cin>> n;

    r=r/100; 

    for (int i = 1; i <= n; i++)
    {
        vf=vp*(1+r*i);

        cout<<"Capital inicial: "<< vp <<"     Valor obtenido por el "<< i <<" anio: "<< (vf-vp) <<"     Valor futuro: "<< vf << endl;
    }

    
        cout << "Que desea realizar?" << endl;
        cout << "1. Regresar al menu principal" << endl;
        cout << "2. Salir" << endl;
        cin >> opcion;

        if (opcion == 2) 
        {
            cout<<"Adiosssssssssssss...";
            exit(0);
        }
    
    } while (opcion != 1);
    
    

    return 0;
}

double Interes_compuesto ()
{
    double vf, vp, r;
    int n, opcion;

    do
    {
    
    cout<<"Ingrese monto a invertir\n";
    cin>> vp;
    cout<<"Ingrese tasa de interes anual\n";
    cin>>r;
    cout<<"Ingrese anios de la inversion\n";
    cin>>n;

    r=r/100;

    for (int i = 1; i <= n; i++)
    { 
        vf=vp*pow(1+r,i);
        cout<<"Capital inicial: "<< vp <<"     Valor obtenido por el "<< i <<" anio: "<< (vf-vp) <<"     Valor futuro: "<< vf << endl;
    }

    cout << "Que desea realizar?" << endl;
        cout << "1. Regresar al menu principal" << endl;
        cout << "2. Salir" << endl;
        cin >> opcion;

        if (opcion == 2) 
        {
            cout<<"Adiosssssssssssss...";
            exit(0);
        }
    
    } while (opcion != 1);


    return 0;
}


int main ()
{
    
    int opcion;

    do
    {
        cout<<"Que desea realizar: "<<endl;
            cout<<"1. Calcular interes simple"<<endl;
            cout<<"2. Calcular interes compuesto"<<endl;
            cout<<"3. Salir"<<endl;
            cin>> opcion;

        if (opcion > 3)
        {
            cout<<"Invalido, intentelo de nuevo"<<endl;
        }
        

        switch (opcion)
        {
        case 1:
            Interes_simple();     
            break;
            
        case 2: 
            Interes_compuesto();
            break;;

        case 3:
        cout<<"Adios";
        
        default:
            break;
        }
    } while (opcion != 3);
        
    return 0;
}

