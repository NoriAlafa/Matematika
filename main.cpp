#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;
int luas_segitiga(){



cout<<"           .-` :-"<<endl;
cout<<"         .-` .-` :"<<endl;
cout<<"      .-` .-` .: :"<<endl;
cout<<"   .-` .-` .-: : :"<<endl;
cout<<" -:  -: .-`  : : :"<<endl;
cout<<" : `-. `-.   : : :"<<endl;
cout<<" '-.  `-. '-.: : :"<<endl;
cout<<"    `-.  `-. : : :"<<endl;
cout<<"       `-.  `- : :"<<endl;
cout<<"          `-.  : :"<<endl;
cout<<"             `-:-`"<<endl;
    float alas;
    float tinggi;
    cout<<"Masukkan Alas"<<endl;
    cin>>alas;
    cout<<"Masukkan Tinggi"<<endl;
    cin>>tinggi;
    cout<<"Hasilnya Adalah = " <<(alas*tinggi)/2<<endl;

}

int volume_tabung(){



cout<<" .-----."<<endl;
cout<<"|._____.'"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|       |"<<endl;
cout<<"|.-----.|"<<endl;
cout<<" -------    "<<endl;
    const float phi=3.14;
    float jari;
    float tinggi;
    cout<<"Masukkan jari jarinya"<<endl;
    cin>>jari;
    cout<<"Masukkan Tinggi"<<endl;
    cin>>tinggi;
    cout<<"Hasilnya Adalah = "<<phi*jari*jari*tinggi<<endl;

}


int volume_balok(){


cout<<"+------+. "<<endl;
cout<<"|`.    | `."<<endl;
cout<<"|  `+--+---+"<<endl;
cout<<"|   |  |   |"<<endl;
cout<<"+---+--+.  |"<<endl;
cout<<" `. |    `.|"<<endl;
cout<<"   `+------+"<<endl;
    float panjang;
    float lebar;
    float tinggi;
    cout<<"Masukkan panjang"<<endl;
    cin>>panjang;
    cout<<"Masukkan lebar"<<endl;
    cin>>lebar;
    cout<<"Masukkan tinggi"<<endl;
    cin>>tinggi;
    cout<<"Hasilnya Adalah = "<<panjang*lebar*tinggi<<endl;

}
int diameter(){
 float jari;
 cout<<"Masukkan jari"<<endl;
 cin>>jari;
 cout<<"hasil diameter adalah"<<2*jari<<endl;

}
int luas_lingkaran(){
 const float phi=3.14;
  float jari;
 cout<<"                     *&@@#            "<<endl;
 cout<<"               @                   @    "<<endl;
 cout<<"           &                           @          "<<endl;
 cout<<"                                         &       "<<endl;
 cout<<"                                            %     "<<endl;
 cout<<"     @                                       *    "<<endl;
 cout<<"    @                                             "<<endl;
 cout<<"   &                                           @  "<<endl;
 cout<<"   .                                              "<<endl;
 cout<<"                                                / "<<endl;
 cout<<"                                                . "<<endl;
 cout<<"  @                                             .  "<<endl;
 cout<<"                                                  "<<endl;
 cout<<"                                              ,   "<<endl;
 cout<<"      @                                     *     "<<endl;
 cout<<"        &                                         "<<endl;
 cout<<"          &                             @         "<<endl;
 cout<<"              @                     .&            "<<endl;
 cout<<"                   %@*        @@ "<<endl;
  cout<<"Masukkan jari jarinya"<<endl;
  cin>>jari;
  cout<<"Hasilnya adalah  "<<phi*jari*jari<<endl;

}
int keliling_lingkaran(){
 const float phi=3.14;
  float jari;
 cout<<"                     *&@@#            "<<endl;
 cout<<"               @                   @    "<<endl;
 cout<<"           &                           @          "<<endl;
 cout<<"                                         &       "<<endl;
 cout<<"                                            %     "<<endl;
 cout<<"     @                                       *    "<<endl;
 cout<<"    @                                             "<<endl;
 cout<<"   &                                           @  "<<endl;
 cout<<"   .                                              "<<endl;
 cout<<"                                                / "<<endl;
 cout<<"                                                . "<<endl;
 cout<<"  @                                             .  "<<endl;
 cout<<"                                                  "<<endl;
 cout<<"                                              ,   "<<endl;
 cout<<"      @                                     *     "<<endl;
 cout<<"        &                                         "<<endl;
 cout<<"          &                             @         "<<endl;
 cout<<"              @                     .&            "<<endl;
 cout<<"                   %@*        @@ "<<endl;
cout<<"Masukkan jari jarinya"<<endl;
  cin>>jari;
  cout<<"Hasilnya adalah  "<<2*phi*jari<<endl;
 }

int main(){
    int pilihan;
    string lagi;


awal:
cout<<"#     #                    #######                             "<<endl;
cout<<"##    #  ####  #####  #       #     ####   ####  #       ####  "<<endl;
cout<<"# #   # #    # #    # #       #    #    # #    # #      #      "<<endl;
cout<<"#  #  # #    # #    # #       #    #    # #    # #       ####  "<<endl;
cout<<"#   # # #    # #####  #       #    #    # #    # #           # "<<endl;
cout<<"#    ## #    # #   #  #       #    #    # #    # #      #    # "<<endl;
cout<<"#     #  ####  #    # #       #     ####   ####  ######  ####"<<endl;

cout<<"==============================================================="<<endl;
cout<<"1.Luas Segitiga "<<endl;
cout<<"2.Volume Tabung"<<endl;
cout<<"3.Volume Balok"<<endl;
cout<<"4.Diameter Lingkaran"<<endl;
cout<<"5.Luas Lingkaran"<<endl;
cout<<"6.Keliling Lingkaran"<<endl;
cin>>pilihan;

switch(pilihan){
    case 1:
    system("cls");
    luas_segitiga();
    break;

    case 2:
    system("cls");
    volume_tabung();
    break;

    case 3:
    system("cls");
    volume_balok();
    break;

    case 4:
    diameter();
    break;

    case 5:
    system("cls");
    luas_lingkaran();
    break;

    case 6:
    system("cls");
    keliling_lingkaran();
    break;

    default:
    cout<<"Maaf pilihan anda tidak ada"<<endl;
    break;
}

cout<<"Anda Ingin Mengulangi Lagi (Y?N)";
    cin>>lagi;
        if(lagi=="y" || lagi=="Y"){
            system("cls");
            goto awal;
        }
        if (lagi=="N" || lagi=="n"){
            goto selesai;
        }
selesai:
    system("cls");
    cout<<"Terima Kasih telah menggunakan tools ini"<<endl;


return 0;


}
