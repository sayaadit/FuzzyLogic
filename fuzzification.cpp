#include "tubes2.h"

char fuzzification_emosi_srendah()
{
    emosi_srendah = 0;
    if (emosi<=10 && emosi>0) /* emosi antara 0 - 10 */
    {
        emosi_srendah = 1;
    }
    else if(emosi > 10) /* emosi di antara 10-30 */
    {
        emosi_srendah = (30 - emosi)/20;
    }
    else if(emosi >= 30) /* emosi lebih dari 30 */
    {
        emosi_srendah = 0;
    }
    return emosi_srendah;
}

char fuzzification_emosi_rendah()
{
    emosi_rendah = 0;
    if (emosi <= 10 || emosi >=50) /* emosi kurang dari 10 atau emosi lebih dari 50 */
    {
        emosi_rendah = 0;
    }
    else if(emosi>10 && emosi <30) /* emosi diantara 10 - 30 */
    {
        emosi_rendah = (emosi - 10)/20;
    }
    else if(emosi>30 && emosi < 50) /* emosi diantara 30-50 */
    {
        emosi_rendah = (50-emosi) / 20;
    }
    else if(emosi == 30)
    {
        emosi_rendah = 1;
    }
    return emosi_rendah;

}




char fuzzification_emosi_sedang(){
    emosi_sedang = 0;
     if (emosi <= 30 || emosi >=70) /* emosi kurang dari 30 atau emosi lebih dari 70 */
    {
        emosi_sedang = 0;
    }
    else if(emosi>30 && emosi <50) /* emosi diantara 30 - 50 */
    {
        emosi_sedang = (emosi - 30) / 20;
    }
    else if(emosi>50 && emosi < 70) /* emosi diantara 50-70 */
    {
        emosi_sedang = (70-emosi) / 20;
    }
    else if(emosi == 50)
    {
        emosi_sedang = 1;
    }
    return emosi_sedang;

}

char fuzzification_emosi_tinggi(){
    emosi_tinggi = 0;
     if (emosi <= 50 || emosi >=90) /* emosi kurang dari 50 atau emosi lebih dari 90 */
    {
        emosi_tinggi = 0;
    }
    else if(emosi>50 && emosi <70) /* emosi diantara 50 - 70 */
    {
        emosi_tinggi = (emosi - 50) / 20;
    }
    else if(emosi>70 && emosi < 90) /* emosi diantara 70-90 */
    {
        emosi_tinggi = (90-emosi) / 20;
    }
    else if(emosi == 50)
    {
        emosi_tinggi = 1;
    }
    return emosi_tinggi;
}


char fuzzification_provokasi_sedang(){
    provokasi_sedang = 0;
     if (provokasi <= 30 || provokasi >=70) /* provokasi kurang dari 30 atau emosi lebih dari 70 */
    {
        provokasi_sedang = 0;
    }
    else if(provokasi>30 && provokasi <50) /* provokasi diantara 30 - 50 */
    {
        provokasi_sedang = (provokasi - 30) / 20;
    }
    else if(provokasi>50 && provokasi< 70) /* provokasi diantara 50-70 */
    {
        provokasi_sedang = (70-provokasi) / 20;
    }
    else if(provokasi == 50)
    {
        provokasi_sedang = 1;
    }
    return provokasi_sedang;

}

char fuzzification_provokasi_tinggi(){
    provokasi_tinggi = 0;
     if (provokasi <= 50 || provokasi >=90) /* provokasi kurang dari 50 atau emosi lebih dari 90 */
    {
        provokasi_tinggi = 0;
    }
    else if(provokasi>50 && provokasi <70) /* provokasi diantara 50 - 70 */
    {
        provokasi_tinggi = (provokasi - 50) / 20;
    }
    else if(provokasi>70 && provokasi < 90) /* provokasi diantara 70-90 */
    {
        provokasi_tinggi = (90-provokasi) / 20;
    }
    else if(provokasi == 50)
    {
        provokasi_tinggi = 1;
    }
    return provokasi_tinggi;
}



char fuzzification_emosi_stinggi(){
    emosi_stinggi = 0;
    if(emosi>70 && emosi<90) /* emosi diantara 70-90 */
    {
        emosi_stinggi = (emosi - 70) / 20;
    }
    else if (emosi>=90) /* emosi lebih dari 90 */
    {
        emosi_stinggi = 1;
    }
    else if(emosi<=70) /* emosi kurang dari sama dengan 70 */
    {
        emosi_stinggi = 0;
    }
    return emosi_stinggi;
}


char fuzzification_provokasi_srendah()
{
    provokasi_srendah = 0;
    if (provokasi<=10 && provokasi>0) /* provokasi antara 0 - 10 */
    {
        provokasi_srendah = 1;
    }
    else if(provokasi > 10) /* provokasi di antara 10-30 */
    {
        provokasi_srendah = (30 - emosi)/20;
    }
    else if(provokasi >= 30) /* provokasi lebih dari 30 */
    {
        provokasi_srendah = 0;
    }
    return provokasi_srendah;
}




char fuzzification_provokasi_rendah()
{
    provokasi_rendah = 0;
    if (provokasi <= 10 || provokasi >=50) /* provokasi kurang dari 10 atau emosi lebih dari 50 */
    {
        provokasi_rendah = 0;
    }
    else if(provokasi>10 && provokasi <30) /* provokasi diantara 10 - 30 */
    {
        provokasi_rendah = (provokasi - 10) / 20;
    }
    else if(provokasi>30 && provokasi < 50) /* provokasi diantara 30-50 */
    {
        provokasi_rendah = (50-provokasi) / 20;
    }
    else if(provokasi == 30)
    {
        provokasi_rendah = 1;
    }
    return provokasi_rendah;

}



char fuzzification_provokasi_stinggi(){
    provokasi_stinggi = 0;
    if(provokasi>70 && provokasi<90) // provokasi diantara 70-90
    {
        provokasi_stinggi = (provokasi - 70) / 20;
    }
    else if (provokasi>=90) /* provokasi lebih dari 90 */
    {
        provokasi_stinggi = 1;
    }
    else if(provokasi<=70) /* provokasi kurang dari sama dengan 70 */
    {
        provokasi_stinggi = 0;
    }
    return provokasi_stinggi;
}

void fuzzification(){
    char fuzzification_emosi_rendah();
    char fuzzification_emosi_srendah();
    char fuzzification_emosi_sedang();
    char fuzzification_emosi_stinggi();
    char fuzzification_emosi_tinggi();

    char fuzzification_provokasi_rendah();
    char fuzzification_provokasi_srendah();
    char fuzzification_provokasi_sedang();
    char fuzzification_provokasi_stinggi();
    char fuzzification_provokasi_tinggi();


}

double a,b,c,d,e; /* batas atas */
a = 10.0;
b = 30;
c = 75;
d = 90;

w = 10;
x = 30;
y = 75;
z = 90;


    if (emosi>=0 && emosi <a){
        emosi_rendah = 1;
    }
    else if(emosi >=a && emosi <=b){
        emosi_rendah = -(emosi - b)/ b-a ;
        emosi_sedang = (emosi - a)/ b-a;
    }
    else if(emosi >b && emosi< c){
        emosi_sedang = 1;
    }
    else if (emosi>= c && emosi <=d){
        emosi_sedang = -(emosi - d)/ d-c ;
        emosi_tinggi = (emosi - c)/ d-c;
    }
    else if (emosi > d && emosi <=100){
        emosi_tinggi = 1;
    }
    else{
        cout<<"INPUT TIDAK VALID";
    }


void fuzzys(){
    if (provokasi>=0 && provokasi <w){
        provokasi_rendah = 1;
    }
    else if(provokasi >=w && provokasi <=x){
        provokasi_rendah = -(provokasi - x)/ x-w ;
        provokasi_sedang = (provokasi - w)/ x-w;
    }
    else if(provokasi >x && provokasi< y){
        provokasi_sedang = 1;
    }
    else if (provokasi>= y && provokasi <=z){
        provokasi_sedang = -(provokasi - z)/ z-y ;
        provokasi_tinggi = (provokasi - y)/ z-y;
    }
    else if (provokasi > z && provokasi <=100){
        provokasi_tinggi = 1;
    }
    else{
        cout<<"INPUT NGGA BENER";
    }

}

if (emosi_rendah = 1 && provokasi_rendah = 1){
    cout<<"TIDAK HOAX";
}
else if (emosi_rendah = 1 && provokasi_rendah != 0 && provokasi_sedang != 0){
    h = min(emosi_rendah, provokasi_rendah);
    i = min(emosi_rendah, provokasi_sedang);
    j = max(h,i);
    if (j = h){
        cout<<"TIDAK HOAX";
    }
    else{
        cout<<"TIDAK HOAX";
    }
}
else if(emosi_rendah = 1 && provokasi_sedang= 1){
    cout<<"TIDAK HOAX";
}
else if(emosi_rendah = 1 && provokasi_sedang != 0 && provokasi_tinggi != 0){

}
