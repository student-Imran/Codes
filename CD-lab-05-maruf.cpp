#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

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

	int t;
	t=1;
	//cin.ignore();
	while(t--)
	{

{
	string s;
	getline(cin,s);
	if(find(v.begin(),v.end(),s)!=v.end()){
		cout<<"The  input is a keyword and an identifiers"<<'\n';
	
	}
	else{
		if(s[0]>='0' and s[0]<='9'){
			cout<<" The input  is an Invalid Identifier and  an Invalid Keyword\n";
			
		}
		for(int i=0;i<s.size();i++){
			if(s[i]==' '){
					cout<<"The input is an Invalid Identifier and an Invalid Keyword\n";
					
				}
			}
		
		
	}
	cout<<"The input is an Invalid Keywords but a Valid identifier\n";
  
}  
	}
	return 0;

}