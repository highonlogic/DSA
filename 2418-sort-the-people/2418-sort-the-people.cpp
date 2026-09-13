class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<string> result(n);
        vector<pair<int,string>> combined(n);
        for(int i = 0; i < n; i++){
            combined[i] = {heights[i], names[i]};
        }
        
        sort(combined.rbegin(), combined.rend());

        for(int i =0; i<n;i++){
            result[i] = combined[i].second;
        }
        return result;
    }
};