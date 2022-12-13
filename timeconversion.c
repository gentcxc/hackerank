char* timeConversion(char* s)
{
    char t[10];
    scanf("%s", t);

    if(t[8] == 'P')
        if(t[0] != '1' || t[1] != '2')
        {
            t[1] += 2;
            t[0] ++;
        }
    if(t[0] == '1' && t[1] == '2' && t[8] == 'A')
        {
            t[0] = '0';
            t[1] = '0';
        }
}

