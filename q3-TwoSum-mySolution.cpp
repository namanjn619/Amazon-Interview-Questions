pair<int,int> twoSum(vector<int> &A, int target) {
    // add your logic here
	for(int i=0; i<A.size()-1; i++){
		for(int j=i+1; j<A.size(); j++){
			if(A[i]+A[j] == target){
				return {i, j};
			}
		}
	}
	return {-1, -1};
}