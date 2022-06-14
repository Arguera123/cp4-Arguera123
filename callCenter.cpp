#include <iostream> 

using namespace std;

int main(){

    int opcion, opcion2, pin, servicio;
    float pago, deuda = 24.59, deuda1, cambio;
    string num, newnum;

    do{
        cout << "--------------------------------------------" << endl;
        cout << "BIENVENIDO A MOVISTAR EL SALVADOR" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "1. Pago de factura" << endl;
        cout << "2. Solicitud de cambio de numeroe telefono" << endl;
        cout << "3. Contratar mas servicios"  << endl;
        cout << "4. Salir"  << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        while (opcion > 4 || opcion < 1){
            cout << "--------------------------------------------" << endl;
            cout << "Seleccione una opcion" << endl;
            cin >> opcion;
        }

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

            while (opcion2 > 3 || opcion2 < 1){
            cout << "--------------------------------------------" << endl;
            cout << "Seleccione una opcion" << endl;
            cin >> opcion;
            }

            switch (opcion2)
            {
            case 1:
                cout << "--------------------------------------------" << endl;
                cout << "Ingrese la cantidad a pagar" << endl;
                cin >> pago;

                if (pago > deuda){

                    cambio = pago - deuda;
                    cout << "Su cambio es de: " << cambio << endl;
                }
                else if (pago < deuda){
                    
                    deuda1 = deuda - pago;
                    cout << "--------------------------------------------" << endl;
                    cout << "Usted sigue debiendo: " << deuda1 << endl;
                }
                else{
                    cout << "--------------------------------------------" << endl;
                    cout << "Deuda saldada";
                }
                break;
            
            case 2:
                cout << "--------------------------------------------" << endl;
                cout << "Ingrese la cantidad a pagar" << endl;
                cin >> pago;

                if (pago > deuda){

                    cambio = pago - deuda;
                    cout << "Su cambio es de: " << cambio << endl;
                }
                else if (pago < deuda){
                    
                    deuda1 = deuda - pago;
                    cout << "--------------------------------------------" << endl;
                    cout << "Usted sigue debiendo: " << deuda1 << endl;
                }
                else{
                    cout << "--------------------------------------------" << endl;
                    cout << "Deuda saldada";
                }
                break;
            
            case 3:
                cout << "--------------------------------------------" << endl;
                cout << "Ingrese la cantidad a pagar" << endl;
                cin >> pago;

                if (pago > deuda){

                    cambio = pago - deuda;
                    cout << "Su cambio es de: " << cambio << endl;
                }
                else if (pago < deuda){
                    
                    deuda1 = deuda - pago;
                    cout << "--------------------------------------------" << endl;
                    cout << "Usted sigue debiendo: " << deuda1 << endl;
                }
                else{
                    cout << "--------------------------------------------" << endl;
                    cout << "Deuda saldada";
                }
                break;
            

            default:
                break;
            }
            
            break;

        case 2: 
            cout << "--------------------------------------------" << endl;
            cout << "Ingrese su numero de telefono actual" << endl;
            cin >> num;

            while (num != "1234-5678"){
                cout << "--------------------------------------------" << endl;
                cout << "Numero inexistente. Vuelva a escribirlo" << endl;
                cout << num;
            }

            cout << "--------------------------------------------" << endl;
            cout << "Ingrese su pin" << endl;
            cin >> pin;

            while (pin != 1234){

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

            while (servicio > 3 || servicio < 1){
            cout << "--------------------------------------------" << endl;
            cout << "Seleccione una opcion" << endl;
            cin >> servicio;
            }
            
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
    }while(opcion !=  4);

    return 0;
}