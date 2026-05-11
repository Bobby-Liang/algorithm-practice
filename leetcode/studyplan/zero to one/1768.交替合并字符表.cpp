class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        list1=[]
        list2=[]
        ans=""
        n=0
        for i in word1:
            list1.append(i)
        for i in word2:
            list2.append(i)
        if len(list1)>len(list2):
            while n < len(list1):
                while n<len(list2):                    
                    ans+=list1[n]
                    ans+=list2[n]
                    n+=1
                ans+=list1[n]
                n+=1
        elif len(list1) < len(list2):
            while n < len(list2):
                while n<len(list1):
                    ans+=list1[n]
                    ans+=list2[n]
                    n+=1
                ans+=list2[n]
                n+=1
        else:
            while n < len(list2):
                ans+=list1[n]
                ans+=list2[n]
                n+=1
        return(ans)
    
