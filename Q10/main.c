#include <stdio.h>

int main()
{
    char vetc[4];
    int veti[4];
    float vetf[4];
    double vetd[4];
    int i;
    for(i=0;i<4;i++){
        printf("Para char x: %X\n",vetc+i);
    }
    i=0;
    for(i=0;i<4;i++){
        printf("Para int x: %X\n",veti+i);
    }
    i=0;
    for(i=0;i<4;i++){
        printf("Para float x: %X\n",vetf+i);
    }
    i=0;
    for(i=0;i<4;i++){
        printf("Para double x: %X\n",vetd+i);
    }

}
