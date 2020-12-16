/*
1.get_float ile kullanıcıdsan ne kadar para üstü verileceği sorulur.
2.Eğer kullanıcı negatif bir sayı girerse, programınız kullanıcıya doğru bir miktar girene kadar tekrar tekrar sormalıdır.
3. float ‘tan int ‘e çevir.Dlaordan cente
4.Cent'leri en yakın penny’ye yuvarlamaya dikkat edin (math.h içinde tanımlanan round kullanarak).
//quarter (25 cent), dime (10 cent), nickel (5 cent) ve penny (1 cent) olarak bozuk parası var (NOT: 100 CENT 1 DOLAR EDER)
*/
#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
  int main(){
    //int quarter=0,dime=0,nickel=0,penny=0;
    int dizi[4]={1,5,10,25};
    int  parac;//dolar:para,para2--cent:parac---penny=parap
    int owned=0;
   
    float  para=get_float("para  üstünün miktarı: ");
    if(para<0)
    {
        float  para2=get_float("Again: ");
        //işlemeler
        parac=round(para2*100);//dolar cent'e cevrildi
        for(int i=(sizeof dizi / sizeof *dizi)-1;i>=0;i--)
        {
           int sayac=0;
           while(parac>=dizi[i])
           {
               sayac++;
               parac=parac-dizi[i];
           }
           if(sayac>0)
           {
               owned+=sayac;
           }
        }
         printf("owned:%d\n",owned); 
    }
////negatif olmayan sayı
    else
    {
        //işlemler
         parac=round(para*100);//dolar cent'e cevrildi
          for(int j=(sizeof dizi / sizeof *dizi)-1;j>=0;j--)
        {
           int sayac2=0;
           while(parac>=dizi[j])
           {
               sayac2++;
               parac=parac-dizi[j];
           }
           if(sayac2>0)
           {
              owned+=sayac2;
              
           }
          
        }
        printf("owned:%d\n",owned); 
    }
    
    
}
   
   
