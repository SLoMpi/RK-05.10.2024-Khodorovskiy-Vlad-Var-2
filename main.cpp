#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N=10;
    double sum=0;
    cout<<"Первые 10 слагаемых:"<<N<<endl;
    for(int i=1;i<=N;++i) {
        double tecuhslog= 1.0/pow(i, 4.0/3.0);
        cout<<"Слагаемое"<<i<<":"<<tecuhslog<<endl;
        sum+=tecuhslog;
    }
    cout<<"Сумма перых десяти слагаемых:"<<sum<<endl;
    return 0;
}
