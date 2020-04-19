std::vector<std::string> addBorder(std::vector<std::string> picture) {
    int N = picture.size();
    int length_str = picture[0].length();
	int op_len = N+2;
	std::string op[op_len];
	for(int j = 0;j<op_len;j++){
		if(j==0||j==op_len-1){
			std::string ast;
			for(int i = 0;i<length_str+2;i++){
				ast.push_back('*');
			}
			op[j]=ast;
		}
		else{
			std::string border = "*";
			std::string el = picture[j-1];
			for(int i =0;i<length_str;i++){
				border.push_back(el[i]);
			}
			border.push_back('*');
			op[j]=border;
		}
	}
	std::vector<std::string> vec;
    for(int i = 0;i<N+2;i++){
        vec.push_back(op[i]);
    }
    return vec;
}
