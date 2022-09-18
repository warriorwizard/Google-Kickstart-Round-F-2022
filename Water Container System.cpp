void solve(){   
    int n,qq;
    cin>>n>>qq;

    vector<vector<int>> adj(n+1);
int j=1,v,u;
    while(j<=n){
        cin>>v>>u;
        adj[u].push_back(v);
        adj[v].push_back(u);
j++;
    }

    vector<int> hi(qq);
    for(auto &x:hi) cin>>hi;

    vector<int> par(n+1, -1);
    queue<int> q;
    q.push(1);

    int ans = 1;
   
    while(!q.empty()){
        int sz = q.size();
        qq -= sz;

        if(qq >= 0){
            ans += sz;

            for(int i=0; i<sz; i++){
                int u = q.front();
                q.pop();

                for(auto v : adj[u]){
                    if(v!=par[u]){
                        q.push(v);
                        par[v] = u;
                    }
                }
            }
            continue;
        }
        break;
    }

    cout<<ans-1;
}
