#include <iostream>
using namespace std;

string Status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    string status;
    cout <<"Masukan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout << "Masukan nilai Matematika = ";
    cin >> nilMT;

    rerata = Rata_rata(nilBI,nilMT);

    cout << "Status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl;
}