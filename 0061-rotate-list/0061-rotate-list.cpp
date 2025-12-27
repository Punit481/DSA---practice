/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findNode(ListNode* temp, int k)
    {
        int cnt = 1;
        while(temp!=NULL)
        {
            if(cnt == k) return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next != NULL)
        {
            len++;
            tail = tail->next;
        }
        if(k % len == 0) return head;
        k = k % len;
        tail->next = head;

        ListNode* newNode = findNode(head, len - k);

        head = newNode->next;
        newNode->next = NULL;

        return head;
    }
};
static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int init = [] {
    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());
    for (string str, k_str; getline(cin, str) && getline(cin, k_str); cout << '\n') {
        const int n = ranges::count(str, ',') + 1;
        int k = stoi(k_str) % n;
        if (n == 1 || k == 0) {
            cout << str;
            continue;
        }
        auto it = str.end() - 1;
        for (int commas = 0; it != str.begin() && commas != k; --it) if (*it == ',') ++commas;
        int dist = distance(str.begin(), it) + 2;
        string rotate = str.substr(dist, str.size() - 1 - dist);
        str.erase(it + 1, str.end() - 1);
        str.erase(0, 1);
        cout << '[' << rotate << ',' << str;
    }
    exit(0);
    return 0;
}();