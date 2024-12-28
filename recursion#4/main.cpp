//
//  main.cpp
//  recursion#4
//
//  Created by Ethical Hacking Labs on 16/12/24.
//

#include <iostream>
#include <stack>

using namespace std;

int T,n;
stack<char> stBinary;

int printBianry( int n){
    // base case
    if ( n == 0 ) {
        return 0;
    }
    else{
        stBinary.push( n%2 + '0');
        
        // recursion
        return(printBianry(n/2));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> T;
    
    for( int test_no = 1; test_no <= T; test_no++){
        cin >> n;
        
        cout << "#" << test_no << " ";
        printBianry(n);
        
        switch (n) {
            case 0:
                cout << 0;
                break;
            default:
                while( !stBinary.empty()){
                    cout << stBinary.top();
                    stBinary.pop();
                }
        }

        cout << endl;
    }
    
    return 0;
}
