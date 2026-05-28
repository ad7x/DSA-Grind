#include <iostream>
using namespace std;

int main() {
    // Ye line hamare code ko input.txt aur output.txt se jodti hai
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int number;
    cin >> number; // input.txt se number read karega
    cout << "input number: " << number << endl; // output.txt me likhega
    
    return 0;
}