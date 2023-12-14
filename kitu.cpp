#include<stdio.h>

int main(){

int chr;
printf("nhap ky tu :");
scanf("%c",&chr);

if ((chr>='A')&&(chr<='Z')){
printf("chu in hoa");
    }else
if ((chr>='a')&&(chr<='z')){
    printf("chu in thuong");
}else
if ((chr>='0')&&(chr<='9')){
printf("day la so");
}else{
printf("day la ky tu dac biet");
}



}
