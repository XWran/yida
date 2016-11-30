#include <iostream>
#include <math.h>

# define PI 3.1415926535

using namespace std;
void funA(); // FTm =ε(E1A1+E2A2+E3A3)
void funB(); // A1 = (π/4)(D1² - Dt²)
void funC(); // E2A2=EfAf
void funD(); // 杨氏模量方式
void funE(); // K = Af/A2
void funF(); // A2 = (π/4)[(D1+h2)² - Dt²]
void funG(); // A3 = (π/4)[(D1+h2+h3)² - Dt²)
void funH(); // N = Af/A0
void funI(); // ΔL/L0 = T/EA + a(t-t0) + Ta(t-t0)/EA
void funJ(); // (ΔL/L0)f = ε + (1+ε)a(t-t0)
void funK(); // Tf = FTm
void funL(); // Ftm/EA = ε + [(1 + ε)a' -a](t-t0)
void funM(); // ε = {1 + [π(Dt - Df)/p]^2}^1/2 -1
void funN(); // Rp = (Dt - Df)/2 + 2(P/2π)^2/(Dt - Df)
void funO(); // Dt = Df + 2Rp(ε^2 + 2ε)/(ε + 1)^2
int main()
{
    cout << PI<< endl;

    while(1)
    {
        int num ;
        cout << "========================================================" << endl;
        cout << "    1. FTm =ε(E1A1+E2A2+E3A3)" << endl;
        cout << "    2. A1 = (π/4)(D1² - Dt²)" << endl;
        cout << "    3. E2A2=EfAf" << endl;
        cout << "    4. 杨氏模量方式" << endl;
        cout << "    5. K = Af/A2" << endl;
        cout << "    6. A2 = (π/4)[(D1+h2)² - Dt²]" << endl;
        cout << "    7. A3 = (π/4)[(D1+h2+h3)² - Dt²)" << endl;
        cout << "    8. N = Af/A0" << endl;
        cout << "    9. ΔL/L0 = T/EA + a(t-t0) + Ta(t-t0)/EA" << endl;
        cout << "    10. (ΔL/L0)f = ε + (1+ε)a(t-t0)" << endl;
        cout << "    11. Tf = FTm" << endl;
        cout << "    12. Ftm/EA = ε + [(1 + ε)a' -a()](t-t0)" << endl;
        cout << "    13. ε = {1 + [π(Dt - Df)/p]^2}^1/2 -1" << endl;
        cout << "    14. Rp = (Dt - Df)/2 + 2(P/2π)^2/(Dt - Df) " << endl;
        cout << "    15. Dt = Df + 2Rp(ε^2 + 2ε)/(ε + 1)^2" << endl;
        cout << "=========================================================" << endl;
        cout << "请选择：(请输入1到15内的整数)";
        cin >> num;
        switch(num)
        {
        case 1:
            funA();
            break;
        case 2:
            funB();
            break;
        case 3:
            funC();
        case 4:
            funD();
        case 5:
            funE();
        case 6:
            funF();
            break;
        case 7:
            funG();
            break;
        case 8:
            funH();
            break;
        case 9:
            funI();
            break;
        case 10:
            funJ();
            break;
        case 11:
            funK();
            break;
        case 12:
            funL();
            break;
        case 13:
            funM();
            break;
        case 14:
            funN();
            break;
        case 15:
            funO();
            break;
        default:
            break;
        }
    }
}
void funA() //程FTm =ε(E1A1+E2A2+E3A3)
{
    cout << "已进入程FTm = ε(E1A1+E2A2+E3A3)！" << endl;
    cout << "Tm = ε(E1A1+E2A2+E3A3)/F" << endl;
    cout << "请输入ε的值：";
    double value;
    cin >> value;
    cout << endl;
    double A[3];
    double E[3];
    int i =3;
    for(int k=1; k <= i; k++)
    {
        cout << "输入E" << k  << ":";
        cin >> E[k];
        cout << "  输入A" << k << ":";
        cin >> A[k];
        cout << endl;
    }
    //sum 用来求和
    double sum = 0;
    for(int j = 1; j <= i; j++)
    {
        sum += E[j]*A[j];
    }
    //cout << sum << endl;
    cout << "请输入F的值：";
    double valueF ;
    cin >> valueF;
    cout << "结果：" <<(value*sum)/valueF <<endl;
}

void funB() // A1 = (π/4)(D1² - Dt²)
{
    cout << "已进入方程 A1 = (π/4)(D1² - Dt²)！" << endl;
    cout << "A1 = (π/4)(D1² - Dt²)" << endl;
    cout << "请输入D1的值：";
    double D1;
    double Dt;
    double A1;
    cin >> D1;
    cout << endl;
    cout << "请输入Dt的值：";
    cin >> Dt;
    cout << endl;
    cout << "A1 = "<< (PI/4)*((D1*D1)-(Dt*Dt))<< endl;
}

void funC() // E2A2=EfAf
{
    cout << "已进入方程 E2A2=EfAf" << endl;
    cout << "A2 = EfAf/E2" << endl;
    cout << "请输入Ef:";
    double Ef;
    cin >> Ef;
    cout << endl;
    cout << "请输入Af:";
    double Af;
    cin >> Af;
    cout << endl;
    cout <<"请输入E2：";
    double E2;
    cin >> E2;
    cout << endl;
    double A2;
    A2 = (Ef * Af)/E2;
    cout << "A2 = " << A2 << endl;
}

void funD() //杨氏模量
{
    cout << "已进入杨氏模量方式！";

    cout << "请输入个数i：";
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
    //cout << sum << endl;
    cout << "请输入A的值：";
    double AA;
    cin >> AA;
    cout << "结果：" << sum/AA <<endl;
    delete[] E;
    delete[] A;
}
void funE() //K = Af/A2
{
    cout << "已进入方程K = Af/A2！" << endl;
    cout << "K = Af/A2" << endl;
    double K;
    double Af;
    double A2;
    cout << "请输入Af:";
    cin >> Af;
    cout << endl;
    cout << "请输入:";
    cin >> A2;
    cout << endl;
    K = Af/A2;
    cout << "K = "<< K << endl;
}

void funF() // A2 = (π/4)[(D1+h2)² - Dt²]
{
    cout << "已进入方程A2 = (π/4)[(D1+h2)² - Dt²]！" << endl;
    cout << "A2 = (π/4)[(D1+h2)² - Dt²]" << endl;
    double A2;
    double D1;
    double h2;
    double Dt;

    cout << "请输入D1:";
    cin >> D1;
    cout << endl;
    cout << "请输入h2:";
    cin >> h2;
    cout << endl;
    cout << "请输入Dt:";
    cin >> Dt;
    cout << endl;
    double tmp = (D1+h2)*(D1+h2)-(Dt*Dt);
    A2 = (PI/4)* tmp;
    cout << "A2 = "<< A2 << endl;
}

void funG() // A3 = (π/4)[(D1+h2+h3)² - Dt²)
{
    cout << "已进入方程A3 = (π/4)[(D1+h2+h3)² - Dt²)！" << endl;
    cout << "A3 = (π/4)[(D1+h2+h3)² - Dt²)" << endl;
    double A3;
    double D1;
    double h2;
    double h3;
    double Dt;
    cout << "请输入D1:";
    cin >> D1;
    cout << endl;
    cout << "请输入h2:";
    cin >> h2;
    cout << endl;
    cout << "请输入h3:";
    cin >> h3;
    cout << endl;
    cout << "请输入Dt:";
    cin >> Dt;
    cout << endl;
    double tmp = (D1+h2+h3)*(D1+h2+h3) -Dt*Dt;
    A3 = (PI/4)*tmp;
    cout << "A3 = "<< A3 << endl;
}

void funH() // N = Af/A0
{
    cout << "已进入方程N = Af/A0！" << endl;
    cout << "N = Af/A0" << endl;
    double N;
    double Af;
    double A0;
    cout << "请输入Af:";
    cin >> Af;
    cout << endl;
    cout << "请输入A0:";
    cin >> A0;
    cout << endl;
    N = Af/A0;
    cout << "N = " << N << endl;
}

void funI() //ΔL/L0 = T/EA + a(t-t0) + Ta(t-t0)/EA
{
    cout << "已进入方程ΔL/L0 = T/EA + a(t-t0) + Ta(t-t0)/EA！" << endl;
    cout << "ΔL/L0 = T/EA + a(t-t0) + Ta(t-t0)/EA" << endl;
    //L = ΔL/L0 看成一个整体
    double L;
    double T;
    double EA;
    double a;
    double t;
    double t0;
    cout << "请输入T:";
    cin >> T;
    cout << endl;
    cout << "请输入EA:";
    cin >> EA;
    cout << endl;
    cout << "请输入a:";
    cin >> a;
    cout << endl;
    cout << "请输入t;";
    cin >> t;
    cout << endl;
    cout << "请输入t0:";
    cin >> t0;
    cout << endl;
    L = T/EA + a*(t-t0) + (T*a*(t-t0))/EA;
    cout << "ΔL/L0 = " << L<<endl;
}
void funJ() // (ΔL/L0)f = ε + (1+ε)a(t-t0)
{
    cout << "已进入方程(ΔL/L0)f = ε + (1+ε)a(t-t0)！" << endl;
    cout << "(ΔL/L0)f = ε + (1+ε)a(t-t0)" << endl;
    // L = (ΔL/L0)f 看成整体
    double L;
    // E = ε
    double E;
    double a;
    double t;
    double t0;
    cout << "请输入ε:";
    cin >> E;
    cout << endl;
    cout << "请输入a;";
    cin >> a;
    cout << endl;
    cout << "请输入t;";
    cin >> t;
    cout << endl;
    cout << "请输入t0:";
    cin >> t0;
    cout << endl;
    L = E + (1+E)*a*(t-t0);
    cout <<"(ΔL/L0)f = "<<L<< endl;
}
void funK() // Tf = FTm
{
    cout << "已进入方程Tf = FTm！" << endl;
    cout << "Tf = FTm" << endl;
    double Tf;
    double F;
    double Tm;
    cout << "请输入F:";
    cin >> F;
    cout << endl;
    cout << "请输入Tm:";
    cin >> Tm;
    cout << endl;
    Tf = F*Tm;
    cout << "Tf = " << Tf<<endl;
}
void funL() // Ftm/EA = ε + [(1 + ε)a' -a()](t-t0)
{
    cout << "已进入方程Ftm/EA = ε + [(1 + ε)a' -a)](t-t0)！" << endl;
    cout << "Ftm/EA = ε + [(1 + ε)a' -a](t-t0)" << endl;
    // T = Ftm/EA
    double T;
    // E = ε
    double E;
    double aa;
    double a;
    double t;
    double t0;
    cout << "请输入ε:";
    cin >> E;
    cout << endl;
    cout << "请输入a';";
    cin >> aa;
    cout << endl;
    cout << "请输入a;";
    cin >> a;
    cout << endl;
    cout << "请输入t;";
    cin >> t;
    cout << endl;
    cout << "请输入t0:";
    cin >> t0;
    cout << endl;
    double tmp = (1+E)*aa - a;
    tmp = tmp * (t-t0);
    T = tmp + E;
    cout << "Ftm/EA =" << T << endl;
}
void funM() // ε = {1 + [π(Dt - Df)/p]^2}^1/2 -1
{
    cout << "已进入方程ε = {1 + [π(Dt - Df)/p]^2}^1/2 -1！" << endl;
    cout << "ε = {1 + [π(Dt - Df)/p]^2}^1/2 -1" << endl;
    // E = ε
    double E;
    double Dt;
    double Df;
    double p;
    cout << "请输入Dt:";
    cin >> Dt;
    cout << endl;
    cout << "请输入Df:";
    cin >> Df;
    cout << endl;
    cout << "请输入p:";
    cin >> p;
    cout << endl;
    double tmp = PI * (Dt - Df);
    tmp = tmp /p;
    tmp = 1+ tmp * tmp;
    tmp = sqrt(tmp);
    E = tmp -1;
    cout << "ε = " << E << endl;
}

void funN() // Rp = (Dt - Df)/2 + 2(P/2π)^2/(Dt - Df)
{
    cout << "已进入方程Rp = (Dt - Df)/2 + 2(P/2π)^2/(Dt - Df)！" << endl;
    cout << "Rp = (Dt - Df)/2 + 2(P/2π)^2/(Dt - Df)" << endl;
    double Rp;
    double Dt;
    double Df;
    double p;
    cout << "请输入Dt:";
    cin >> Dt;
    cout << endl;
    cout << "请输入Df:";
    cin >> Df;
    cout << endl;
    cout << "请输入p:";
    cin >> p;
    cout << endl;
    double tmp = p /(2*PI);
    tmp = tmp * tmp * 2;
    tmp = tmp /(Dt - Df);
    tmp = tmp + (Dt -Df)*2;
    Rp = tmp;
    cout << "Rp = " << Rp<<endl;
}
void funO() // Dt = Df + 2Rp(ε^2 + 2ε)/(ε + 1)^2
{
    cout << "已进入方程Dt = Df + 2Rp(ε^2 + 2ε)/(ε + 1)^2！" << endl;
    cout << "Dt = Df + 2Rp(ε^2 + 2ε)/(ε + 1)^2" << endl;
    double Dt;
    double Df;
    double Rp;
    double E;
    cout << "请输入Df:";
    cin >> Df;
    cout << endl;
    cout << "请输入Rp:";
    cin >> Rp;
    cout << endl;
    cout << "请输入ε:";
    cin >> E;
    cout << endl;
    double tmp = 2*Rp*(E*E + 2*E);
    double flag = (E+1)*(E+1);
    Dt = Df + tmp/flag;
    cout << "Dt = " << Dt << endl;
}

