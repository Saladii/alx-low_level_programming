/**
 * _isdigit - checs fo rdigits 0 throgh 9
 * @c: number to be checked
 * 
 * Return: 1 else 0
 */
int _isdigit(int c)
{
    if((c >= 48) && (c < 58))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}