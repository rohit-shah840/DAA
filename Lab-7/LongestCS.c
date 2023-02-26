#include<Stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct string
{
    char s[50];
    int len;
} string;

int max(int x, int y){
    if(x>y)return x;
    return y;
}

int LCS(string s1, string s2, int i , int j){
    if(i==0 || j==0) return 0;
    if(s1.s[i-1]==s2.s[j-1]){
        return 1+LCS(s1,s2,i-1,j-1);
    }else{
        return max(LCS(s1,s2,i-1,j),LCS(s1,s2,i,j-1));
    }
}

int main(){
    string s1,s2;
        printf("Enter the 1St string : ");
        scanf("%s",s1.s);
        printf("Enter the 2nd string : ");
        scanf("%s",s2.s);
        s1.len=strlen(s1.s);
        s2.len=strlen(s2.s);
        printf("The length of longest common subsequence is %d : ",LCS(s1,s2,s1.len,s2.len));
    return 0;
}