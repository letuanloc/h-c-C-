#include<iostream>

using namespace std;
/*Cu phap ham
        <kieu du lieu cua ham> <ten ham> (<cac tham so truyen vao neu co>)
        {
            <than ham> <=> cac doan code thuc hien chuc nang cua ham
        }

1.Ham co kieu du lieu tra ve thi dung lenh return de tra ve gia tri cho ham
2.Ham khong co kieu du lieu tra ve  <kieu du lieu cua ham> : void
*/

int Tinh_giai_thua(int n){
    int gt = 1;

    for (int i=2; i<=n; i++){
        
        gt *= i;

    }
return gt;
}

void In_thong_bao(){

    cout<<"\n toi ten la loc";
    
}

int main (){
    int a, b, c;

    do {
        cout<<"\nNhap vao so nguyen a:";
        cin>> a;
        if(a<=0)
            cout<<"\nSo a khong thoa man, yeu cau nhap lai!";
        system("pause");
    }while (a<=0);


    do {
        cout<<"\nNhap vao so nguyen b:";
        cin>> b;
        if(b<=0)
            cout<<"\nSo b khong thoa man, yeu cau nhap lai!";
        system("pause");
    }while (b<=0);

    do {
        cout<<"\nNhap vao so nguyen c:";
        cin>> c;
        if(c<=0)
            cout<<"\nSo c khong thoa man, yeu cau nhap lai!";
        system("pause");
    }while (c<=0);

    //tinh giai thua a
    int gt_a = Tinh_giai_thua(a);

    //tinh giai thua b
    int gt_b = Tinh_giai_thua(b);

    //tinh giai thua c
    int gt_c = Tinh_giai_thua(c);

    cout<<"giai thua cua a:"<<gt_a;
    cout<<"giai thua cua b;"<<gt_b;
    cout<<"giai thua cua c;"<<gt_c;
    

    system("pause");
    return 0;

    

    
}