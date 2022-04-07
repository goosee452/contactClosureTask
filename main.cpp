#include <iostream>
#include <string>

using namespace std;


bool contactClosureCheck(string textA,string textB){
    int b = 0;
    bool letterRepeatCheck = 0;

for(int i = 0; i < textA.length(); i++){

    if(textA[i] != textB[b]){
        return 0;
    }

    while(textA[i] == textB[b]){
        b++;
    }

}

return 1;
}

int main()
{
   string textA;
   getline(cin, textA);
   string textB;
   getline(cin, textB);

   cout << endl << contactClosureCheck(textA, textB);


    return 0;
}
