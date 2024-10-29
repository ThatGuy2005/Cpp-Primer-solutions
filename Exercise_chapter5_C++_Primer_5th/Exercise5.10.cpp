
#include <iostream>

int main()
{
    char c;
    unsigned short int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0, spacecnt = 0, ffcount = 0, flcnt = 0, fi = 0;
    while (std::cin >> c)
    {
        if (c == '|')
        {
            break;
        }
        switch (c)
        {
        case 'ff':
            spacecnt++;
            break;
        case 'fl':
            spacecnt++;
            break;
        case 'fi':
            spacecnt++;
            break;
        case ' ':
            spacecnt++;
            break;
        case 'a' :
            acnt++;
            break;
        case 'e' :
            ecnt++;
            break;
        case 'i' :
            icnt++;
            break;
        case 'o' :
            ocnt++;
            break;
        case 'u' :
            ucnt++;
            break;
        case 'A':
            acnt++;
            break;
        case 'E':
            ecnt++;
            break;
        case 'I':
            icnt++;
            break;
        case 'O':
            ocnt++;
            break;
        case 'U':
            ucnt++;
            break;
        }
    }
}