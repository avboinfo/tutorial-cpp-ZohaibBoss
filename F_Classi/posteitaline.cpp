#include <iostream>

class poste {
private:
    char serv;
    char nuovoCliente;

public:
    int numeroClienteTotali = 0;
    int numeroClienteSpedizione = 0;
    int numeroClienteRicezione = 0;
    int numeroClienteFinanziario = 0;

    void motivoPoste() {
        std::cout << "Benvenuto alle poste di San Donato e San Vitale" << std::endl;
        std::cout << "Servizi disponibili: " << std::endl;
        std::cout << "[]SPEDIZIONE" << std::endl;
        std::cout << "[]RICEZIONE" << std::endl;
        std::cout << "[]FINANZIARIO" << std::endl;
    }

    void servizio() {
        std::cout << std::endl;
        std::cout << "Per prenotare SPEDIZIONE scrivere s" << std::endl;
        std::cout << "Per prenotare RICEZIONE scrivere r" << std::endl;
        std::cout << "Per prenotare FINANZIARIO scrivere f" << std::endl;
        std::cout << "PRENOTA: ";
        std::cin >> serv;
    }

    void numeroCliente(){
        generaNumeroCliente();        
    }

    void arrivoNuovoCliente(){
        std::cout <<"Arrivo nuovo cliente: S o N --> ";
        std::cin >> nuovoCliente; 
        if(nuovoCliente ==  'S'){
            servizio();
            generaNumeroCliente();
        }
        else{
            exit(-1);
        }
    }

    void generaNumeroCliente() {
        if (serv == 's') {
            numeroClienteSpedizione++;
            std::cout << "Cliente, il tuo numero per SPEDIZIONE è S" << numeroClienteSpedizione << std::endl;
        }
        else if (serv == 'r') {
            numeroClienteRicezione++;
            std::cout << "Cliente, il tuo numero per RICEZIONE è R" << numeroClienteRicezione << std::endl;
        }
        else if (serv == 'f') {
            numeroClienteFinanziario++;
            std::cout << "Cliente, il tuo numero per FINANZIARIO è F" << numeroClienteFinanziario << std::endl;
        }
        else {
            std::cout << "SERVIZIO INVALIDO" << std::endl;
        }
    }

    void clientiAttesa(){
        std::cout << "CLIENTI: " << std::endl;
        std::cout << "SPEDIZIONE--> " << numeroClienteSpedizione << std::endl;
        std::cout << "RICEZIONE--> " << numeroClienteRicezione << std::endl;
        std::cout << "FINANZIARIO--> " << numeroClienteFinanziario << std::endl;
    }

};

int main() {
    poste prova;
    prova.motivoPoste();
    prova.arrivoNuovoCliente();
    prova.servizio();
    
    prova.clientiAttesa();

    return 0;
}