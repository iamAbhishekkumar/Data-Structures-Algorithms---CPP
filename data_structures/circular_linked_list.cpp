#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define vpii vector<pair<int, int>>

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(struct Node *head) {
    if (head != NULL) {
        struct Node *temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    } else {
        cout << "empty" << endl;
    }
    cout << endl;
}

Node *reverse(Node *head) {
    if (head == nullptr || head->next == nullptr) return head;

    Node *curr = head, *next, *prev = nullptr;
    do {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } while (curr != head);
    head->next = prev;
    return prev;
}

// Function to delete a node from the circular linked list
Node *deleteNode(Node *head, int key) {
    if (head == nullptr || head->next == nullptr) return head;
    Node *fast = head;
    Node *slow = nullptr;
    do {
        if (fast->data == key) {
            if (slow) {
                slow->next = slow->next->next;
                return head;
            } else {
                do {
                    slow = fast;
                    fast = fast->next;
                } while (fast != head);
                slow->next = slow->next->next;
                return slow->next;
            }
        }
        slow = fast;
        fast = fast->next;
    } while (fast != head);
    return head;
}

int32_t main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Reading input into a vector
        while (ss >> number) {
            arr.push_back(number);
        }

        int key;
        cin >> key;
        cin.ignore();

        // Creating the circular linked list
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        tail->next = head;  // Make the list circular

        // Delete the node with the given key
        head = deleteNode(head, key);

        // Reverse the circular linked list
        head = reverse(head);

        // Print the modified list
        printList(head);
    }
    return 0;
}