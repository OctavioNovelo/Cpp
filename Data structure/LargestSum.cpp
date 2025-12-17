/* You are given the root of a binary tree and a positive integer k.

The level sum in the tree is the sum of the values of the nodes that are on the same level.

Return the kth largest level sum in the tree (not necessarily distinct). If there are fewer than k levels in the tree, return -1.

Note that two nodes are on the same level if they have the same distance from the roo */


#include <bits/stdc++.h>

using namespace std;

int main(){

    long long k;
    long long n;
    long long result;
    
    cin >> n >> k;

    long long sum[n];
    long long root[n];
    for(int i = 0; i <= n; i++){
        cin >> root[i];
    }

    for(int i = 0; i < n; i++){
        sum[n]= root[i] + root[i + 1];
    }

    for(int i = 0; i < n; i++){
        sum[i];
        if(sum[i + 1] < sum[i]){
            result = sum[i];
        }
        else if(sum[i + 1] > sum[i]){
            result = sum[i + 1];
        }
    }

    printf("%d", result);
}
