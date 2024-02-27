#include <iostream>
using namespace std;

int main()
{
    //begin
    //numeric,nAlas,nTinggi,nLuas
    int nAlas, nTinggi;
    double nLuas;
    //display "masukan alasnya"
    cout << "masukan alasnya : ";
    //accept Nalas
    cin >> nAlas;
    //display "masukan tinggi"
    cout << "masukan tinggi";
    //accept Ntinggi
    cin >> nTinggi;
    //compute nLuas = 0.5 * nAlas * nTinggi
    nLuas = 0.5 * nAlas * nTinggi;
    //tampilkan
    cout << "luasnya adalah =" << nLuas << endl;

    system("pause");
}