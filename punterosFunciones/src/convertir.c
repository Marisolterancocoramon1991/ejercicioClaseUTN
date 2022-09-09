int convertirVariables (int* x, int* y)
{
    int z;

    int suma;

    suma= *x + *y;
    z=*x;
    *x=*y;
    *y=z;

    return suma;


}
