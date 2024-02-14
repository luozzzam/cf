#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int N=2e5+10;
const int M=1e6+10;
int T;

struct P4I{
    int minx;
    int maxx;
    int minv;
    int maxv;
    P4I(int minx=0,int maxx=0,int minv=M,int maxv=0){
        this->minx=minx;
        this->maxx=maxx;
        this->minv=minv;
        this->maxv=maxv;
    }
};

struct Tree{
    int l,r;
    int minv,maxv,minx,maxx;
    Tree(int l=0,int r=0,int minv=M,int maxv=0,int minx=0,int maxx=0){
        this->l=l;
        this->r=r;
        this->minv=minv;
        this->maxv=maxv;
        this->minx=minx;
        this->maxx=maxx; 
    }
}tree[4*N];

int n,m,mod;

int arr[N];

void pushup(int root){
    int left=root*2;
    int right=root*2+1;
    if(tree[root].maxv<tree[left].maxv){
        tree[root].maxv=tree[left].maxv;
        tree[root].maxx=tree[left].maxx;
    }
    if(tree[root].minv>tree[left].minv){
        tree[root].minv=tree[left].minv;
        tree[root].minx=tree[left].minx;
    }
    
    if(tree[root].maxv<tree[right].maxv){
        tree[root].maxv=tree[right].maxv;
        tree[root].maxx=tree[right].maxx;
    }
    if(tree[root].minv>tree[right].minv){
        tree[root].minv=tree[right].minv;
        tree[root].minx=tree[right].minx;
    }

}

void build(int root,int l,int r){
    if(l>r) return ;
    tree[root]=Tree(l,r,arr[l],arr[l],l,l);
    if(l==r) return ;
    int mid=(l+r)/2;
    build(root*2,l,mid);
    build(root*2+1,mid+1,r);
    pushup(root);
}

P4I query(int root,int l,int r){
    if(l>r) return P4I(-1,-1,M,0);
    if(tree[root].l>=l&&tree[root].r<=r) return P4I(tree[root].minx,tree[root].maxx,tree[root].minv,tree[root].maxv);
    int mid=tree[root*2].r;
    P4I ans=P4I(l,l,arr[l],arr[l]);
    if(l<=mid){
        P4I tmp=query(root*2,l,r);
        if(tmp.maxv>ans.maxv){
            ans.maxv=tmp.maxv;
            ans.maxx=tmp.maxx;
        }
        if(tmp.minv<ans.minv){
            ans.minv=tmp.minv;
            ans.minx=tmp.minx;
        }
    }
    if(r>mid){
        P4I tmp=query(root*2+1,l,r);
        if(tmp.maxv>ans.maxv){
            ans.maxv=tmp.maxv;
            ans.maxx=tmp.maxx;
        }
        if(tmp.minv<ans.minv){
            ans.minv=tmp.minv;
            ans.minx=tmp.minx;
        }
    }
    if(ans.minv==ans.maxv){
        ans.minx=-1;
        ans.maxx=-1;
    } 

    return ans;
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;++i) cin>>arr[i];
    build(1,1,n);
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        P4I ans=query(1,l,r);
        if(ans.maxv==ans.minv){
            ans.maxx=-1;
            ans.minx=-1;
        }
        cout<<ans.minx<<" "<<ans.maxx<<endl;
    }
    cout<<endl;
}

int main(){
    cin>>T;
    while(T--) solve();

    return 0;
}


