#i#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    
    int liczba, los, max,i=0;
    cout<<"Podaj liczbe od 1 do 100: ";
    cin>>max;
    do{
               cout<<"Podaj swoja liczbe jeszcze raz:";
               cin>>liczba;
               if(liczba>los) cout<<"Twoja liczba jest za duza.\n";
               if(liczba<los) cout<<"Twoja liczba jest za mala.\n";
               if(liczba==los) cout<<"Brawo ! Zgadles ! Moja liczba to "<<los<<endl;
               ++i;
               }
               while(liczba!=los);
    cout<<"Udalo Ci sie za "<<i<<" razem."<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
