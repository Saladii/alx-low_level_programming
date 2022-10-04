/**
 * _abs - returns absolute valus
 * @n: number to check
 * 
 * Return: 1 or 0
 */
int _abs(int n)
{
    if(n >= 0)
    {
        return n;
    }else 
    {
        n = n * -1;
        return n;
    }
}