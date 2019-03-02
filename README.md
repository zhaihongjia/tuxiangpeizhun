# 数字图像处理作业    图像配准
## 2019年 西安交通大学 翟宏佳 电信钱61班  2160405066
## 作业说明

![imageA_](/home/xjturm03/code/homework/tuxiangpeizhun/imageA_.bmp)

我们在图片A中选取随机选取7个点，如上图所示：

坐标分别如下：

Image A 选定7个点的坐标：

1：1205 1697

2：979 1908

3：1326 2297

4：2573 2020

5：2139 1245

6：1972 1089

7：1597 1401

Image B 对应选定的7个点的坐标：

1：906 1251

2：633 1398

3：865 1866

4：2156 1927

5：1929 1056

6：1826 866

7：1370 1076

同计算两张图片之间的转换矩阵H，来达到图像配准的目的。

## 文件说明
imageA_.bmp   选取的标定数据

ImageA.jpg   原始图片A
ImageB.jpg   原始图片B
Resize_A.jpg   640x480图片A
Resize_B.jpg   640x480图片B
result.jpg    配准结果B

main.cpp   运行代码
CMakeLists.txt 
翟宏佳+电信钱61班+2160405066.pdf  作业报告

## How to run it?

```shell
git clone https://github.com/zhaihongjia/tuxiangpeizhun.git
cd tuxiangpeizhun
mkdir build && cd build
cmake ..
make 
./imagematch
```


## Prerequisite
Git
CMAKE 版本大于等于 3.9
C++ 11标准
Opencv3.3.1（其他版本亦可）