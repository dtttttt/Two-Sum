//实现功能函数
//如果频繁用到某一个函数例如vecoter的size（）最好定义一个变量装他，省的每次都调用一遍
vector<int> twoSum(vector<int>& nums, int target){
	vector<int> result;
	vector<int> numbers(nums);
	sort(numbers.begin(), numbers.end());
	int left = 0;
	int length = nums.size();
	int right = length-1;//*这个地方要减一别忘了
	int sum = 0;
    while (left<right)
    {
		sum = numbers[left] + numbers[right];
		if (sum<target)
		{
			left++;
		}
		else if (sum>target)
		{
			right--;
		} 
		else
		{
			
			for (int i = 0; i < length; i++)
			{
				if (nums[i]==numbers[left])
				{
					result.push_back(i);
				}
				else if (nums[i] == numbers[right])  //这里写else是为了防止[3,3]，6这种情况出来的会是[0,0,1,1]
				{
					result.push_back(i);
				}
			}
			
			return result;  //必须要写，否则会一直跳不出来
		}
    }

	return result;
}