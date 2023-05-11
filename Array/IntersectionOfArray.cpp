#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j])
        j++;
        else {
          ans.push_back(arr1[i]);
          i++;
          j++;
        }
    }
    return ans;
}
//Time Complexity O(n1+n2);
//space complexity O(1);