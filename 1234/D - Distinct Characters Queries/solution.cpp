#include <bits/stdc++.h>
using namespace std;
struct Node{
	int val=0;
	int freq[26]={0};
};
 
class SegTree{
public:
	string arr;
	vector<Node> tree;
	SegTree(string a){
		arr=a;
		int n=arr.size();
		tree.resize(4*n);
		build(0,0,n-1);
	}
	void build(int index,int start,int end){
		if(start==end){
			tree[index].freq[arr[start]-'a']=1;
			tree[index].val=1;
			return ;
		}
		int mid=(start+end)/2;
		int leftChild=2*index+1;
		int rightChild=2*index+2;
		build(leftChild,start,mid);
		build(rightChild,mid+1,end);
		merge(tree[index],tree[leftChild],tree[rightChild]);
	}
	void merge(Node& node,Node& left,Node& right){
         	
 
          for(int i=0;i<26;i++){
          	node.freq[i]=left.freq[i]+right.freq[i];
          }
        
          node.val=0;
          for(int i=0;i<26;i++) {
          	if(node.freq[i]>0) node.val++;
          }
          return;
	}
	Node query(int index,int start,int end,int l,int r){
		//no overlap
		if(r<start or end<l){
			Node temp;
			return temp;
		}
		//complete overlap
		if(l<=start and end<=r) return tree[index];
		//partial overlap
		int mid=(start+end)/2;
		int leftChild=2*index+1;
		int rightChild=2*index+2;
		Node x=query(leftChild,start,mid,l,r);
		Node y=query(rightChild,mid+1,end,l,r);
		Node ans;
		merge(ans,x,y);
		return ans;
	}
	void point_update(int index,int start,int end,int pos,char newValue){
		if(start==end){
			tree[index].freq[arr[start]-'a']=0;
			arr[start]=newValue;
			tree[index].freq[arr[start]-'a']=1;
			tree[index].val=1;
			return;
		}
		int mid=(start+end)/2;
		int leftChild=2*index+1;
		int rightChild=2*index+2;
		if(pos<=mid) point_update(leftChild,start,mid,pos,newValue);
		else point_update(rightChild,mid+1,end,pos,newValue);
		merge(tree[index],tree[leftChild],tree[rightChild]);
	}
};
int main(){
	    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    // freopen("inputf.in","r",stdin);
    // freopen("outputf.out","w",stdout);
 
    string s;
    cin>>s;
 
    int q;
    cin>>q;
    SegTree seg(s);
    while(q--){
    	int type;
    	cin>>type;
    	if(type==1){
    		int x;
    		char y;
    		cin>>x>>y;
    		x--;
    		seg.point_update(0,0,(int)s.size()-1,x,y);
    	}
    	else  {
    		int x,y;
    		cin>>x>>y;
    		x--;
    		y--;
    		int ans=seg.query(0,0,(int)s.size()-1,x,y).val;
    		cout<<ans<<endl;
    	}
    }
    return 0;
}