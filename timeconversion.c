char* simeConversion(char* s)
{
    char s[10];
    scanf("%s", s);

    if(s[8] == 'P')
        if(s[0] != '1' || s[1] != '2')
        {
            s[1] += 2;
            s[0] ++;
        }
    if(s[0] == '1' && s[1] == '2' && s[8] == 'A')
        {
            s[0] = '0';
            s[1] = '0';
        }
}

