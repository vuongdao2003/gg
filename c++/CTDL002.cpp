#include <iostream>
#include <string>
using namespace std;

void generate_binary_strings(string& s, int index) {
    // Base case: Nếu đã duyệt hết chuỗi, in chuỗi hiện tại
    if (index == s.length()) {
        cout << s << endl;
        return;
    }
    
    // Nếu ký tự hiện tại là '?'
    if (s[index] == '?') {
        // Thay '?' bằng '0'
        s[index] = '0';
        generate_binary_strings(s, index + 1);
        
        // Thay '?' bằng '1'
        s[index] = '1';
        generate_binary_strings(s, index + 1);
        
        // Khôi phục lại ký tự '?' ban đầu
        s[index] = '?';
    } else {
        // Nếu ký tự hiện tại không phải là '?', tiếp tục duyệt sang ký tự tiếp theo
        generate_binary_strings(s, index + 1);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s;
        cin>>s1>>s2;
        s=s1+s2;
    generate_binary_strings(s, 0);
    }
    return 0;
}