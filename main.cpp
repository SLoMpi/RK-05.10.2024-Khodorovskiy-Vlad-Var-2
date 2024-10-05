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
/*
Вывод программы:
Первые 10 слагаемых:10
Слагаемое1: 1
Слагаемое2: 0.39685
Слагаемое3: 0.23112
Слагаемое4: 0.15749
Слагаемое5: 0.116961
Слагаемое6: 0.0917202
Слагаемое7: 0.0746797
Слагаемое8: 0.0625
Слагаемое9: 0.0534167
Слагаемое10: 0.0464159
Сумма перых десяти слагаемых: 2.23115
