#include<iostream>

using namespace std;

void hasil_saldo(int a);
void hasil_transfer(int a, int b);
void hasil_tarik(int a, int b);

main() {
    char pilihan;
    int 
    pilih,
    pin = 12345,
    saldo = 1000000,
    transfer,
    tarik_tunai;

    password:
    system("cls");
                             
    cout<<"Masukan PIN anda: "; cin>>pin;

    if(pin == 12345) {
        menu:
        system("cls");

        cout<<"Pilih Menu: \n";
        cout<<"1. Cek Saldo \n";
        cout<<"2. Transfer \n";
        cout<<"3. Tarik Tunai \n";
        cout<<"4. exit \n";

        cout<<"Pilih: "; cin>>pilih;

        if(pilih == 1) {
            
            hasil_saldo(saldo);

        }else if(pilih == 2) {

            cout<<"Masukan nominal: "; cin>>transfer;
            hasil_transfer(saldo, transfer);

        }else if(pilih == 3) {
            tarik:
            system("cls");

            cout<<"Masukan nominal: "; cin>>tarik_tunai;
            hasil_tarik(saldo, tarik_tunai);

        }else if(pilih == 4) {
                exit(0);
        }else {
            cout<<"tidak ada \n";
            cout<<"Apakah ingin kembali ke menu: [Y/T] \n"; cin>>pilihan;
            if(pilihan == 'Y') {
                goto menu;
            }else{
                exit(0);
            }
        }        
    }else{
        cout<<"Pin Salah \n";
        goto password;
    }
}

void hasil_saldo(int saldo) {
    cout<<"Saldo: "<<saldo;
}

void hasil_transfer(int saldo, int transfer) {
    saldo = saldo - transfer;
    if(transfer >= saldo) {
        cout<<"Saldo tidak cukup \n";
    }else{
        cout<<"saldo anda: "<<saldo<<endl;
    } 
}

void hasil_tarik(int saldo, int tarik_tunai) {
    tarik_tunai = saldo - tarik_tunai;
    if(tarik_tunai >= saldo) {
        cout<<"Saldo tidak cukup \n";
    }else{
        cout<<"saldo anda: "<<saldo<<endl;
    } 
}

            
