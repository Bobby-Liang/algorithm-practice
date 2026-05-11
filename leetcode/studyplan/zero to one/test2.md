# Python 与 C++ 对照

## 判断字符是否存在

### Python

```python
if "c" in "abcdef":
    print("ok")
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
