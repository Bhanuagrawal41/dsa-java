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


// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//       int childgreed = 0;
//       int cookie = 0;
//       int count = 0;
//       sort(g.begin(),g.end());
//       sort(s.begin(), s.end());

//       while(cookie < s.size() && childgreed < g.size()){
//         if(s[cookie] >= g[childgreed]){
//             count++;
//             childgreed++;
//             cookie++;
//         }else{
//         cookie++;
//         }
//       }  
//       return count;
//     }
// };

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

//             bool compare(pair<double, int> p1, pair<double, int> p2 ){
//         return p1.first > p2.first;
//     }

// int fractionalknapsack(vector<int> val, vector<int> wt, int W){
//         int n = val.size();
//         vector<pair<double, int>> ratio(n, make_pair(0.0, 0));

//         for(int i = 0; i<n; i++){
//             double r = val[i]/(double)wt[i];
//             ratio[i] = make_pair(r, i);
//         }
//         sort(ratio.begin(), ratio.end(), compare);


//             int ans = 0;

//         for(int i = 0; i<n; i++){
//             int idx = ratio[i].second;
            
//              if(wt[idx] <= W){
                
//                 ans += val[idx];
//                 W -= wt[idx];
              
//              }else{
//                 ans +=  W*ratio[i].first;
//                 W = 0;
//                 break;
//              }

             
//         }
//         return ans;
// }



// int main(){
//     vector<int> val = {60, 100, 120};
//     vector<int> wt = {10, 20, 30};

//     int W = 50;

//    cout<< fractionalknapsack(val, wt, W);
// }



// max length chain of pairs


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int , int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}
  
int Max_Length_Chain(vector<pair<int, int>> chain){
    sort(chain.begin(), chain.end(), compare);
    int max_length = chain[0].second - chain[0].first;
    int last_End = chain[0].second;

    for(int i = 1; i<chain.size(); i++){
    
        if(last_End < chain[i].first){
            max_length += chain[i].second - chain[i].first;
            last_End = chain[i].second;
        }
    }

    return max_length;

}


int main(){
    vector<pair<int, int>> chain = {{5,24}, {39, 60}, {5, 28}, {27, 40}, {50, 90}};

   cout << Max_Length_Chain(chain);
}