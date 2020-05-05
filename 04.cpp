class Solution {
public:
    int findComplement(int num) {
        int mask = 0, tmp=num;
	while( tmp ) {
		tmp = tmp >> 1;
		mask = mask << 1;
		mask = mask | 1;
	}
	return ~num & mask;
        
    }
};
