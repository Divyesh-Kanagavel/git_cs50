#include <iostream>
#include <string>

using namespace std;

void permute(string input,string answer){
    if(input.length() == 0){
        cout << answer << " ";
    }

    for(int i=0;i<input.length();i++){
        char ch = input[i];
        string left_substr = input.substr(0,i);
        string right_substr = input.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest, answer+ch);
    }

}
int main(){
    string input;
    cout << "Enter a string" <<endl;
    cin >> input;

    string answer = "";

    permute(input,answer);

    return 0;
}