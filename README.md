# JOS-IMG-Version
## 项目介绍
JMY无聊的时候就会开发的一个~~垃圾~~OS,大佬勿喷我这个XXS的作品啊
## 项目进程
- 2020.3.27 开始!
- 2020.3.28 加了BIOS提示
- 2020.3.29 移除BIOS提示,加入了GRUB
- 2020.3.30 内核可以进入安全模式
- 2020.3.31 计划开发GUI(~~fAKe~~)
## 如何开发
往init文件夹里添内容,或修改init文件夹里的文件的代码
## 开发完后要做的事情
- 1.执行<code>sudo make</code>
- 2.将floppy.img放入虚拟机
## 常用的库
<code>console_clear()</code> 清屏

<code>console_write()</code> 输出文字

<code>console_write_color()</code> 输出带颜色的文字
