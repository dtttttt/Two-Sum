# Two-Sum
2th中为什么用vector<int> result(2)不行，因为这种声明方法就是初始化两个0，而不是vector以后就有两个数，push——back是往vector后面加，自然出来的结果是0，0，0，1
