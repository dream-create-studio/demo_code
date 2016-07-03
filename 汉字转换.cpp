#include <iostream> 
#include <string> 
using namespace std; 


int hanziToshuzi(char hanzi[])
{
    if (strcmp(hanzi, "零") == 0) return 0;
    if (strcmp(hanzi, "一") == 0) return 1;
    if (strcmp(hanzi, "二") == 0) return 2;
    if (strcmp(hanzi, "三") == 0) return 3;
    if (strcmp(hanzi, "四") == 0) return 4;
    if (strcmp(hanzi, "五") == 0) return 5;
    if (strcmp(hanzi, "六") == 0) return 6;
    if (strcmp(hanzi, "七") == 0) return 7;
    if (strcmp(hanzi, "八") == 0) return 8;
    if (strcmp(hanzi, "九") == 0) return 9;
    return 0;
}

long strTolong(char str[])
{
    char sub_str[9][4];
    int j=0;
    for(int k=0; k<strlen(str); k=k+3)
    {
        int i;
        for(i = 0; i<3; i++)
        {
            sub_str[j][i] = str[k+i];
        }
        sub_str[j][i] = '\0';
        j++;
    }

    int a1, a2, a3, a4, a5;
    a1 = hanziToshuzi(sub_str[0]);
    a2 = hanziToshuzi(sub_str[2]);
    a3 = hanziToshuzi(sub_str[4]);
    a4 = hanziToshuzi(sub_str[6]);
    a5 = hanziToshuzi(sub_str[8]);
    return a1*10000+a2*1000+a3*100+a4*10+a5;
}



int main()
{
    //char str[50] = "一万一千三百五十八";
    
    char str[50];
    printf("请输入数字（目前只支持一万一千三百五十八，这种格式）:");
    scanf("%s",str);
     
    long result = strTolong(str);
    printf("%ld\n", result);
    return 0;
}