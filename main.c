#include <stdio.h>
#include <stdlib.h>

int hitung_vokal(char text[50])///Fungsi hitung vokal
{
    int i;
    int vokal=0;
    for(i=0;i<strlen(text);i++)
    {
         if (text[i]=='a'||text[i]=='A'||text[i]=='i'||text[i]=='I'||
             text[i]=='u'||text[i]=='U'||text[i]=='e'||text[i]=='E'||
             text[i]=='o'||text[i]=='O')
         {
             vokal++;
         }
    }
    return (vokal);
}

int main()
{
    puts("====================================================");
    char teks[30];
    printf("masukkan kata = ");gets(teks);
    int vokal= hitung_vokal(teks);
    printf("Terdapat %d huruf vokal\n", vokal);
    puts("====================================================");
    return 0;
}