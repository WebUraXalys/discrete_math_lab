#include "LogCon.h"

bool AND(bool a, bool b) {
    return a && b;
   // return a && b ? true : false;
}

bool OR(bool a, bool b) {
    return a || b;
}

bool IMP(bool a, bool b) {
    return !a || b;
}

bool EQU(bool a, bool b) {
    return a == b;
}

bool XOR(bool a, bool b) {
    return !a != !b;
}

bool NOT(bool a) {
    return !a;
}

bool f2(bool a, bool b, bool c) {
    return EQU(IMP(a, AND(a, c)), AND( IMP(a, b), IMP(a, c) ));
}





