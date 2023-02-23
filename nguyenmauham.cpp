 #include<iostream>

//ham co chuc nang tim UCLN cua a vs b
using namespace std;

int UCLN(int &a, int &b){
    if (a < b)
    {
        for (int i = a; i >= 1; i--)
        {
            if(a%i==0 && b%i==0){
            return i;
            }
        }
    }
    else {
        for (int i = b; i >= 1; i--)
        {
            if(b%i==0 && a%i==0)
            {return i;}
        }
    }

}

int BCNN (int a, int b){

    return (a*b)/UCLN(a, b);
}
int main (){

    int a, b;
    cout<<"\nNhap a:";
    cin>> a;
    cout<<"\nNhap b:";
    cin>> b;
    cout<<"\nUCLN cua a va b la:"<< UCLN(a, b);
    cout<<"\nBCNN cua a va b la:"<< BCNN(a, b);
    system("pause");
    return 0;

 }