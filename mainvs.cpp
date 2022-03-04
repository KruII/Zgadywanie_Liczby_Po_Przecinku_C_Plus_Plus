#include "icludy.h"

using namespace std;
int najmniejsza,najwieksza, ilosc_m,il=1,prob=0;
float c, wpisana;
int main(){
    srand(time(NULL));
    cout<<"Podaj przedzial liczbowy: ";
    cin>>najmniejsza;
    cin>>najwieksza;
    cout<<"Podaj ilosc miejsc po przecinku: ";
    cin>>ilosc_m;
    if (najmniejsza>najwieksza)
    {
        cout<<"Cos nie tak";
        exit(0);
    }
    for (int i = 0; i <ilosc_m ; i++)
    {
        il*=10;
    }
    
    c=float(najmniejsza*il+rand()%(najwieksza*il-najmniejsza*il+1))/il;
    //cout<<c;
    //cout<<endl;
    while (wpisana!=c)
    {
        if (prob+1>=3&&prob<10)
        {
            cout<<"Podaj liczbe: ";
            cin>>wpisana;
            if (wpisana<c)
            {
                cout<<"Liczba szukana jest wieksza\n";
            }
            if (wpisana>c)
            {
                cout<<"Liczba szukana jest mniejsza\n";
            }
            
        }
        else if(prob==10){
            cout<<"Przegrales\n\nPoprawna liczba to: "<<c;
            Sleep(3000);
            exit(0);
        }
        else{
            cout<<"Podaj liczbe: ";
            cin>>wpisana;
        }
        prob++;
    }
    cout<<"\nGratulacje wygrales\n";
    Sleep(3000);
    return 0;
} 
