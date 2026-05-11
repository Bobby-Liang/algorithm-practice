# Python 与 C++ 对照

## 判断字符是否存在

### Python

```python
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
    
```

### C++

```cpp
string s = "abcdef";
if (s.find('c') != string::npos) {
    cout << "ok";
}
```

## 删除字符

### Python

```python
s = s.replace("c", "")
```

### C++

```cpp
s.erase(remove(s.begin(), s.end(), 'c'), s.end());
```
