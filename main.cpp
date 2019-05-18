#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    double emosi;
    double emosi_rendah;
    double emosi_sedang;
    double emosi_tinggi;

    
	
	double provokasi;
    double provokasi_rendah;
    double provokasi_sedang;
    double provokasi_tinggi;

    
	
	double ystar;

    int l;


    
	
	cout<<"MASUKAN BERAPA KALI INPUT  : ";
    cin>>l;
    cout<<"\n";
    for (l=1; l<=20; l++)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"MASUKAN NILAI EMOSI : ";
        cin>>emosi;
        cout<<"MASUKKAN NILAI PROVOKASI : ";
        cin>>provokasi;

        double a,b,c,d,e,w,x,y,z,h,i,j,k,m,n,ya, tidak;
        emosi_rendah = 0;
        emosi_tinggi = 0;
        emosi_sedang = 0;

        provokasi_rendah= 0;
        provokasi_sedang = 0;
        provokasi_tinggi = 0;
        
		a = 35;
        b = 45;
        c = 65;
        d = 75;

        w = 35;
        x = 45;
        y = 65;
        z = 75;

        
		ya = 0;
        tidak =0;
        i,j,k,m,n = 0;

        if (emosi>= 0 && emosi < a) /* grafik emosi */
        {
            emosi_rendah = 1;
        }
        else if(emosi >=a && emosi <=b)
        {
            emosi_rendah = (-(emosi - b))/ (b-a) ;
            emosi_sedang = (emosi - a)/ (b-a);
        }
        else if(emosi >b && emosi< c)
        {
            emosi_sedang = 1;
        }
        else if (emosi>= c && emosi <=d)
        {
            emosi_sedang = (-(emosi - d))/ (d-c) ;
            emosi_tinggi = (emosi - c)/ (d-c);
        }
        else if (emosi > d && emosi <=100)
        {
            emosi_tinggi = 1;
        }
        else
        {
            cout<<"INPUT TIDAK BENAR";
        }



        if (provokasi>=0 && provokasi <w) /* grafik provokasi */
        {
            provokasi_rendah = 1;
        }
        else if(provokasi >=w && provokasi <=x)
        {
            provokasi_rendah = (-(provokasi - x))/ (x-w) ;
            provokasi_sedang = (provokasi - w)/ (x-w);
        }
        else if(provokasi >x && provokasi< y)
        {
            provokasi_sedang = 1;
        }
        else if (provokasi>= y && provokasi <=z)
        {
            provokasi_sedang = (-(provokasi - z))/ (z-y) ;
            provokasi_tinggi = (provokasi - y)/ (z-y);
        }
        else if (provokasi > z && provokasi <=100)
        {
            provokasi_tinggi = 1;
        }
        else
        {
            cout<<"INPUT TIDAK BENAR";
        }


        if (emosi_rendah == 1 && provokasi_rendah == 1) /* fuzzy rules */
        {
            ya = 0;
            tidak = 1;
        }
        else if (emosi_rendah == 1 && provokasi_rendah != 0 && provokasi_sedang != 0)
        {
            h = min(emosi_rendah, provokasi_rendah);
            i = min(emosi_rendah, provokasi_sedang);
            j = max(h,i);
            if (j = h)
            {
                if(emosi_rendah<provokasi_rendah)
                {
                    tidak = emosi_rendah;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_rendah;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_rendah<provokasi_sedang)
                {
                    tidak = emosi_rendah;
                    ya = 0;
                }
                else
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
            }
        }
        else if(emosi_rendah == 1 && provokasi_sedang== 1)
        {
            ya = 1;
            tidak = 1;
        }
        else if(emosi_rendah == 1 && provokasi_sedang != 0 && provokasi_tinggi != 0)
        {
            h = min(emosi_rendah, provokasi_sedang);
            i = min(emosi_rendah, provokasi_tinggi);
            j = max(h,i);
            if (j = h)
            {
                if(emosi_rendah<provokasi_sedang)
                {
                    tidak=emosi_rendah;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_sedang;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_rendah<provokasi_tinggi)
                {
                    ya = emosi_rendah;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak = 0;
                }
            }
        }
        else if(emosi_rendah == 1 && provokasi_tinggi == 1)
        {
            ya = 1;
            tidak = 0;
        }
        else if (emosi_rendah != 0 && emosi_sedang != 0 && provokasi_rendah == 1)
        {
            h = min(emosi_rendah, provokasi_rendah);
            i = min(emosi_sedang, provokasi_rendah);
            j = max(h,i);
            if ( j = h)
            {
                if(emosi_rendah<provokasi_rendah)
                {
                    tidak= emosi_rendah;
                    ya = 0;
                }
                else
                {
                    tidak =provokasi_sedang;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_sedang<provokasi_rendah)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_rendah;
                    ya = 0;
                }

            }
        }
        else if (emosi_rendah !=0 && emosi_sedang != 0 && provokasi_rendah != 0 && provokasi_sedang != 0)
        {
            h = min(emosi_rendah, provokasi_rendah);
            i = min (emosi_rendah, provokasi_sedang);
            k = min(emosi_sedang, provokasi_rendah);
            m = min(emosi_sedang, provokasi_sedang);
            j = max(h,i);
            n = max (k,m);
            if ( j > n )
            {
                if ( j = h)
                {
                    if(emosi_rendah<provokasi_rendah)
                    {
                        tidak = emosi_rendah;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_rendah;
                        ya = 0;
                    }
                }
                else
                {
                    if(emosi_rendah<provokasi_sedang)
                    {
                        tidak = emosi_rendah;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_sedang;
                        ya = 0;
                    }

                }
            }
            else
            {
                if ( n = k )
                {
                    if(emosi_sedang <provokasi_rendah)
                    {
                        tidak = emosi_sedang;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_rendah;
                        ya = 0;
                    }
                }
                else
                {
                    if(emosi_sedang<provokasi_sedang)
                    {
                        tidak = emosi_sedang;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_sedang;
                        ya = 0;
                    }
                }
            }
        }
        else if(emosi_rendah != 0 && emosi_sedang != 0 && provokasi_sedang == 1)
        {
            h = min(emosi_rendah, provokasi_sedang);
            i = min(emosi_sedang, provokasi_sedang);
            j = max(h,i);
            if( j = h )
            {
                if(emosi_rendah<provokasi_sedang)
                {
                    tidak = emosi_rendah;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_sedang;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_sedang<provokasi_sedang)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_sedang;
                    ya = 0;
                }
            }
        }
        else if (emosi_rendah != 0 && emosi_sedang !=0 && provokasi_sedang != 0 && provokasi_tinggi != 0)
        {
            h = min(emosi_rendah, provokasi_sedang);
            i = min(emosi_sedang, provokasi_sedang);
            k = min(emosi_rendah, provokasi_tinggi); /* pengecekan untuk tabel no 15 */
            m = min(emosi_sedang, provokasi_tinggi);
            j = max(h,i);
            n = max(k,m);
            if ( j>n )
            {
                if(j = h)
                {
                    if(emosi_rendah<provokasi_sedang)
                    {
                        tidak = emosi_rendah;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_sedang;
                        ya = 0;
                    }
                }
                else
                {
                    if(emosi_sedang<provokasi_sedang)
                    {
                        tidak = emosi_sedang;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_sedang;
                        ya = 0;
                    }
                }

            }
            else
            {
                if(n = k)
                {
                    if(emosi_rendah<provokasi_tinggi)
                    {
                        ya = emosi_rendah;
                        tidak = 0;
                    }
                    else
                    {
                        ya = provokasi_tinggi;
                        tidak = 0;
                    }
                }
                else
                {
                    if(emosi_sedang<provokasi_tinggi)
                    {
                        ya = emosi_sedang;
                        tidak = 0;
                    }
                    else
                    {
                        ya = provokasi_tinggi;
                        tidak = 0;
                    }
                }
            }

        }
        else if(emosi_rendah != 0 && emosi_sedang != 0 && provokasi_tinggi == 1)
        {
            h = min(emosi_rendah, provokasi_tinggi);
            i = min(emosi_sedang, provokasi_tinggi);
            j = max(h,i);
            if (j = h)
            {
                if(emosi_rendah<provokasi_tinggi)
                {
                    ya = emosi_rendah;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak = 0;
                }
            }
            else
            {
                if(emosi_sedang<provokasi_tinggi)
                {
                    ya = emosi_sedang;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak = 0;
                }

            }
        }
        else if (emosi_sedang == 1 && provokasi_rendah == 1)
        {
            ya = 0;
            tidak = 1;
        }
        else if(emosi_sedang == 1 && provokasi_rendah != 0 && provokasi_sedang != 0)
        {
            h = min(emosi_sedang, provokasi_rendah);
            i = min(emosi_sedang, provokasi_sedang);
            j = max(h,i);
            if ( j  = h)
            {
                if(emosi_sedang<provokasi_rendah)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_rendah;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_sedang<provokasi_sedang)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_sedang;
                    ya = 0;
                }
            }
        }
        else if(emosi_sedang == 1 && provokasi_sedang == 1)
        {
            ya = 0;
            tidak = 1;
        }
        else if(emosi_sedang == 1 && provokasi_sedang != 0 && provokasi_tinggi != 0)
        {
            h = min(emosi_sedang, provokasi_sedang);
            i = min(emosi_sedang, provokasi_tinggi);
            j = max(h,i);
            if ( j = h )
            {
                if(emosi_sedang<provokasi_sedang)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_sedang;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_sedang<provokasi_tinggi)
                {
                    ya = emosi_sedang;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak =0;
                }
            }
        }
        else if(emosi_sedang == 1 && provokasi_tinggi == 1)
        {
            ya = 1;
            tidak = 0;
        }
        else if(emosi_sedang != 0 && emosi_tinggi != 0 && provokasi_rendah == 1)
        {
            h = min(emosi_sedang, provokasi_rendah);
            i = min(emosi_tinggi, provokasi_rendah);
            j = max(h,i);
            if ( j = h)
            {
                if(emosi_sedang<provokasi_rendah)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_rendah;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_tinggi<provokasi_rendah)
                {
                    tidak = emosi_tinggi;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_rendah;
                    ya = 0;
                }
            }
        }
        else if(emosi_sedang != 0 && emosi_tinggi != 0 && provokasi_rendah != 0 && provokasi_sedang !=0)
        {
            h = min(emosi_sedang, provokasi_rendah);
            i = min(emosi_tinggi, provokasi_rendah);
            k = min(emosi_sedang, provokasi_sedang);
            n = min(emosi_tinggi, provokasi_sedang);
            j = max(h,i);
            n = max(k,n);
            if ( j > n)
            {
                if(j = h)
                {
                    if(emosi_sedang<provokasi_rendah)
                    {
                        tidak = emosi_sedang;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_rendah;
                        ya = 0;
                    }
                }
                else
                {
                    if(emosi_sedang<provokasi_sedang)
                    {
                        tidak = emosi_sedang;
                        ya = 0;
                    }

                    else
                    {
                        tidak = provokasi_rendah;
                        ya = 0;
                    }
                    if(emosi_tinggi<provokasi_rendah)
                    {
                        tidak = emosi_tinggi;
                        ya = 0;
                    }
                    else
                    {
                        provokasi_rendah;
                        ya = 0;
                    }
                }
            }
            else
            {
                if(n = k)
                {
                    if(emosi_sedang<provokasi_sedang)
                    {
                        tidak =emosi_sedang;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_sedang;
                        ya = 0;
                    }
                }
                else
                {
                    if(emosi_tinggi<provokasi_sedang)
                    {
                        ya = emosi_tinggi;
                        tidak =0;
                    }
                    else
                    {
                        ya = provokasi_sedang;
                        tidak = 0;
                    }
                }
            }
        }
        else if(emosi_sedang != 0 && emosi_tinggi != 0 && provokasi_sedang == 1)
        {
            h = min(emosi_sedang, provokasi_sedang);
            i = min(emosi_tinggi, provokasi_sedang);
            j = max(h,i);
            if ( j = h )
            {
                if(emosi_sedang<provokasi_sedang)
                {
                    tidak = emosi_sedang;
                    ya = 0;
                }
                else
                {
                    tidak = provokasi_sedang;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_tinggi < provokasi_sedang )
                {
                    ya = emosi_tinggi;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_sedang;
                    tidak = 0;
                }
            }
        }
        else if(emosi_sedang != 0 && emosi_tinggi != 0 && provokasi_sedang !=0 && provokasi_tinggi != 0)
        {
            h = min(emosi_sedang, provokasi_sedang);
            i = min (emosi_sedang, provokasi_tinggi);
            k = min(emosi_tinggi, provokasi_sedang);
            m = min(emosi_tinggi, provokasi_tinggi);
            j = max(h,i);
            n = max(k,m);
            if( j > n)
            {
                if(j = h)
                {
                    if(emosi_sedang<provokasi_sedang)
                    {
                        tidak = emosi_sedang;
                        ya = 0;
                    }
                    else
                    {
                        tidak = provokasi_sedang;
                        ya = 0;
                    }
                }
                else
                {
                    if(emosi_sedang<provokasi_tinggi)
                    {
                        ya = emosi_sedang;
                        tidak =0;
                    }
                    else
                    {
                        ya = provokasi_tinggi;
                        tidak  =0;
                    }
                }
            }
            else
            {
                if( n = k)
                {
                    if(emosi_tinggi<provokasi_sedang)
                    {
                        ya = emosi_tinggi;
                        tidak  =0;
                    }
                    else
                    {
                        ya = provokasi_sedang;
                        tidak = 0;
                    }
                }
                else
                {
                    if(emosi_tinggi<provokasi_tinggi)
                    {
                        ya = emosi_tinggi;
                        tidak = 0;
                    }
                    else
                    {
                        ya = provokasi_tinggi;
                        tidak = 0;
                    }
                }
            }
        }
        else if(emosi_sedang != 0 && emosi_tinggi != 0 && provokasi_tinggi == 1)
        {
            h = min(emosi_sedang, provokasi_tinggi);
            i = min(emosi_tinggi, provokasi_tinggi);
            j = max(h,i);
            if( j = h)
            {
                if(emosi_sedang<provokasi_tinggi)
                {
                    ya = emosi_sedang;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak = 0;
                }
            }
            else
            {
                if(emosi_tinggi<provokasi_tinggi)
                {
                    ya = emosi_tinggi;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak = 0;
                }
            }
        }
        else if(emosi_tinggi == 1 && provokasi_rendah == 1)
        {
            ya = 0;
            tidak = 1;
        }
        else if(emosi_tinggi == 1 && provokasi_rendah != 0 && provokasi_sedang != 0)
        {
            h = min(emosi_tinggi, provokasi_rendah);
            i = min(emosi_tinggi, provokasi_sedang);
            j = max(h,i);
            if(j =h )
            {
                if(emosi_tinggi<provokasi_rendah)
                {
                    tidak = emosi_tinggi;
                    ya =0;
                }
                else
                {
                    tidak = provokasi_rendah;
                    ya = 0;
                }
            }
            else
            {
                if(emosi_tinggi<provokasi_sedang)
                {
                    ya = emosi_tinggi;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_sedang;
                    tidak = 0;
                }
            }
        }
        else if(emosi_tinggi == 1 && provokasi_sedang == 1)
        {
            ya = 1;
            tidak =  0;
        }
        else if(emosi_tinggi == 1 && provokasi_tinggi != 0 && provokasi_sedang != 0)
        {
            h = min(emosi_tinggi, provokasi_tinggi);
            i = min(emosi_tinggi, provokasi_sedang);
            j = max(h,i);
            if(j = h)
            {
                if(emosi_tinggi<provokasi_tinggi)
                {
                    ya = emosi_tinggi;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_tinggi;
                    tidak = 0;
                }
            }
            else
            {
                if(emosi_tinggi<provokasi_sedang)
                {
                    ya = emosi_tinggi;
                    tidak = 0;
                }
                else
                {
                    ya = provokasi_sedang;
                    tidak = 0;
                }
            }
        }
        else if(emosi_tinggi == 1 && provokasi_tinggi == 1)
        {
            ya = 1;
            tidak = 0;
        }
        else
        {
            cout<<"INPUT TIDAK BENAR";
        }

        double batasatas = 65;
        double batasbawah = 60;
        double atas = ((ya*batasatas) + (tidak*batasbawah));
        double bawah = (ya+tidak);
        ystar = atas/bawah;
        cout<<"NILAI YSTAR : "<<ystar;
        cout<<"\n";
        if(ystar>= 62.5)
        {
            cout<<"BERITA TERSEBUT HOAX";
        }
        else
        {
            cout<<"BERITA TERSEBUT TIDAK HOAX";
        }

    }
}


