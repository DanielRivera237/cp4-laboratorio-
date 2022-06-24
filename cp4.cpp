#include<iostream>
using namespace std;

  int opcion, pago, numero, informacion;
    string continuar;

void menu(){
    cout <<"BIENVENIDO A CALL CENTER UCA"<<endl;
    cout <<"1) Pagar factura"<<endl;
    cout <<"2) Solicitud de cambio de numero telefonico"<<endl;
    cout <<"3) Informacion de paquetes"<<endl;

}


int pagar(){
    cout <<"Cuanto va a pagar?: ";
     cin >> pago;
    if(pago == 0){
    cout <<"Usted no ha pagado su cuenta"<<endl;
    }else{
            cout << "Pago su factura de manera exitosa"<<endl;
    }
}

int numeroNuevo(){
    cout <<"Que numero de telefono desea cambiar? por favor ingreselo";
    cin >> numero;
    cout <<"El nuevo numero telefonico es: ";
    cout << numero;

}

int informacionDePaquetes(){
    cout <<"Informacion de paquetes";
    cout <<"1) Plan internet\n";
    cout <<"2) Plan cable\n";
    cout <<"3) Plan telefonico/movil\n";
    cin >> informacion;
    if(informacion == 1){
        cout <<"Plan internet -> 30mpbs, 40mpbs, 60mpbs, 120mpbs\n";
        }else if(informacion == 2){
        cout <<"Plan cable -> 20 canales + amazon + 1 mes de acceso a netflix + 15 dias de Disney plus ";
        }else if(informacion == 3){
        cout <<"Plan telefonico/movil -> Saldo por un mes, datos moviles para whatsapp y facebook \n";
         }
}

int main(){

    do{
    system("cls");
    menu();
    cin >> opcion;
        switch(opcion){
            case 1:
                pagar();
            break;
            case 2:
                numeroNuevo();
            break;
            case 3:
                informacionDePaquetes();
            break;
            default: "ERROR: Opcion no valida/n";
        }
        cout <<"\nDesea realizar otro servicio? (S o N):";
        cin >> continuar;
       
    } while (continuar == "S");

    return 0;

}