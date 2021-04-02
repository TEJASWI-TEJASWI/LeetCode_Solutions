class Solution {
public:    
    vector<int> getRow(int rowIndex) {
	vector<int> prev;
	for(int i = 0; i <= rowIndex; i++){
		vector<int> current;
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i) current.push_back(1);
			else{
				current.push_back(prev[j-1] + prev[j]);
			}
		}
		prev = current;
	}
	return prev;
}
};