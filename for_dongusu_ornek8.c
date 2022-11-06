#include <stdio.h>
// 1+2-3+4+5-6+7+8-9....+97+98-99+100....x şeklindeki seriyi hesaplar
// serinin 3 ile tam bölünen elemanları çıkarılıyor,diğer elemanları toplanıyor.
// x serinin son terimidir.Kullanıcı son terimi 4 girerse 1+2-3+4=4 sonucu ekrana yazdırılır.

int main() 

{
 
 int x;    
 
 int i;   
 
 int sonuc = 0;
 
 printf("serinin son sayisini girin: ");
 scanf("%d",&x);
  
 for(i = 1 ; i <= x ; i++)
 {
    if(i % 3 == 0)
    {
     sonuc -= i;   
    } 
    
    else 
    {
     sonuc += i;
    } 
 }
  
 printf("seri hesabinin sonucu: %d",sonuc);
 
 return 0;

}