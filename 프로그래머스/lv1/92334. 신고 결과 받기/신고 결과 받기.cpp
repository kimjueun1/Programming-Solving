#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0); 
    map<string, int> member; // member 이름과 idx순서 저장
    map<string, set<string>> report_map;
    
    //member idx 저장
    for(auto i=0; i<id_list.size(); i++){
        // cout << id_list[i] << " ";
        member[id_list[i]] = i;
        // cout << member[id_list[i]] << endl;
    }
    for(auto r: report) {
        stringstream ss(r);
        string from, to;
        ss >> from >> to;
        
        report_map[to].insert(from);
    }
    for(auto iter: report_map){
        if(iter.second.size()>=k){
            for(auto se: iter.second){
                answer[member[se]]++;
            }
        }
    }
    return answer;
}