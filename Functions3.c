int lcm(int a, int b);


int main()
{
    int a=12, b=30, LCM;

    if(a > b)
        LCM = lcm(b, a);
    else
        LCM = lcm(a, b);

    printf("LCM of %d and %d = %d", a, b, LCM);

    return 0;
}


int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;

    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}
