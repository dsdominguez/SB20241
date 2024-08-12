unsigned char cond(unsigned char a)
{
    if (a>64 && a<91)
        return a + 32;
}

int cond1(int a, int b, int *p)
{
    if (a>0 && b>0)
        return *p = a + b;        
}