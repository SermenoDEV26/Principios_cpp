#include <iostream>
using namespace std;

 int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int multiplicacion(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    if (b!= 0)
    {
        return a/b;
    }
    else
    {
        cout<<"No se puede realizar la division con 0";
    }

}


int main ()
{
    int a, b, opcion;

    cout<<"ingrese el numero a"<<endl;
    cin >> a;
    cout<<"ingrese el numero b"<<endl;
    cin >> b;

    
    do
    {
    cout<<"Elija una opcion a realizar"<<endl;
    cout<<"1. Hacer suma"<<endl;
    cout<<"2. Hacer resta"<<endl;
    cout<<"3. Hacer multiplicacion"<<endl;
    cout<<"4. Hacer division"<<endl;
    cin >> opcion;

    if (opcion > 4) 
        {
            cout << "Opcion invalida, por favor intente de nuevo." << endl;
        }


    } while (opcion>4);

    
        switch (opcion)
    {
        //respuesta
    int re;

    case 1:
        re=suma(a,b);
        cout<<"el resultado es\n"<< re <<endl;
        break;
    case 2:
        re=resta(a,b);
        cout<<"el resultado es"<<re<<endl;
        break;
    case 3:
        re=multiplicacion(a,b);
        cout<<"el resultado es"<<re<<endl;
        break;
    case 4:
        re=division(a,b);
        cout<<"el resultado es"<<re<<endl;
        break;

    
    default:
        break;
    }
    
    


return 0;
}