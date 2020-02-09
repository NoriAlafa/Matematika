#include <iostream>
#include <cstdlib>

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
    int alas;
    int tinggi;
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
    int jari;
    int tinggi;
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
    int panjang;
    int lebar;
    int tinggi;
    cout<<"Masukkan panjang"<<endl;
    cin>>panjang;
    cout<<"Masukkan lebar"<<endl;
    cin>>lebar;
    cout<<"Masukkan tinggi"<<endl;
    cin>>tinggi;
    cout<<"Hasilnya Adalah = "<<panjang*lebar*tinggi<<endl;
}

int main(){
    int pilihan;


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
cin>>pilihan;

switch(pilihan){
    case 1:
    system("clear");
    luas_segitiga();
    break;
    case 2:
    system("clear");
    volume_tabung();
    break;
    case 3:
    system("clear");
    volume_balok();
    break;
    default:
    cout<<"Maaf pilihan anda tidak ada"<<endl;
    break;
}



}
