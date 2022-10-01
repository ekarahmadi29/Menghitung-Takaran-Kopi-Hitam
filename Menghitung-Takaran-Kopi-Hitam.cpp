// Menghitung Takaran Kopi Hitam

#include <iostream>

using namespace std;

int main()
{
    int Jumlah_Gelas;
    double Jumlah_bubuk = 1.5 , Jumlah_gula = 2.5;

cout<<"Program Menghitung Takaran Kopi Hitam \noleh Septian Eka Rahmadi | Lagrange | 22/496732/TK/54442";
cout<<"\n \nProgram ini dibuat karena author suka meminum kopi hitam, namun seringkali kesulitan \ndalam menentukan takaran membuat kopi hitam dalam jumlah banyak \natau lebih dari satu porsi. Sering kali kalau ada tamu nih kasusnya.";

    cout<<"\n \nMasukkan jumlah gelas yang ingin dituangin kopi ya bestie ";
    cin>>Jumlah_Gelas;

        Jumlah_bubuk *= Jumlah_Gelas;
        Jumlah_gula *= Jumlah_Gelas;
        cout<<"Jadi, kalau kamu mau membuat kopi sejumlah "<<Jumlah_Gelas<<" gelas, \nKamu perlu meracik sebanyak "<<Jumlah_bubuk<<" sendok makan bubuk kopi dan "<<Jumlah_gula<<" sendok makan gula pasir.";
        
    return 0;
}
