#include <iostream>
#include <vector>

using namespace std;

struct Node {
    long long sum;
    long long lazy;

    Node() {
        sum = 0;
        lazy = 0;
    }
};

void buildSegmentTree(vector<int>& arr, vector<Node>& tree, int node, int start, int end) {
    if (start == end) {
        tree[node].sum = arr[start];
        return;
    }

    int mid = (start + end) >> 1;
    buildSegmentTree(arr, tree, 2 * node + 1, start, mid);
    buildSegmentTree(arr, tree, 2 * node + 2, mid + 1, end);

    tree[node].sum = tree[2 * node + 1].sum + tree[2 * node + 2].sum;
}
void updateRange(vector<Node>& tree, int node, int start, int end, int l, int r, long long val) {
    if (tree[node].lazy != 0) {
        tree[node].sum += (end - start + 1) * tree[node].lazy;

        if (start != end) {
            tree[2 * node + 1].lazy += tree[node].lazy;
            tree[2 * node + 2].lazy += tree[node].lazy;
        }

        tree[node].lazy = 0;
    }

    if (start > r || end < l) {
        return;
    }

    if (start >= l && end <= r) {
        tree[node].sum += (end - start + 1) * val;

        if (start != end) {
            tree[2 * node + 1].lazy += val;
            tree[2 * node + 2].lazy += val;
        }

        return;
    }

    int mid = (start + end) >> 1;
    updateRange(tree, 2 * node + 1, start, mid, l, r, val);
    updateRange(tree, 2 * node + 2, mid + 1, end, l, r, val);

    tree[node].sum = tree[2 * node + 1].sum + tree[2 * node + 2].sum;
}
long long queryRange(vector<Node>& tree, int node, int start, int end, int l, int r) {
    if (tree[node].lazy != 0) {
        tree[node].sum += (end - start + 1) * tree[node].lazy;

        if (start != end) {
            tree[2 * node + 1].lazy += tree[node].lazy;
            tree[2 * node + 2].lazy += tree[node].lazy;
        }

        tree[node].lazy = 0;
    }

    if (start > r || end < l) {
        return 0;
    }

    if (start >= l && end <= r) {
        return tree[node].sum;
    }

    int mid = (start + end) >> 1;
    long long leftSum = queryRange(tree, 2 * node + 1, start, mid, l, r);
    long long rightSum = queryRange(tree, 2 * node + 2, mid + 1, end, l, r);

    return leftSum + rightSum;
}

int main() {
    int n, q; cin >> n >> q;
    vector<int> arr;
    vector<Node> tree(4 * n);
    for(int i = 1; i <= n; ++i){
    	int x; cin >> x;
    	arr.push_back(x);
	}
	buildSegmentTree(arr, tree, 0, 0, n - 1);
	while(q--){
		int type, u, v;
		cin >> type >> u >> v;
		u--;
		v--;
		if(type == 1){
			int val; cin >> val;
			updateRange(tree, 0, 0, n - 1, u, v, val);
		}else{
			cout << queryRange(tree, 0, 0, n - 1, u, v) << endl;
		}
	}

    return 0;
}

