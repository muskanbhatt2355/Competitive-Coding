#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // string is already given to you. Please don't edit this string.
    char stringData[] = "qwe sdf dsld dssdfsqwe sdlcsd fdslkcsdsdk sdvnsdnvs dsvd d d dddqwelkmvl sdlksf qwelkmdsldm dsfkmsdf ds lknvnv dsdfdfnoiewqwek sdjnsdf djndsjnnqwnewefsjdc kqwj fsdfjsldnlsqwelkwnekennlksnq dlkneknqwn wqenln qlwn qlwknr wkernwen dkfndks ewqsdkslf efwekwkewqwen mdfsdfsdfskdnlknqwenknfsd lsklksna kasndasndqweq we qkewkwj e kjnqwne sd kqjwnekjqnwda kjqwnej dajqkjwe k wd qwekqwle kjnwqkejqw qwe jqnwjnqw djwnejwd";
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int len = s.length();
    int n = stringData.size();
    int count = 0;
    for(int l=0;l<n;l++){
        if(stringData[l]==s[0]){
            bool occurs = true;
            for(int j=1;j<len;j++){
                if(stringData[l+j]!=s[j]){
                    occurs = false;
                }
            }
            if(occurs==true){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}