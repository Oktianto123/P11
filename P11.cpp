#include <iostream>
using namespace std;
int jum,har[20],t[20],tot=0,total,dis,mac[20],temp,ma=5;
string y,oh,masuk,no[5]={"A001","A002","A003","A007","A008"},bar,nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};

main(){
cout<<"Pembuatan Program"<<endl;
cout<<"Apakah Member (y/t) : ";cin>>y;
if (y=="y"||y=="Y")
    {cout<<"No Identitas    : ";cin>>masuk;
        for(int o=0;o<ma;o++)
        {if(masuk==no[o])
            {oh=nama[o];cout<<"Nama            : "<<oh<<endl;
            cout<<"Jumlah Barang   : ";cin>>jum;
            for(int a=0;a<jum;a++)
                {cout<<"Barang Ke-"<<a+1<<endl;
                cout<<"Nama  Barang    : ";cin>>bar;
                cout<<"Macam Barang    : ";cin>>mac[a];
                cout<<"Harga Barang    : Rp";cin>>har[a];
                t[a]=mac[a]*har[a];
                tot=tot+t[a];
                dis=(tot*5)/100;
                total=tot-dis;
                cout<<"Harga           : Rp"<<t[a]<<endl<<endl;
                }cout<<"============================="<<endl;
                cout<<"Harga Sementara : Rp"<<tot<<endl;
                cout<<"Harga Diskon    : Rp"<<dis<<endl;
                cout<<"Harga Seluruh   : Rp"<<total<<endl;
            for(int i=jum-2;i>=0;i--)
                {for(int z=0;z<=i;z++)
                    {if(har[z]>har[z+1])
                        {temp=har[z];
                        har[z]=har[z+1];
                        har[z+1]=temp;}}}
            for(int i=jum-2;i>=0;i--)
                {for(int z=0;z<=i;z++)
                    {if(mac[z]>mac[z+1])
                        {temp=mac[z];
                        mac[z]=mac[z+1];
                        mac[z+1]=temp;}}}
            for(int i=jum-2;i>=0;i--)
                {for(int z=0;z<=i;z++)
                    {if(t[z]>t[z+1])
                        {temp=t[z];
                        t[z]=t[z+1];
                        t[z+1]=temp;}}}
            cout<<"============================="<<endl;
            cout<<"Data masukan di sorting :"<<endl;
            cout<<"============================="<<endl;
            for (int j=0;j<jum;j++)
                {cout<<"Harga : Rp"<<har[j]<<endl;}
            cout<<"============================="<<endl;
            for (int j=0;j<jum;j++)
                {cout<<"Macam : "<<mac[j]<<endl;}
            cout<<"============================="<<endl;
            for (int j=0;j<jum;j++)
                {cout<<"Harga Total : "<<t[j]<<endl;}}}}
if (y=="t"||y=="T")
    {cout<<"Nama            : ";cin>>oh;
            cout<<"Jumlah Barang   : ";cin>>jum;
            for(int a=0;a<jum;a++)
                {cout<<"Barang Ke-"<<a+1<<endl;
                cout<<"Nama  Barang    : ";cin>>bar;
                cout<<"Macam Barang    : ";cin>>mac[a];
                cout<<"Harga Barang    : Rp";cin>>har[a];
                t[a]=mac[a]*har[a];
                tot=tot+t[a];
                dis=0;
                total=tot-dis;
                cout<<"Harga           : Rp"<<t[a]<<endl<<endl;
                }cout<<"============================="<<endl;
                cout<<"Harga Sementara : Rp"<<tot<<endl;
                cout<<"Harga Diskon    : Rp"<<dis<<endl;
                cout<<"Harga Seluruh   : Rp"<<total<<endl;
            for(int i=jum-2;i>=0;i--)
                {for(int z=0;z<=i;z++)
                    {if(har[z]>har[z+1])
                        {temp=har[z];
                        har[z]=har[z+1];
                        har[z+1]=temp;}}}
            for(int i=jum-2;i>=0;i--)
                {for(int z=0;z<=i;z++)
                    {if(mac[z]>mac[z+1])
                        {temp=mac[z];
                        mac[z]=mac[z+1];
                        mac[z+1]=temp;}}}
            for(int i=jum-2;i>=0;i--)
                {for(int z=0;z<=i;z++)
                    {if(t[z]>t[z+1])
                        {temp=t[z];
                        t[z]=t[z+1];
                        t[z+1]=temp;}}}
            cout<<"============================="<<endl;
            cout<<"Data masukan di sorting :"<<endl;
            cout<<"============================="<<endl;
            for (int j=0;j<jum;j++)
                {cout<<"Harga : Rp"<<har[j]<<endl;}
            cout<<"============================="<<endl;
            for (int j=0;j<jum;j++)
                {cout<<"Macam : "<<mac[j]<<endl;}
            cout<<"============================="<<endl;
            for (int j=0;j<jum;j++)
                {cout<<"Harga Total : "<<t[j]<<endl;}}
}
