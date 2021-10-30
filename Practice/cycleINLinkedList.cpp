//https://leetcode.com/problems/linked-list-cycle-ii/

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> maps;
        maps[head]++;
        while(head!=NULL){
            if(maps[head->next]==1) return head->next;
            maps[head->next]++;
            head = head->next;
        }
        return NULL;
    }
};

/*
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/