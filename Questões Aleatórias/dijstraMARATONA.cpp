//DIJSTRA -- SLA COMO ESCREVE
#define MAX 100000000
int dist[MAX];
int dijkstra(int orig, int dest) {
    memset(dist, 0x3f, sizeof dist);
    dist[orig] = 0;
    priority_queue<pii> pq;
    pq.push(pii(0, orig));
    while(!pq.empty()) {
        auto p = pq.top(); pq.pop();
        int d = -p.first;
        int u = p.second;
        if(u == dest) return d;
        if(d > dist[u]) continue;
        for(auto v : g[u])
            if(d + v.second < dist[v.first]) {
                dist[v.first] = d + v.second;
                pq.push(pii(-dist[v.first], v.first));
            }
    }
    return -1;}
