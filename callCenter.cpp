#include <iostream>

using namespace std;

int validacion4(int x);
int validacion3(int y);
float pagos(float pa, float deu, float ca, float deu1);

int main()
{

    int opcion, opcion2, pin, servicio;
    float pago, deuda = 24.59, deuda1, cambio;
    string num, newnum;

    do
    {
        cout << "--------------------------------------------" << endl;
        cout << "BIENVENIDO A MOVISTAR EL SALVADOR" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "1. Pago de factura" << endl;
        cout << "2. Solicitud de cambio de numeroe telefono" << endl;
        cout << "3. Contratar mas servicios" << endl;
        cout << "4. Salir" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        validacion4(opcion);

        switch (opcion)
        {
        case 1:
            cout << "--------------------------------------------" << endl;
            cout << "Ingrese la deuda que quiere pagar" << endl;
            cout << "--------------------------------------------" << endl;
            cout << "1. Telefono " << endl;
            cout << "2. Cable" << endl;
            cout << "3. Internet" << endl;
            cout << "--------------------------------------------" << endl;
            cin >> opcion2;

            validacion3(opcion2);

            switch (opcion2)
            {
            case 1:
                cout << "--------------------------------------------" << endl;
                cout << "Ingrese la cantidad a pagar" << endl;
                cin >> pago;
                pagos(pago, deuda, cambio, deuda1);
                break;

            case 2:
                cout << "--------------------------------------------" << endl;
                cout << "Ingrese la cantidad a pagar" << endl;
                cin >> pago;
                pagos(pago, deuda, cambio, deuda1);
                break;

            case 3:
                cout << "--------------------------------------------" << endl;
                cout << "Ingrese la cantidad a pagar" << endl;
                cin >> pago;
                pagos(pago, deuda, cambio, deuda1);
                break;

            default:
                break;
            }

            break;

        case 2:
            cout << "--------------------------------------------" << endl;
            cout << "Ingrese su numero de telefono actual" << endl;
            cin >> num;

            while (num != "1234-5678")
            {
                cout << "--------------------------------------------" << endl;
                cout << "Numero inexistente. Vuelva a escribirlo" << endl;
                cout << num;
            }

            cout << "--------------------------------------------" << endl;
            cout << "Ingrese su pin" << endl;
            cin >> pin;

            while (pin != 1234)
            {

                cout << "--------------------------------------------" << endl;
                cout << "Pin incorrecto. Ingrese su pin otra vez" << endl;
                cin >> pin;
            }

            cout << "--------------------------------------------" << endl;
            cout << "Ingrese su nuevo numero de telefono" << endl;
            cin >> newnum;
            cout << "--------------------------------------------" << endl;
            cout << "Su numero ha sido cambiado correctamente a: " << newnum << endl;
            cout << "--------------------------------------------" << endl;

            break;

        case 3:
            cout << "--------------------------------------------" << endl;
            cout << "Ingrese el servicio que quiere contratar" << endl;
            cout << "--------------------------------------------" << endl;
            cout << "1. Telefono" << endl;
            cout << "2. Cable" << endl;
            cout << "3. Internet" << endl;
            cout << "--------------------------------------------" << endl;
            cin >> servicio;

            validacion3(servicio);

            switch (servicio)
            {
            case 1:
                cout << "------------------------------------------------------------" << endl;
                cout << "Usted ha contratado correctamente los servicios de TELEFONO" << endl;
                cout << "------------------------------------------------------------" << endl;
                break;
            case 2:
                cout << "------------------------------------------------------------" << endl;
                cout << "Usted ha contratado correctamente los servicios de CABLE" << endl;
                cout << "------------------------------------------------------------" << endl;
                break;
            case 3:
                cout << "------------------------------------------------------------" << endl;
                cout << "Usted ha contratado correctamente los servicios de INTERNET" << endl;
                cout << "------------------------------------------------------------" << endl;
                break;

            default:
                break;
            }

        case 4:
            cout << "Gracias por usar nuestro servicio" << endl;
            break;

        default:
            break;
        }
    } while (opcion != 4);

    return 0;
}

int validacion4(int x)
{
    while (x > 4 || x < 1)
    {
        cout << "--------------------------------------------" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> x;
    }
}

int validacion3(int y)
{
    while (y > 3 || y < 1)
    {
        cout << "--------------------------------------------" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> y;
    }
}

float pagos(float pa, float deu, float ca, float deu1)
{
    if (pa > deu)
    {

        ca = pa - deu;
        cout << "Su cambio es de: " << ca << endl;
    }
    else if (pa < deu)
    {

        deu1 = deu - pa;
        cout << "--------------------------------------------" << endl;
        cout << "Usted sigue debiendo: " << deu1 << endl;
    }
    else
    {
        cout << "--------------------------------------------" << endl;
        cout << "Deuda saldada";
    }
}