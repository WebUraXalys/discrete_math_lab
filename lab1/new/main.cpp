#include "LogCon.h"

int main() {
    bool a, b, c;

    cout << "| a | b | c | b ^ c | a -> (b ^ c) | a -> b | a -> c | (a -> b)^(a -> c) |" << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = true, b = true, c = true;
    cout << "| 1 | 1 | 1 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = true, b = true, c = false;
    cout << "| 1 | 1 | 0 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = true, b = false, c = true;
    cout << "| 1 | 0 | 1 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = true, b = false, c = false;
    cout << "| 1 | 0 | 0 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = false, b = true, c = true;
    cout << "| 0 | 1 | 1 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = false, b = true, c = false;
    cout << "| 0 | 1 | 0 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = false, b = false, c = true;
    cout << "| 0 | 0 | 1 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
    << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
    << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    a = false, b = false, c = false;
    cout << "| 0 | 0 | 0 |   "<< AND(b, c) << "   |       " << IMP(a, AND(b, c)) << "      |   "
         << IMP(a, b) << "    |    " << IMP(a, c) << "   |  " << "       " << AND(IMP(a, b), IMP(a, c)) << "         |"
         << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    return 0;
}
