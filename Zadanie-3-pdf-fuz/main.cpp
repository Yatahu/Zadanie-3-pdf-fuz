//
//  main.cpp
//  Zadanie-3-pdf-fuz
//
//  Created by Wojciech Szyjka on 27/11/2020.
//

#include <iostream>
#include <cmath>
#include "emoji.h"

int odp ;

using namespace emojicpp;
using namespace std;

int main() {
    
    poczatek:
    // insert code here...
    cout << "Witaj , Wybierz co chesz przeliczać\n" << endl;
    cout << "1. Celciusz/Farenheit" << endl << "2. Farenheit/Celcius" << endl << "3. Cale/Centymetry" << endl << "4. Centymetry/Cale" << endl << "5. Mile/Kilometry" << endl << "6. Kilometry/Mile" << endl << " : " ;
    cin >> odp ;
    
    if (odp == 1)
        {
            double c ;
            double e ;
            
            cout << "Podaj temp w Celciuszach: " ;
            cin >> c ;
            e = (c * 1.8) + 32 ;
            cout << "Temp w Farenheitach to : " << e << endl ;
            
            goto koniec ;
        }
    
    else if (odp == 2)
        {
            double s ;
            double a ;
            
            cout << "Podaj temp w Farenheitach: " ;
            cin >> s ;
            
            a = (s - 32) / 1.8 ;
            cout << "Tempw Celciuszach to : " << a << endl ;
            
            goto koniec ;
        }
    
    else if (odp == 3)
        {
            double g ;
            double f ;
            
            cout << "Podaj długość w Calach : " ;
            cin >> g ;
            
            f = g * 2.54 ;
            cout << "Długość w Cm to : " << f << endl ;
            
            goto koniec ;
        }
    
    else if (odp == 4)
        {
            double b ;
            double z ;
            
            cout << "Podaj długość w Cm: " ;
            cin >> b ;
            z = b / 2.54 ;
            cout << "Długość w Calach to : " << z << endl ;
            goto koniec ;
        }
     
    else if (odp == 5)
        {
            double h ;
            double j ;
            
            cout << "Podaj długość w Milach: " ;
            cin >> h ;
            j = h * 1.609 ;
            cout << "Długość w Kilometrach to : " << j << endl ;
            goto koniec ;
        }
    
    else if (odp == 6)
        {
            double r ;
            double t ;
            
            cout << "Podaj długość w Kilometrach: " ;
            cin >> r ;
            t = r / 1.609 ;
            cout << "Długość w Milach to : " << t << endl;
            goto koniec ;
        }
    
    
    else (main()) ;
    
    koniec:
    string n ;

    
    cout << "Czy chcesz coś jeszcze skonwertować ? [Y/N] : ";
    cin >> n;
    
    if (n == "Y")
        {
            goto poczatek ;
        }
    else if (n == "y")
        {
            goto poczatek ;
        }
        
    else
    {
        cout << emojize("Cześć :hand:") << endl ;
        goto r;
    }
    r:
    return 0;
}

