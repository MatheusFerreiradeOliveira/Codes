#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    while(n1!= 0 && n2!= 0 && n3!=0 && n4!= 0 && n5!= 0)
    {
        int mediodele, maiordele, menordele, maiormeu, menormeu;
        int vaidarcerto = 0;
        if(n1 > n2 && n2 > n3){
            mediodele = n2;
            maiordele = n1;
            menordele = n3;
        }
        if(n1 > n3 && n3 > n2){
            mediodele = n3;
            maiordele = n1;
            menordele = n2;
        }
        if(n2 > n1 && n1 > n3){
            mediodele = n1;
            maiordele = n2;
            menordele = n3;
        }
        if(n2> n3 && n3 > n1){
            mediodele = n3;
            maiordele = n2;
            menordele = n1;
        }
        if(n3 > n1 && n1 > n2){
            mediodele = n1;
            maiordele = n3;
            menordele = n2;
        }
        if(n3 > n2 && n2 > n1){
            mediodele = n2;
            maiordele = n3;
            menordele = n1;
        }
        if(n4 > n5){
            menormeu = n5;
            maiormeu = n4;
        }
        else{
            menormeu = n4;
            maiormeu = n5;
        }
        if(maiormeu > maiordele && menormeu > maiordele)
            vaidarcerto = 8;
        else if(maiormeu > maiordele && menormeu > mediodele)
            vaidarcerto = 6;
        else if(maiormeu < maiordele &&  menormeu > mediodele)
            vaidarcerto = 6;
        else if(maiormeu > maiordele && menormeu > menordele)
            vaidarcerto = 5;
        else if(maiormeu > maiordele && menormeu < menordele)
            vaidarcerto = 4;

        /*else if((n5 > n1 && n5 > n2) || (n5 > n2 && n5 > n3) || (n5 > n3 && n5 > n1))
            vaidarcerto += 3;
        else if(n5 > n1 || n5> n2 || n5 > n3)
            vaidarcerto += 1;
        else if((n4 > n1 && n4 > n2) || (n4 > n2 && n4 > n3) || (n4 > n3 && n4 > n1))
            vaidarcerto += 3;
        else if(n4 > n1 || n4 > n2 || n4 > n3)
            vaidarcerto += 1;*/
        if(vaidarcerto == 8)
        {
            int i;
            for(i=1; i == n1 || i == n2 || i == n3 || i == n4 || i == n5; i++);
            cout<<i<<endl;
        }
        else if(vaidarcerto == 6)
        {
            int j;
            for(j=1; j <= mediodele; j++);
            if(j == maiordele || j == n4 || j == n5)
                j++;
            if(j == maiordele || j == n4 || j == n5)
                j++;
            if(j == maiordele || j == n4 || j == n5)
                j++;
            if(j > 52)
                cout<<-1<<endl;
            else
                cout<<j<<endl;
        }
        else if(vaidarcerto == 5 || vaidarcerto == 4)
        {
            int j;
            for(j=1; j <= maiordele; j++);
            if(j == maiormeu)
                j++;
            if(j > 52)
                cout<<-1<<endl;
            else
                cout<<j<<endl;
        }
        else
            cout<<-1<<endl;
        cin>>n1>>n2>>n3>>n4>>n5;
    }
    return 0;
}
