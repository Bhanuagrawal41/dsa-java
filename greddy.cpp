#include<iostream>
#include<vector>

using namespace std;
int maxActivities(vector<int> start, vector<int> end){
    int count = 1;
    int current_endTime = end[0];
    for(int i = 1; i < start.size(); i++){
        if(current_endTime < start[i]){
            count++;
            current_endTime = end[i];
        }
    }
    return count;
}


int main(){
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
   
        cout << maxActivities(start, end);

    
}