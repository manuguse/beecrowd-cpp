#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int dia_inicio, dia_fim, h_inicio, h_fim, 
    m_inicio, m_fim, s_inicio, s_fim;
    char dia[4], pontos[3];

    cin >> dia >> dia_inicio;
    cin >> h_inicio >> pontos >> m_inicio >> pontos >> s_inicio;
    cin >> dia >> dia_fim;
    cin >> h_fim >> pontos >> m_fim >> pontos >> s_fim;

    int seg_inicio = dia_inicio*24*60*60 + h_inicio*60*60 + m_inicio*60 + s_inicio;
    int seg_fim = dia_fim*24*60*60 + h_fim*60*60 + m_fim*60 + s_fim;

    int seg_total = seg_fim - seg_inicio;

    int dias = seg_total/(24*60*60);
    int horas = (seg_total%(24*60*60))/(60*60);
    int minutos = ((seg_total%(24*60*60))%(60*60))/60;
    int segundos = ((seg_total%(24*60*60))%(60*60))%60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;
    
    return 0;
}