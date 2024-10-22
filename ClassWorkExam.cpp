#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
int checkpal(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}



int dp[100][100];
int LCS(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    dp[m + 1][n + 1] = { 0 };
    int maxLength = 0;


    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = std::max(maxLength, dp[i][j]);
            }
            else {
                dp[i][j] = 0;
            }
        }
    }
    return maxLength;
}

int main() {





    /* string s; std::cin >> s;
     for (int i = 0; i < s.size(); i++)
     {
         s[i] = tolower(s[i]);
     }
     if (checkpal(s) == 1) cout << "true" << endl;
     else cout << "false" << endl;
    */










    /* int n; cin >> n;
     vector<int>v(n);
     for (int i = 0; i < n; i++) cin >>  v[i];

     for (int gap = n / 2; gap > 0; gap /= 2)
     {
         for (int j = gap; j < n; j++)
         {
             int temp = v[j];
             int k;
             for (k = j; k >= gap && v[k - gap] > temp; k -= gap)
             {
                 v[k] = v[k - gap];
             }
             v[k] = temp;
         }
     }
     for (int i = 0; i < n; i++)
     {
         cout << v[i] << " ";
     }*/








     /* string s1; cin >> s1;
      string s2; cin >> s2;
      cout << LCS(s1, s2);*/


}




/*


struct Node {
    int data;
    Node* next;
};
class LinkedList {
    Node* head;

public:
    LinkedList() : head(NULL) {}
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtPosition(int value, int position) {
        if (position < 1) {
            cout << "Position should be >= 1." << endl;
            return;
        }

        if (position == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i) {
            temp = temp->next;
        }
        if (!temp) {
            cout << "Position out of range." << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void deleteFromEnd() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        if (!head->next) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void deleteFromPosition(int position) {
        if (position < 1) {
            cout << "Position should be >= 1." << endl;
            return;
        }

        if (position == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i) {
            temp = temp->next;
        }

        if (!temp || !temp->next) {
            cout << "Position out of range." << endl;
            return;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
    void display() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list1;

    list1.insertAtEnd(10);
    list1.insertAtEnd(20);

    list1.insertAtBeginning(5);

    list1.insertAtPosition(15, 3);

    cout << "Linked list after insertions: ";
    list1.display();

    list1.deleteFromBeginning();
    cout << "Linked list after deleting from beginning: ";
    list1.display();

    list1.deleteFromEnd();
    cout << "Linked list after deleting from end: ";
    list1.display();

    list1.deleteFromPosition(2);
    cout << "Linked list after deleting from position 2: ";
    list1.display();

    return 0;
}
*/