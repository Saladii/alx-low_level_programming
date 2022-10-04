/**
 * _islower - check it is lower
 * @c: character to be checked
 * 
 * Return: throws 1 else 0
 */
int _islower(int c)
{
    if ((c >= 97) && (c <= 122))
    {
        return 1;
    }else 
    {
        return 0;
    }
}