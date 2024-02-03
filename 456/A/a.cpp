#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int N=2e5+10;

struct Node{
    int price;
    int weight;
    int position;
    Node(int p,int w,int pos){
        price=p;
        weight=w;
        position=pos;
    }
};

int T;

int n,m;
int arr[N];
char s[N];

vector<Node> sort1,sort2;
vector<Node> a;

int cmpPrice(Node a,Node b){
    if (a.price==b.price) return a.weight>b.weight;
    return a.price>b.price;
}

int cmpWeight(Node a,Node b){
    if (a.weight==b.weight) return a.price>b.price;
    return a.weight>b.weight;
}

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        Node t=Node(x,y,i);
        a.push_back(t);
        sort1.push_back(t);
        sort2.push_back(t);
    }
    
    sort(sort1.begin(),sort1.end(),cmpPrice);
    sort(sort2.begin(),sort2.end(),cmpWeight);
   
    for(int i=0;i<n;++i){
        int x=sort1[i].position;
        int y=sort2[i].position;
        if(x!=y&&(sort1[i].price!=sort2[i].price)&&(sort1[i].weight!=sort2[i].weight)){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl; 
    return 0;
}


