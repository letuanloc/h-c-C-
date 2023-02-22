#include<iostream>
using namespace std;


int main (){
    while(true){
        system("cls");    // lenh xoa man hinh32

        cout<<"\n\n\t\t====Menu====";
        cout<<"\n1. liet ke cac uoc cua so nguyen n";
        cout<<"\n2. kiem tra xem n co phai la so doi xung hay khong";
        cout<<"\n3. doi vo";
        cout<<"\n0. ket thuc";
        cout<<"\\n\n\t\t====End====";

        int luachon;

        cout<<"\n nhap lua chon cua ban";
        cin>> luachon;
        
        if (luachon==0){
            break;
        }
        else if (luachon==1){
            int n;
            do{
                cout<<"\n Nhap vao so nguyen n";
                cin>> n;
                if (n<=5||(n%2)!=0){
                    cout<<"\n n khong thoa man, moi nhap lai";
                }
            }while (n<=5||(n%2)!=0);
                
                int i = 1;
                while(i<=n){
                    if(n%i==0) {
                        cout<<i<<" ";
                         
                    } i++;
                }
                system("pause");
            }
            
        
        else if (luachon==2){
            // buoc 1 tim so dao nguoc
            int n;
            do{
                cout<<"\n Nhap vao so nguyen n";
                cin>> n;
                if (n<=0){
                    cout<<"\n n khong thoa man, moi nhap lai";
                }
            }while (n<=0);
            int s=0;
            int tam = n;
            while (n!=0){
                s = s*10 + (n%10);
                n = n/10;
            }
            if (s==tam){
                cout<<tam<<"la so doi xung";
            }
            else cout<<tam<<"khong la so doi xung";
            system("pause");
        }
        else if  (luachon==3){
            int n;
            do{
                cout<<"\n Nhap vao so nguyen n";
                cin>> n;
                if (n<=0){
                    cout<<"\n n khong thoa man, moi nhap lai";
                }
            }while (n<=0);
            
            int m;
            do{
                cout<<"\n Nhap vao so nguyen m";
                cin>> m;
                if (m<=0){
                    cout<<"\n m khong thoa man, moi nhap lai";
                }
            }while (m<=0);
            int x=n;// so ngay mang dc

            int dem =0;// so vo me cho trong n ngay
            while(n>=m){
                n=n-m+1;
                dem ++;
            }
            cout<<"so ngay mang duoc la "<< x+dem;


            system("pause");
        }
    }
    

        

        return 0;

    }
