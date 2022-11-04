#include <iostream>
#include "LogCon.h"

using namespace std;

// bool NOT(bool a)
// {
//     if (a == true)
//         return false;
//     else
//         return true;
    
// }
// bool AND(bool a, bool b)
// {
//     if ((a == true) && (true == b))
//         return true;
//     else
//         return false;
// }
// bool OR(bool a, bool b)
// {
//     if ((a == true) || (b == true))
//         return true;
//     else
//         return false;
// }
// bool IMP(bool a, bool b)
// {
//     if ((a == true) && (b == false))
//         return false;
//     else
//         return true;
// }
// bool EQU(bool a, bool b)
// {
//     if ((a == true) && (b == true))
//         return true;
//     else if ((a == false) && (b == false))
//     {
//         return true;
//     }
//     else
//         return false;
    
// }
// bool XOR(bool a, bool b)
// {
//     if ((a == true) ^ (b == true))
//         return true;
//     else
//         return false;
// }

// // ((aVb)->b)->((a->b)V(a->c))
// bool F99(bool a, bool b, bool c)
// {
//     bool x1, x2, x3, x4, x5, x6;
//     x1 = OR(a, c);
//     x2 = IMP(x1, b);
//     x3 = IMP(a, b);
//     x4 = IMP(a, c);
//     x5 = OR(x3, x4);
//     x6 = IMP(x2, x5);
//     return x6;

// }

int main()
{
    bool a, b, c;

    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"| a | b | NOT(a) | AND(a,b) | OR(a,b) | IMP(a,b) | EQU(a,b) | XOR(a,b) |"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;

    a = true; b = true;
    cout << "| " << a << " | " << b << " |"<<
    "   "<<NOT(a) <<"    |"<<
    "    "<<AND(a,b) <<"     |"<<
    "    "<<OR(a,b) <<"    |"<<
    "    "<<IMP(a,b) <<"     |"<<
    "    "<<EQU(a,b) <<"     |"<<
    "    "<<XOR (a,b) << "     |"<< endl;

    a = true; b = false;
    cout << "| " << a << " | " << b << " |"<<
    "   "<<NOT(a) <<"    |"<<
    "    "<<AND(a,b) <<"     |"<<
    "    "<<OR(a,b) <<"    |"<<
    "    "<<IMP(a,b) <<"     |"<<
    "    "<<EQU(a,b) <<"     |"<<
    "    "<<XOR (a,b) << "     |"<< endl;

    a = false; b = true;
    cout << "| " << a << " | " << b << " |"<<
    "   "<<NOT(a) <<"    |"<<
    "    "<<AND(a,b) <<"     |"<<
    "    "<<OR(a,b) <<"    |"<<
    "    "<<IMP(a,b) <<"     |"<<
    "    "<<EQU(a,b) <<"     |"<<
    "    "<<XOR (a,b) << "     |"<< endl;

    a = false; b = false;
    cout << "| " << a << " | " << b << " |"<<
    "   "<<NOT(a) <<"    |"<<
    "    "<<AND(a,b) <<"     |"<<
    "    "<<OR(a,b) <<"    |"<<
    "    "<<IMP(a,b) <<"     |"<<
    "    "<<EQU(a,b) <<"     |"<<
    "    "<<XOR (a,b) << "     |"<< endl;

    cout<<"------------------------------------------------------------------------"<<endl;

    cout<<"\n";
    cout<<"\n";
    cout<<"\n";


    cout<<"-------------------"<<endl;
    cout<<"| a | b | c | F99 |"<<endl;
    cout<<"-------------------"<<endl;

     a = true; b = true; c = true;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = true; b = true; c = false;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = true; b = false; c = true;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = true; b = false; c = false;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = false; b = true; c = true;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = false; b = true; c = false;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = false; b = false; c = true;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     a = false; b = false; c = false;
     cout << "| " << a << " | " << b << " | "<< c << " |  "<<F99(a,b,c) <<"  |"<<endl;

     cout<<"-------------------"<<endl;


    return 0;
}
