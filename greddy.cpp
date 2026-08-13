// #include<iostream>
// #include<vector>

// using namespace std;
// int maxActivities(vector<int> start, vector<int> end){
//     int count = 1;
//     int current_endTime = end[0];
//     for(int i = 1; i < start.size(); i++){
//         if(current_endTime < start[i]){
//             count++;
//             current_endTime = end[i];
//         }
//     }
//     return count;
// }


// int main(){
//     vector<int> start = {1, 3, 0, 5, 8, 5};
//     vector<int> end = {2, 4, 6, 7, 9, 9};
//     vector<pair<int, int>> activities(3, make_pair(0, 0));
//     activities[0] = make_pair(0,9);

   
//         cout << maxActivities(start, end);

    
// }


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      int childgreed = 0;
      int cookie = 0;
      int count = 0;
      sort(g.begin(),g.end());
      sort(s.begin(), s.end());

      while(cookie < s.size() && childgreed < g.size()){
        if(s[cookie] >= g[childgreed]){
            count++;
            childgreed++;
            cookie++;
        }else{
        cookie++;
        }
      }  
      return count;
    }
};