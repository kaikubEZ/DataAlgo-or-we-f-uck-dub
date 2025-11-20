#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <string>

using std::string;

void change_1(std::stack<std::vector<std::queue<int>>> &a, int from, int to){
    std::stack<std::vector<std::queue<int>>> newStack;

    while(a.size()!=0){
        std::vector<std::queue<int>> newVec;
        std::vector<std::queue<int>> currentVec = a.top();
        for(auto &q:currentVec){
            std::queue<int> tempQ;
            while(q.size()!=0){
                int value = q.front();
                tempQ.push(q.front() == from ? to : value);
                q.pop();
            }
            newVec.push_back(tempQ);
        }
        a.pop();
        newStack.push(newVec);
    }

    while(!newStack.empty()){
        a.push(newStack.top());
        newStack.pop();
    }

}

void change_2(std::map<string, std::pair<std::priority_queue<int>, int>> &a, int from, int to){
    for(auto &i : a){
        auto &pq = i.second.first;
        std::priority_queue<int> updatepq;

        while(!pq.empty()){
            int value = pq.top();
            pq.pop();
            updatepq.push(value == from ? to : value);
        }

        pq = std::move(updatepq);

        if (i.second.second == from) {
            i.second.second = to;
        }

    }
}

void change_3(std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> &a, int from, int to){
    std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> updateSet;

    for(auto &i : a){
        std::list<int> updateList;
        for(auto value : i.first){
            updateList.push_back(value == from ? to:value);
        }

        std::map<int, std::pair<int, string>> updatedMap;
        for(auto &m:i.second){
            int nKey = (m.first == from? to: m.first);
            int nVale = (m.second.first == from ? to:m.second.first);
            updatedMap.emplace(nKey,std::make_pair(nVale,m.second.second));
        }

        updateSet.emplace(std::move(updateList),std::move(updatedMap));
    }

    a=std::move(updateSet);

}

#endif
