bool NOT(bool a)
{
    if (a == true)
        return false;
}
bool AND(bool a, bool b)
{
    if ((a == true) && (true == b))
        return true;
    else
        return false;
}
bool OR(bool a, bool b)
{
    if ((a == true) || (b == true))
        return true;
    else
        return false;
}
bool IMP(bool a, bool b)
{
    if ((a == true) && (b == false))
        return false;
    else
        return true;
}
bool EQU(bool a, bool b)
{
    if ((a == true) && (b == true))
        return true;
    else if ((a == false) && (b == false))
    {
        return true;
    }
    else
        return false;
}
bool XOR(bool a, bool b)
{
    if ((a == true) && (b == false))
        return true;
    else if ((a == false) && (b == true))
    {
        return true;
    }
    else
        return false;
}

// ((aVb)->b)->((a->b)V(a->c))
bool F99(bool a, bool b, bool c)
{
    bool x1, x2, x3, x4, x5, x6;
    x1 = OR(a, c);
    x2 = IMP(x1, b);
    x3 = IMP(a, b);
    x4 = IMP(a, c);
    x5 = OR(x3, x4);
    x6 = IMP(x2, x5);
    return x6;
}
