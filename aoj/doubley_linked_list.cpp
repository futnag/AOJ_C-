#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct Node {
    int key;
    Node *prev, *next;
};

// 双方向リストの初期化
// *をつけて宣言すると、ポインタ構造体変数になる
// 一つのデータ群の先頭アドレスを指していて、メンバ変数を指しているわけではない
// nil = 構造体変数のアドレス
Node *nil;

void init() {
    nil = (Node *)malloc(sizeof(Node));
    // ポインタ変数からメンバにアクセスする
    nil -> next = nil;
    nil -> prev = nil;
}

void insert(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x -> key = key;

    // 番兵の直後に要素を追加
    x -> next = nil -> next;//x's next = nil's next
    nil -> next -> prev = x;//nil's next's prev = x
    nil -> next = x;//nil's next = x
    x -> prev = nil;//x's prev = nil
}

Node* listSearch(int key) {
    Node *cur = nil -> next;//番兵の次の要素からたどる

    while (cur != nil && cur -> key != key) {
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t) {
    if (t == nil) return;//tが番兵のときは処理しない
    t -> prev -> next = t -> next;
    t -> next -> prev = t -> prev;
    free(t);
}

void deleteFirst() {
    deleteNode(nil -> next);
}

void deleteLast() {
    deleteNode(nil -> prev);
}

void deleteKey(int key) {
    // 検索したノードを削除
    deleteNode(listSearch(key));
}

void printList() {
    Node *cur = nil->next;
    int isf = 0;

    while(1) {
        if (cur == nil) break;
        if (isf++ > 0) cout << " ";
        cout << cur -> key;
        cur = cur -> next;
    }
    cout << endl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    string order;
    init();
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> order;

        if (order == "insert") {
            cin >> m;
            insert(m);
        } else if (order == "delete") {
            cin >> m;
            deleteKey(m);
        } else if (order == "deleteFirst") {
            deleteFirst();
        } else if (order == "deleteLast") {
            deleteLast();
        } else {
            cout << "error" << endl;
        }
    }

    printList();

    return 0;
}










