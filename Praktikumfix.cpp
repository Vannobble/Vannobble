#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string username, password;
    int role;
    string barang[10] = {"Iphone 69 Pro Max", "Laptop Intel Zeus", "Speaker JBL ",};
    int harga[10] = {25000000, 100000000, 2000000,};
    int stok[10] = {50,50,50,};
    int pilihan, jumlah,pesanan;


    AWAL :

    cout<<"================================================================================"<<endl;
    cout<<"                                             "<<endl;
    cout<<"                  Selamat Datang di Toko Elektronik" <<endl;
    cout<<"                            Toko Pasti Bisa " <<endl;
    cout<<"                                             "<<endl;
    cout<<"================================================================================"<<endl;
    cout<<"Menjual Beragam Barang Elektronik Untuk Memenuhi Kebutuhan Sehari-hari"<<endl;
    cout<<"Menyediakan :"<<endl;
    cout<<"                                             "<<endl;
    cout<<"1. "<< barang [0] << "   " <<  harga [0] <<endl;
    cout<<"2. "<< barang [1] << "   " <<  harga [1] <<endl;
    cout<<"3. "<< barang [2] << "   " <<  harga [2] <<endl;
    cout<<"4. "<< barang [3] << "   " <<  harga [3] <<endl;
    cout<<"5. "<< barang [4] << "   " <<  harga [4] <<endl;
    cout<<"                                            "<<endl;
    cout<<" Tunggu apa lagi?, Mari Datang dan nikmati berbelanja dari toko kami"<<endl;
    cout<<"================================================================================"<<endl;
    cout<<"Sebelum Masuk, silahkan autentikasi terlebih dahulu yaa maniesss"<<endl;
    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;
    cout << "Pilih Role Anda "<<endl;
    cout << "1. Penjual"<<endl;
    cout << "2. Pembeli "<<endl;
    cin >> role;
    system("cls");

    if (role == 1) {
        //Verfikasi penjual
        if (username == "hansel" , "sabeth" && password == "tokopastibisa") {
            PENJUAL :
            cout << "Verifikasi berhasil. Selamat datang,"<< username << " yang keren!" << endl;
            cout<<"================================================================================"<<endl;
            cout<< "Mau Ngapain hari ini?  "<<endl;
            cout<<"1. Nambah Barang "<<endl;
            cout<<"2. Ubah Harga Barang, Stok, Harga"<<endl;
            cout<<"9. Kembali ke Opsi Penjual"<<endl;
            cout<<"0. Kembali ke Opsi Awal"<<endl;
            cin>>pilihan;
             system("cls");
            if (pilihan == 1 ){
                cout<<"Masukkan nama barang: "<<endl;
                cin >> barang [3];
                cout<<"Stoknya berapa banyak: "<<endl;
                cin>>stok[3];
                cout<<"Terus mau jual berapa: "<<endl;
                cin>>harga[3];
                system("cls");
                cout<<"Barang sudah ditambahkan di index dengan ketentuan: "<<endl;
                cout<<"Nama barang : "<<barang[3]<<endl;
                cout<<"Stok tersedia :"<<stok[3]<<endl;
                cout<<"Harga barang : "<<harga[3]<<endl;
                system ("cls");
                cout<<"================================================================================"<<endl;
                cout<< " Apakah ingin menambahkan barang baru lagi ? "<<endl;
                cout<< " 1. Ya"<<endl;
                cout<< " 2. Tidak"<<endl;
                cin >> pilihan;
                system("cls");
                if ( pilihan == 1){
                    cout<<"Masukkan nama barang: "<<endl;
                    cin >> barang [4];
                    cout<<"Stoknya berapa banyak: "<<endl;
                    cin>>stok[4];
                    cout<<"Terus mau jual berapa: "<<endl;
                    cin>>harga[4];
                    system("cls");
                    cout<<"Barang sudah ditambahkan di index dengan ketentuan: "<<endl;
                    cout<<"Nama barang : "<<barang[4]<<endl;
                    cout<<"Stok tersedia :"<<stok[4]<<endl;
                    cout<<"Harga barang : "<<harga[4]<<endl;
                    goto PENJUAL;
                } else if (pilihan == 2){
                    goto PENJUAL;
                }
            } else if (pilihan == 2){
                cout<<"Pilih yang mau diubah : "<<endl;
                cout<<"1. Ubah Nama Barang "<<endl;
                cout<<"2. Ubah Harga Barang"<<endl;
                cout<<"3. Ubah Jumlah Stok"<<endl;
                cout<<"9. Kembali ke Opsi Penjual"<<endl;
                cout<<"0. Kembali ke Opsi Awal"<<endl;
                cin >>pilihan;
                system("cls");
                if (pilihan == 1){
                    cout<<" Mau Ubah Barang yang mana ? "<<endl;
                    cout<<"1. "<< barang [0] <<endl;
                    cout<<"2. "<< barang [1] <<endl;
                    cout<<"3. "<< barang [2] <<endl;
                    cout<<"4. "<< barang [3] <<endl; 
                    cout<<"5. "<< barang [4] <<endl;
                    cin >> pilihan;
                    system("cls");
                    if (pilihan == 1) {
                        cout << "Barang yang ingin anda ubah adalah : " << barang [0] <<endl;
                        cout << " Inputkan Nama Barang Baru : ";
                        cin >> barang[0];  
                        cout << " Nama Barang Sudah berubah pada Index"<<endl;
                        system("cls");
                        goto PENJUAL; 
                    }else if (pilihan == 2) {
                        cout << "Barang yang ingin anda ubah adalah : " << barang [1] <<endl;
                        cout << " Inputkan Nama Barang Baru : ";
                        cin >> barang[1];   
                        cout << " Nama Barang Sudah berubah pada Index"<<endl;
                         system("cls"); 
                        goto PENJUAL; 
                    }else if (pilihan == 3) {
                        cout << "Barang yang ingin anda ubah adalah : " <<barang [2] <<endl;
                        cout << " Inputkan Nama Barang Baru : ";
                        cin >> barang[2];   
                        cout << " Nama Barang Sudah berubah pada Index"<<endl;
                         system("cls"); 
                        goto PENJUAL; 
                    }else if (pilihan == 4) {
                        cout << "Barang yang ingin anda ubah adalah : " <<barang [3] <<endl;
                        cout << " Inputkan Nama Barang Baru : ";
                        cin >> barang[3];   
                        cout << " Nama Barang Sudah berubah pada Index"<<endl;
                         system("cls");
                         goto PENJUAL;  
                    }else if (pilihan == 5) {
                        cout << "Barang yang ingin anda ubah adalah : " <<barang [4] <<endl;
                        cout << " Inputkan Nama Barang Baru : ";
                        cin >> barang[4];   
                        cout << " Nama Barang Sudah berubah pada Index"<<endl;
                         system("cls");
                         goto PENJUAL;  
                    }
                } else if (pilihan == 2){
                    cout<<" Mau Ubah  Harga Barang yang mana ? "<<endl;
                    cout<<"1. "<< harga [0] <<endl;
                    cout<<"2. "<< harga [1] <<endl;
                    cout<<"3. "<< harga [2] <<endl;
                    cout<<"4. "<< harga [3] <<endl;
                    cout<<"5. "<< harga [5] <<endl; 
                    cin >> pilihan;
                    system("cls");
                    if (pilihan == 1) {
                        cout << harga[0] <<endl;
                        cout << " Inputkan Harga Barang Baru : ";
                        cin >> harga[0];  
                        cout << " Harga Barang Sudah berubah pada Index"<<endl;
                        goto PENJUAL;  
                    }else if (pilihan == 2) {
                        cout << harga [1] <<endl;
                        cout << " Inputkan Harga Barang Baru : ";
                        cin >> harga[1];   
                        cout << " Harga Barang Sudah berubah pada Index"<<endl;
                        goto PENJUAL;  
                    }else if (pilihan == 3) {
                        cout << harga [2] <<endl;
                        cout << " Inputkan Harga Barang Baru : ";
                        cin >> harga[2];   
                        cout << " Harga Barang Sudah berubah pada Index"<<endl;
                        goto PENJUAL;  
                    }else if (pilihan == 4) {
                        cout << harga [3] <<endl;
                        cout << " Inputkan Harga Barang Baru : ";
                        cin >> harga[3];   
                        cout << " Harga Barang Sudah berubah pada Index"<<endl;
                        goto PENJUAL;  
                    }else if (pilihan == 5) {
                        cout << harga [4] <<endl;
                        cout << " Inputkan Harga Barang Baru : ";
                        cin >> harga[4];   
                        cout << " Harga Barang Sudah berubah pada Index"<<endl;
                        goto PENJUAL;  
                    }
                } else if (pilihan == 3){
                    cout<<" Mau Ubah Stok Barang yang mana ? "<<endl;
                    cout<<"1. "<< stok [0] <<endl;
                    cout<<"2. "<< stok [1] <<endl;
                    cout<<"3. "<< stok [2] <<endl;
                    cout<<"4. "<< stok [3] <<endl;
                    cout<<"5. "<< stok [4] <<endl; 
                    cin >> pilihan;
                    system("cls");
                    if (pilihan == 1) {
                        cout << stok[0] <<endl;
                        cout << " Inputkan Jumlah Stok Barang Baru : ";
                        cin >> stok[0];  
                        cout << " Jumlah Stok Barang Sudah berubah pada Index"<<endl;
                         goto PENJUAL;  
                    }else if (pilihan == 2) {
                        cout << stok [1] <<endl;
                        cout << " Inputkan Jumlah Stok Barang Baru : ";
                        cin >> stok[1];   
                        cout << " Jumlah Stok Barang Sudah berubah pada Index"<<endl;
                         goto PENJUAL;  
                    }else if (pilihan == 3) {
                        cout << stok [2] <<endl;
                        cout << " Inputkan Jumlah Stok Barang Baru : ";
                        cin >> stok[2];   
                        cout << " Jumlah Stok Barang Sudah berubah pada Index"<<endl; 
                         goto PENJUAL; 
                    }else if (pilihan == 4) {
                        cout << stok [3] <<endl;
                        cout << " Inputkan Jumlah Stok Barang Baru : ";
                        cin >> stok[3];   
                        cout << " Jumlah Stok Barang Sudah berubah pada Index"<<endl;
                         goto PENJUAL;  
                    }else if (pilihan == 5) {
                        cout << stok [4] <<endl;
                        cout << " Inputkan Jumlah Stok Barang Baru : ";
                        cin >> stok[4];   
                        cout << " Jumlah Stok Barang Sudah berubah pada Index"<<endl;
                         goto PENJUAL;  
                    }
                } else if (pilihan == 9){
                    goto PENJUAL; 
                } else if (pilihan == 0){
                     goto AWAL; 
                }
            } else if (pilihan == 9){
                goto PENJUAL;
            } else if (pilihan == 0){
                goto AWAL;
            }
        } else {
            cout << "Verifikasi gagal. Username atau password salah." << endl;
        }
    }else if (role == 2) {
        // Verifikasi pembeli
        if (password == "pembeliganteng") {
            cout << "Verifikasi berhasil. Selamat datang, " << username << " yang budiman!" << endl;
                PEMBELI :
                cout<< "================================================================================"<<endl;
                cout<< "  Mau beli barang apa?" << endl;
                cout<< "======================================================================= "<<endl;
                cout<< " BARANG             ||       STOK       ||        HARGA         ||"<<endl;
                cout<< "======================================================================= "<<endl;
                cout<< "[1]" <<barang[0] <<" || " << stok[0] <<" || " << harga[0]<<endl;
                cout<< "[2]" <<barang[1] <<" || " << stok[1] <<" || " << harga[1]<<endl;
                cout<< "[3]" <<barang[2] <<"      || " << stok[2] <<" || " << harga[2]<<endl;
                cout<< "[4]" <<barang[3] <<" || " << stok[3] <<" || " << harga[3]<<endl;
                cout<< "[5]" <<barang[4] <<" || " << stok[4] <<" || " << harga[4]<<endl;
                cout<< "Pilih barang yang mau dibeli : ";
                cin >> pilihan;
                JUMLAH :
                cout<< "Mau beli berapa banyak ?"<<endl;
                cin>> jumlah;
                if(jumlah <= stok[pilihan-1]){
                    goto STRUK;
                }else if (jumlah >= stok[pilihan-1]){
                    cout << " Maaf stok barang yang ingin anda beli tidak mencukupi."<<endl;
                    cout << " 1. Ubah jumlah barang? "<<endl;
                    cout << " 2. Ubah Pesanan"<<endl;
                    cin >>pilihan;
                    system("cls");
                    if (pilihan == 1){
                        goto JUMLAH;
                    }else if ( pilihan == 2){
                        goto PEMBELI;
                    }
                }
                system("cls");

                STRUK :
                cout<<"Apakah Anda hanya akan membeli itu saja"<<endl;
                cout<<"1. Lanjut Pembayaran"<<endl;
                cout<<"9. Kembali Menu Awal"<<endl;
                cin>>pesanan;
                system("cls");

                if (pesanan == 1){
                    if (pilihan >= 1 && pilihan <= 5) {
                        cout << endl;
                        cout << "====================================================================" << endl;
                        cout << "|                     STRUK PEMBAYARAN                             |" << endl;
                        cout << "====================================================================" << endl;
                        cout << endl;
                        cout << "Anda memilih barang " << barang[pilihan-1]<<endl;
                        cout << "Sebanyak " << jumlah << " buah." << endl;
                        cout << endl;
                        cout << "+----------------+-------------------- " << endl;
                        cout << "|      TOTAL     |" << harga[pilihan-1]*jumlah << "|" << endl;
                        cout << "+----------------+-------------------- " << endl;
                        stok[pilihan-1] -= jumlah;
                        cout << "=========================================================="<<endl;
                        cout << "Apakah anda ingin kembali bertransaksi"<<endl;
                        cout << " 1. Ya"<<endl;
                        cout << " 9. Keluar dari Program"<<endl;
                        cin >> pilihan;
                        system("cls");
                        if (pilihan == 1){
                            goto PEMBELI;
                        } else if ( pilihan == 9){
                            exit(0);

                        }
                    }
                }else if (pilihan == 9 ){
                    goto AWAL;
                    
                
                
                } else {
                 cout << "Pilihan barang tidak valid." << endl;
                }

            } else {
            cout << "Verifikasi gagal. Username atau password salah." << endl;
            }
    } else {
        cout << "Role yang dimasukkan tidak valid." << endl;
    }

    return 0;
}
