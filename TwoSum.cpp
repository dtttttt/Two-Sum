//实现功能函数
//如果频繁用到某一个函数例如vecoter的size（）最好定义一个变量装他，省的每次都调用一遍
vector<int> twoSum(vector<int>& nums, int target){
	unordered_map<int, int> m; ///和map大致一样，只是这个是无序的，若不要求排序这个效率更高
	vector<int> res;
	int length = nums.size();
	for (int  i = 0; i < length; i++)
	{
		m[nums[i]] = i;
		//m[i] = nums[i];//这样是不对的

	}
	for (int i = 0; i < length;i++)
	{
		int result = target - nums[i];
		if (m.count(result)&&m[result]!=i)
		{
			res.push_back(i);
			res.push_back(m[result]);
			return res;
		}
	}
	return res;
		}