# binary_search(二分法查找)

## 应用场景

在**有序**的一组数据中，查找某一元素的位置

## 基本思想

对于一组数据，先判断*中间*的数据与所需查找数据进行对比，逐步缩小范围，变为上次的二分之一

```c++
if(guess > mid)
    low = mid;
else if(guess < mid)
    high = mid
mid = (low + high)/2;
```
