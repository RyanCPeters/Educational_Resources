// Yusuf Pisan pisan@uw.edu
// 15 Jan 2018

// some interactive and non-interactive testes to test BinarySearchTree

#include <iostream>
#include <sstream>
#include <vector>
// climits needed under linux, not needed under MacOS
#include <climits>

#include "binarysearchtree.h"
#include "binarynode.h"

using namespace std;

void itemDisplay(string& anItem) {
    cout << anItem << " ";
}

string getString() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    return str;
}

vector<string> getStrings() {
    string longString;
    cout << "Enter multiple strings: ";
    cin.clear();
    cin.ignore(INT_MAX,'\n');
    getline(cin, longString);
    stringstream ss;
    ss << longString;
    vector<string> v;
    string str;
    while (getline(ss, str, ' ')) {
        v.push_back(str);
    }
    return v;
}

void treeMenuString() {
    BinarySearchTree<string> bst;
    const string menu = "treeMenuString\n"
                        "1. Add\n2. Search\n"
                        "3. Inorder traverse\n"
                        "4. Height & Number of nodes\n"
                        "5. Rebalance\n"
                        "6. Add Multiple\n"
                        "7. Clear tree\n"
                        "8. Create tree from sorted array\n"
                        "10. Exit\n>> ";
    int choice;
    string str;
    cout << menu;
    while (true) {
        cin >> choice;
        switch (choice) {
        case 1:
            str = getString();
            cout << (bst.add(str) ? "" : "Not ") << "Added " << str << endl;
            break;
        case 2:
            str = getString();
            cout << (bst.contains(str) ? "" : "Not ") << "Found " << str << endl;
            break;
        case 3:
            bst.inorderTraverse(itemDisplay);
            cout << endl;
            break;
        case 4:
            cout << "Height: " << bst.getHeight() << endl;
            cout << "Number of nodes: " << bst.getNumberOfNodes() << endl;
            break;
        case 5:
            bst.rebalance();
            break;
        case 6:
            for (string str: getStrings())
                cout << (bst.add(str) ? "" : "Not ") << "Added " << str << endl;
            break;
        case 7:
            bst.clear();
            break;
        case 8: {
            bst.clear();
            vector<string> v {getStrings()};
            bst.readTree(&v[0], v.size());
            break;
        }
        case 10: {
            bst.clear();
            return;
        }
        default:
            cout << "Bad input" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        bst.displaySideways();
        cout << menu;
    }
}


void treeMenuInt() {
    BinarySearchTree<int> bst;
    const string menu = "treeMenuInt\n1. Add\n10. Exit\n>> ";
    int choice;
    int number;
    cout << menu;
    while (true) {
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter a number: ";
            cin >> number;
            cout << (bst.add(number) ? "" : "Not ") << "Added " << number << endl;
            break;
        case 10:
            bst.clear();
            return;
        default:
            cout << "Bad input" << endl;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX,'\n');
            }
        }
        bst.displaySideways();
        cout << menu;
    }
}

int main() {
    BinarySearchTree<string> bst1;
    BinarySearchTree<string> bst2;
    bst1.add("g");
    bst1.add("d");
    bst1.add("k");
    cout << ((bst1 != bst2) ? "OK" : "ERR") << ": bst1 != bst2" << endl;
    bst2.add("g");
    bst2.add("d");
    bst2.add("k");
    cout << ((bst1 == bst2) ? "OK" : "ERR") << ": bst1 == bst2" << endl;
    cout << (bst1.contains("d") ? "OK" : "ERR") << ": bst1 contains d" << endl;
    cout << (bst1.contains("x") ? "ERR" : "OK") << ": bst1 does not contain x" << endl;
    cout << (bst1.add("g") ? "ERR" : "OK") << ": adding g second time returns false" << endl;
    BinarySearchTree<string> bst3("g");
    cout << (bst3.contains("x") ? "ERR" : "OK") << ": bst3 does not contain x" << endl;
    cout << (bst3.contains("g") ? "OK" : "ERR") << ": bst3 contains g" << endl;
    BinarySearchTree<string> bst4(bst2);
    cout << ((bst4 == bst2) ? "OK" : "ERR") << ": bst4 == bst2" << endl;
    treeMenuString();
    // treeMenuInt();
    return 0;
}