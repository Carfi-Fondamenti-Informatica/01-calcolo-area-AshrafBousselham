#include <iostream>
using namespace std;

int main(){
    float a = 0, b = 0, c = 0;

    cout << "altezza triangolo: \n";
    cin >> a;
    cout << "base triangolo: \n";
    cin >> b;


    float area;
    area = (float) ((a * b)/2);
    cout << "area triangolo :" << area;
    cout << "\n";
    
    a = 0;
    b = 0;
    
    cout << "lato quadrato :\n";
    cin >> a;
    float areaquadrato = 0;
    areaquadrato = (float) a*a;
    cout << "area quadrato:" << areaquadrato;
    cout << "\n";
    
    a = 0;
    
    cout << "lato 1 rettangolo:\n";
    cin >> a;
    cout << "lato 2 rettangolo:\n";
    cin >> b;
    float arearettangolo = 0;
    arearettangolo = (float) a*b;
    cout << "area rettangolo:" << arearettangolo;
    cout << "\n";
    
    a = 0;
    b = 0;
    
    cout << "base minore trapezio: \n";
    cin >> a;
    cout << "base maggiore trapezio: \n";
    cin >> b;
    cout << "altezza trapezio: \n";
    cin >> c;
    float areatrapezio = 0;
    areatrapezio = (float) ((a+b)*c/2);
    cout << "area trapezio:" << areatrapezio;
    cout << "\n";
    return 0;


}
