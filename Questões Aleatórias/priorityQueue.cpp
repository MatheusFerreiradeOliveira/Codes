#include <bits/stdc++.h>
using namespace std;

int main(){
    /*priority_queue <int, vector<int>, greater<int> > lul;

    lul.push(2);
    lul.push(1);
    lul.push(3);
    lul.push(4);


    for(int it = lul.top(); !lul.empty(); lul.pop(), it = lul.top()){
        cout<<it<<endl;
    }*/

    /*unordered_*/set <int> wtf;

    /*wtf.insert(1);
    wtf.insert(2);
    wtf.insert(5);
    wtf.insert(4);
    wtf.insert(3);

    //auto it = wtf.begin();

    //cout<<*it<<endl;

    for(auto x : wtf) {
        cout<<x<<endl;
    }

    /*auto mds = wtf.lower_bound(3); // Retorna o maior contando com ele mesmo
    auto really = wtf.upper_bound(3); // retorna o maior depois dele mesmo

    cout<< *mds <<endl;
    cout<< *really<<endl;*/

    vector <int> runner;

    runner.push_back(5);
    runner.push_back(6);
    runner.push_back(4);
    runner.push_back(4);

    //auto it = max_element(runner.begin(), runner.end());
    //auto itt = min_element(runner.begin(), runner.end());

    //cout<<*itt<<endl;

    //cout<< count(runner.begin(), runner.end(), 4) << endl;


    auto ot = lower_bound(begin(runner), end(runner), 4); //busca binária com VECTOR (se usar outro fica lento) mdsss

    cout<<(*ot)<<endl;

}
