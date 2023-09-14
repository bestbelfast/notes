# Web Learning

## 学习网站

### [https://developer.mozilla.org/zh-CN/docs/Learn/Getting_started_with_the_web](https://developer.mozilla.org/zh-CN/docs/Learn/Getting_started_with_the_web)

### 1.网站结构

1. index.html：包含主页内容

2. images 文件夹：这个文件夹包含网站上使用的所有图片
``` javascript
    <img src="images/firefox-icon.png" alt="My test image" />
```
        

3. styles 文件夹：这个文件夹包含用于设置内容样式的 CSS 代码


``` javascript
    <link href="styles/style1.css" rel="stylesheet" />
    //放在<head>和<head/>之间
```
        

4. scripts 文件夹：这个文件夹包含所有用于向网站添加交互功能的 JavaScript 代码
``` javascript
    <script src="scripts/main.js" defer></script>
```
        

### 2.文件路径

1. 若引用的目标文件与 HTML 文件同级，只需直接使用文件名，例如：my-image.jpg


2. 要引用子目录中的文件，请在路径前面写上目录名，再加上一个正斜杠。例如：subdirectory/my-image.jpg

3. 若引用的目标文件位于 HTML 文件的上级，需要加上两个点。举个例子，如果 index.html 在 test-site 的一个子文件夹内，而 my-image.jpg 在 test-site 内，你可以使用../my-image.jpg 从 index.html 引用 my-image.jpg

4. 以上方法可以随意组合，比如：../../subdirectory/another-subdirectory/my-image.jpg。