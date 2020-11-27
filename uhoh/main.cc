#include <iostream>
#include <map>
using namespace std;

int main() {

    map <int, char> mapper;
    char letter = 'a';
    int count = 1;
    for(int i = 0; i < 26; ++i){
        mapper.insert({count, letter});
        letter++;
        count++;
    }
    
    mapper.insert({99, ' '});
    
    int array[] = {6, 18, 1, 14, 11, 99, 25, 15, 21, 99, 19, 21, 3, 11};
    cout << "Are you ready?(y/n)" << endl;
    char ans;
    cin >> ans;

    if (toupper(ans) == 'Y') 
    {
        for (int i = 0; i < 14; ++i) {
            cout << mapper[array[i]];
        }
        cout << endl;
    } else {
        cout << "Maybe next time " << endl;
    }
}
