#include <iostream>

using namespace std;

void funa();
int main()
{
    int num;
    while(1)
    {
        cin >> num;
        switch(num)
        {
        case 1:
            funa();
            cout<< "a"<<endl;
            break;
        case 2:
            cout<< "b"<<endl;
        }
    }
}
void funa() //杨氏模量
{
    int i;
    cin>>i;
    double *E = new double[i];
    double *A = new double[i];
    for(int k=1; k <= i; k++)
    {
        cout << "输入E" << k  << ":";
        cin >> E[k];
        cout <<  endl;
        cout << "输入A" << k << ":";
        cin >> A[k];
        cout << endl;
    }
    //sum 用来求和
    double sum = 0;
    for(int j = 1; j <= i; j++)
    {
        sum += E[j]*A[j];
    }
    cout << sum << endl;
    delete[] E;
    delete[] A;

}
