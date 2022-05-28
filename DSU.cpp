// DSU code
vector<int> par(100005);
vector<int> sz1(100005);

int getPar(int v){
    return par[v]==v?v:(par[v]=getPar(par[v]));
}
bool unit(int a,int b){
    a=getPar(a);
    b=getPar(b);
    if(a==b)return false;
    if(sz1[a]<sz1[b])swap(a,b);
    sz1[a]+=sz1[b];
    par[b]=a;
    return true;
}
