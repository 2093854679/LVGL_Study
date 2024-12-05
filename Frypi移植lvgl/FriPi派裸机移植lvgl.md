# FriPi派裸机移植lvgl

前言：以作者(不吃油炸鸡)的LCD工程为模板移植lvgl

## 一.打开LCD工程的cubeMX更改一些硬件配置

### 1.打开TIM2定时器设置1ms的中断

![image-20241130213902599](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130213902599.png)

### 2.打开中断使能

![image-20241130215417279](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130215417279.png)

## 二.更改SPI1的配置

### 1.打开DMA设置为tx设置dma

![image-20241130214621093](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130214621093.png)

### 2.更改DMA传输数据的宽度



![image-20241130214735260](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130214735260.png)

## 3.生成代码，编译

0报错

![image-20241130215631732](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130215631732.png)

## 4.源文件 裁剪

### 一.新建一个文件夹用来保存裁剪后的lvgl代码

因为LVGL源代码中的头文件，使用了相对路径

为了令移植后的文件能直接使用这些相对路径，我们复制文件时，按下方目录结构来操作：

在你喜欢的硬盘位置，新建文件夹：LVGL 

在源文件夹中，把下图选中的 3个文件夹、2个h文件, 复制到新建的 LVGL文件夹中;

![img](https://i-blog.csdnimg.cn/blog_migrate/fd02d903a84cdf7d006f5ba10bd2b3dd.png)

完成后，"LVGL" 文件夹，是这个样子的：

![img](https://i-blog.csdnimg.cn/blog_migrate/cdec4a79e070d16806f726013c7f1d8b.png)

exampels文件夹下：

![image-20241130220854601](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130220854601.png)

网上好些教程，在keil工程目录下新建 Middlewares 文件夹，在里面再新建LVGL文件夹。
但是，如果使用CubeMX、CubeIDE生成的工程，就不要使用 “Middlewares” 作文件夹名称。
因为 "Middlewares"，刚好是CubeMX可能生成的文件夹，用来存放中间件，如：FreeRTOS、FatFS等支持文件。如果你没有使能这些中间件，那么 ，CubeMX重新生成工程时，"Middlewares"文件夹就会被认为不需要了，被删除掉。

### 二.修改 lv_conf.h 文件名

原文件名：“lv_conf_template.h”，修改为： "lv_conf.h";

## 5.为keil工程添加lvgl文件

### 一.打开kei工程添加四个文件夹

![image-20241130221508969](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130221508969.png)

LVGL_myGui没有添加文件

LVGL_conf下：

![image-20241130222940589](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130222940589.png)

LVGL_porting下：

![image-20241130223031125](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223031125.png)

LVGL_src下：

![image-20241130223052900](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223052900.png)

### 二.添加头文件路径

![image-20241130223149515](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223149515.png)

### 三.编译

确保选择了c99模式，有些keil版本的设置不一样，我是最新版本的

![image-20241130223309309](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223309309.png)

发现有报错

![image-20241130223430105](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223430105.png)

方法一：把这个勾去掉
![image-20241130223633265](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223633265.png)

方法二：删除LVGL_src下的qrcodegen.c文件

![image-20241130223738322](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223738322.png)

重新编译

![image-20241130223838745](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130223838745.png)

## 六.注册显示驱动

### 1.启用lvgl_conf.h

![image-20241130224105744](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130224105744.png)

### 2.启用lv_port_disp_temple

![image-20241130224229484](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130224229484.png)

![image-20241130234331940](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130234331940.png)

### 3.添加 LCD 驱动的头文件

![image-20241130224406377](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130224406377.png)

### 4.选择创建缓存的方式

我们选择第一种，注释掉另外两种

![image-20241130224925396](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130224925396.png)

更改后的代码

![image-20241130225004488](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130225004488.png)

### 5.设置屏幕水平，和竖直的分辨率

![image-20241130225717293](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130225717293.png)

屏幕的分辨率在lcd_init.h文件，可以更改USE_HORIZONTAL来选择横屏还是竖屏

![image-20241130225230727](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130225230727.png)

### 6.添加打点函数

由于本工程没有作者写打点函数所以我们要自己添加

打开作者的炸鸡派的高级demo

![image-20241130230052137](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130230052137.png)

![image-20241130230216460](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130230216460.png)

复制这个函数到我们的lcd.文件

![image-20241130230631548](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130230631548.png)

在spi.h文件声明句柄

![image-20241130230525700](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130230525700.png)

在lcd.c文件添加函数

![image-20241130230955236](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130230955236.png)

在lcd.h文件声明函数

![image-20241130231102361](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130231102361.png)

添加打点函数

![image-20241130231253350](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130231253350.png)

## 七.注册触摸驱动

### 1.启用lv_port_indev_temple

![image-20241130231551197](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130231551197.png)

![image-20241130234240002](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130234240002.png)

### 2添加触摸驱动的头文件

![image-20241130231650054](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130231650054.png)

### 3.裁剪代码

因为我们用的是触摸屏，所以只留下触摸屏的驱动接口

### 4.添加触摸状态检测函数，坐标获取函数

![image-20241130233146337](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130233146337.png)

![image-20241130233222621](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130233222621.png)

## 八.为lvgl提供心跳

在tim.c添加lvgl头文件

![image-20241130233754475](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130233754475.png)



提供心跳

![image-20241130233651013](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130233651013.png)

## 九.测试

### 1.在main.c添加头文件

![image-20241130233443476](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130233443476.png)

### 2.初始化一些驱动

![image-20241130234424238](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130234424238.png)



### 3.添加测试代码

![image-20241130234600756](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130234600756.png)

### 编译运行



![image-20241130234737145](C:\Users\86136\AppData\Roaming\Typora\typora-user-images\image-20241130234737145.png)