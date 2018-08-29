#-*-coding: utf-8 -*-
import numpy as np

class Solution:
	def Find(self,target,array):
		i,j = 0,0
		while i <= len(array[0]) and j <= len(array[:,0]):
			if target == array[i][j]:
				return True
			elif target == array[i][j+1]:
				return True
			elif target == array[i+1][j]:
				return True

			elif target < array[i][j+1]:
				if target < array[i+1][j]:
					return False
				else:
					i += 1
			elif target < array[i+1][j]:
				if target < array[i][j+1]:
					return False
				else:
					j += 1

			elif target > array[i][j+1] and target > array[i+1][j]:
				for n in array[i,j:]:
					if target == n:
						return True
					elif target < n:
						break
				for n in array[i:,j]:
					if target == n:
						return True
					elif target < n:
						break
			i,j = i+1,j+1

if __name__ == '__main__':
#要求输入是list,[[1,2,3],[2,4,5]]
	array = np.array([[1,2,8,9],[2,4,9,12],[4,7,10,13],[6,8,11,15]])
	temp = Solution().Find(7,array)
	print(temp)
