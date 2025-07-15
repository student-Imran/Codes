#include<bits/stdc++.h>
using namespace std; 
   vector<string>v = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "inline", "int", "long", "register", "restrict", "return", "short",
        "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", "asm", "bool", "catch", "class",
        "const_cast", "delete", "dynamic_cast", "explicit", "export", "false",
        "friend", "mutable", "namespace", "new", "operator", "private", "protected",
        "public", "reinterpret_cast", "static_cast", "template", "this", "throw",
        "true", "try", "typeid", "typename", "using", "virtual", "wchar_t"
    };
void solve()
{
	string s;
	getline(cin,s);
	//cout<<s<<'\n';
	if(find(v.begin(),v.end(),s)!=v.end()){
		cout<<"Valid Keyword and Valid Identifiers"<<'\n';
		return;
	}
	else{
		if(s[0]>='0' and s[0]<='9'){
			cout<<"Invalid Identifiers and Invalid Keyword\n";
			return;
		}
		for(int i=0;i<s.size();i++){
			if(s[i]==' '){
					cout<<"Invalid Identifiers and Invalid Keyword\n";
					return;
				}
			}
		
		
	}
	cout<<"Invalid Keywords and Valid identifiers\n";
  
}  

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	t=1;
	//cin.ignore();
	while(t--)
	{
		solve();
	}
	return 0;

}

