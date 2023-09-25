v# CSS Learning

## [学习网站](https://developer.mozilla.org/zh-CN/docs/Learn/CSS)

## [参考](https://developer.mozilla.org/zh-CN/docs/Web/CSS/Reference)

## 目录

<!-- code_chunk_output -->

- [层叠](#层叠)
  - [优先权](#优先权)
  - [优先级](#优先级)
  - [继承](#继承)
    - [重设所有属性值](#重设所有属性值)
  - [层叠层](#层叠层httpsdevelopermozillaorgzh-cndocslearncssbuilding_blockscascade_layers)
- [选择器](#选择器)
  - [大小写敏感](#大小写敏感)
  - [类型、类和ID选择器](#类型-类和id选择器)
  - [标签属性选择器](#标签属性选择器)
  - [关系选择器](#关系选择器)
  - [伪类和伪元素](#伪类和伪元素)
    - [::before和::after](#before和after)
  - [存否和值选择器](#存否和值选择器)
  - [子字符串匹配选择器](#子字符串匹配选择器)
- [在HTML中应用CSS](#在html中应用css)
  - [外部样式表](#外部样式表)
  - [内部样式表](#内部样式表)
  - [内联样式](#内联样式)
- [盒子](#盒子)
  - [盒子分类](#盒子分类)
    - [block](#block)
    - [inline](#inline)
    - [inline-flex](#inline-flex)
    - [inline-block](#inline-block)
    - [flex](#flex)
      - [主轴](#主轴)
      - [换行](#换行)
      - [动态尺寸](#动态尺寸)
      - [水平与垂直对齐](#水平与垂直对齐)
      - [排序](#排序)
  - [盒子模型](#盒子模型)
    - [标准盒模型](#标准盒模型)
    - [替代盒模型](#替代盒模型)
- [外观](#外观)
  - [背景图片](#背景图片)
    - [背景颜色](#背景颜色)
    - [控制平铺行为](#控制平铺行为)
    - [调整背景图像的大小](#调整背景图像的大小)
    - [背景图像定位](#背景图像定位)
    - [多个背景图像](#多个背景图像)
    - [渐变背景](#渐变背景)
    - [插入图片](#插入图片)
  - [文本方向](#文本方向)
  - [溢出](#溢出)
- [值和单位](#值和单位)
  - [颜色](#颜色)
  - [长度](#长度)
    - [绝对长度单位](#绝对长度单位)
    - [相对长度单位](#相对长度单位)

<!-- /code_chunk_output -->



## 层叠
1. 相关声明：找到所有具有匹配每个元素的选择器的声明代码块

2. 重要性：根据规则是普通还是重要对规则进行排序。重要的样式是指设置了 !important (en-US) 标志的样式

3. 来源：在两个按重要性划分的分组内，按作者、用户或用户代理这几个来源对规则进行排序

4. 层：在六个按重要性和来源划分的分组内，按层叠层进行排序。普通声明的层顺序是从创建的第一个到最后一个，然后是未分层的普通样式。对于重要的样式，这个顺序是反转的，但保持未分层的重要样式优先权最低

5. 优先级：对于来源层中优先权相同的竞争样式，按优先级对声明进行排序

6. 出现顺序：当两个来源层的优先权相同的选择器具有相同的优先级时，最后声明的具有最高优先级的选择器的属性值获胜。


### 优先权
冲突时后一种声明会覆盖前一种

1. 用户代理样式表中的声明（例如，浏览器的默认样式，在没有设置其他样式时使用）

2. 用户样式表中的常规声明（由用户设置的自定义样式）

3. 作者样式表中的常规声明（这些是我们 web 开发人员设置的样式）

4. 作者样式表中的 !important 声明

5. 用户样式表中的 !important 声明

6. 用户代理样式表中的 !important 声明


### 优先级
下面列表中，选择器类型的优先级是递增的

1. 一个普通选择器的优先级可以说是由三个不同的值（或分量）相加，可以认为是百（ID）十（类）个（元素）——三位数的三个位数
    1. 类型选择器（例如，h1）和伪元素（例如，: :before）

    2. 类选择器 (例如，.example)，属性选择器（例如，[type="radio"]）和伪类（例如，:hover）
    3. ID 选择器（例如，#example）

2. 内联样式
即 style 属性内的样式声明，优先于所有普通的样式，无论其优先级如何
3. !important可以用来覆盖所有上面所有优先级计算

```css
.better {
    border: none !important;
}
```

层叠规则：当应用两条同级别的规则到一个元素的时候，写在后面的就是实际使用的规则

### 继承
继承属性回应用于直接子元素和其后代
控制继承的五个特殊的通用属性值

* inherit
设置该属性会使子元素属性和父元素相同。实际上，就是“开启继承”。

* initial
将应用于选定元素的属性值设置为该属性的初始值。

* revert (en-US)
将应用于选定元素的属性值重置为浏览器的默认样式，而不是应用于该属性的默认值。在许多情况下，此值的作用类似于 unset。

* revert-layer (en-US)
将应用于选定元素的属性值重置为在上一个层叠层中建立的值。

* unset
将属性重置为自然值，也就是如果属性是自然继承那么就是 inherit，否则和 initial 一样


#### 重设所有属性值
CSS 的简写属性 all 可以用于同时将这些继承值中的一个应用于（几乎）所有属性。它的值可以是其中任意一个（inherit、initial、unset 或 revert）。这是一种撤销对样式所做更改的简便方法，以便回到之前已知的起点

```css
.fix-this {
    all: unset;
}
```
```html
<blockquote>
    <p>This blockquote is not styled</p>
</blockquote>
```


### [层叠层](https://developer.mozilla.org/zh-CN/docs/Learn/CSS/Building_blocks/Cascade_layers)
没学完捏


## 选择器


### 大小写敏感
HTML 中是大小写敏感的;在闭合括号之前使用i值以在大小写不敏感的情况下匹配属性值

```css
li[class^="a"] {
    background-color: yellow;
}

li[class^="a" i] {
    color: red;
}
```    


### 类型、类和ID选择器
对应class属性
```css
.special {
  color: orange;
  font-weight: bold;
}
```
对应id属性
```css
#special {
  color: orange;
  font-weight: bold;
}
```
应用于所有元素
```css
* {
  color: orange;
  font-weight: bold;
}
```

### 标签属性选择器
根据元素上某个标签的存在选择
```css
a[title] {
}
```
根据一个有特定值的标签属性是否存在来选择
```css
a[href="https://example.com"] {
}
```


### 关系选择器
子代关系选择器
```css
h1 p {
  color: rebeccapurple;
}
```
邻近兄弟
```css
h1 + p {
  font-size: 200%;
}
```

通用兄弟
```css
h1 ~ p {
  font-size: 200%;
}
```


### 伪类和伪元素
样式化一个元素的特定状态
```css
a {
}

a:link {
}

a:visited {
}

a:focus {
}

a:hover {
}

a:active {
}

```
还可以包含了伪元素，选择一个元素的某个部分而不是元素自己
```css
p::first-line {
}
```
#### ::before和::after
可以用::before和::after伪元素在元素前后加入元素，同时也可以被编辑
```css
.box::before {
    content: "";
    display: block;
    width: 100px;
    height: 100px;
    background-color: orange;
    border: 1px solid black;
}   
```
```html
<p class="box">Content in the box in my HTML page.</p>
    
``` 

[生成箭头](https://cssarrowplease.com/)


### 存否和值选择器
| 选择器 | 示例 | 描述 |
| ---- | ---- | ---- |
| [attr] | a[title] |匹配带有一个名为attr的属性的元素|
| [attr=value] | a[href="https://example.com"] |匹配带有一个名为attr的属性的元素，其值正为value|
| [attr~=value] | p[class~="special"] |匹配带有一个名为attr的属性的元素，其值正为value;或者匹配带有一个attr属性的元素，其值有一个或者更多，至少有一个和value匹配|
| [attr&verbar;=value] | div[lang&verbar;="zh"] |匹配带有一个名为attr的属性的元素，其值可正为value，或者开始为value，后面紧随着一个连字符|


### 子字符串匹配选择器
| 选择器 | 示例 | 描述 |
| ---- | ---- | ---- |
| [attr^=value] | li[class^="box-"] |匹配带有一个名为attr的属性的元素,其值开头为value子字符串|
| [attr$=value] | li[class="-box"] |匹配带有一个名为attr的属性的元素，其值结尾为value子字符串|
| [attr*=value] | li[class*="box"] |匹配带有一个名为attr的属性的元素，其值的字符串中的任何地方，至少出现了一次value子字符串|


## 在HTML中应用CSS

### 外部样式表
外部样式表在一个单独的扩展名为 .css 的文件中包含 CSS，链接方式查看<a href="web入门.md">web入门</a>

### 内部样式表
一个内部样式表驻留在 HTML 文档内部，要把 CSS 放置在包含在 HTML &lt;head&gt; 元素中的 &lt;style&gt; 元素内
```html
<!doctype html>
<html lang="zh-CN">
  <head>
    <meta charset="utf-8" />
    <title>我的 CSS 测试</title>
    <style>
      h1 {
        color: blue;
        background-color: yellow;
        border: 1px solid black;
      }
      p {
        color: red;
      }
    </style>
  </head>
  <body>
    <h1>Hello World!</h1>
    <p>这是我的第一个 CSS 示例</p>
  </body>
</html>
```


### 内联样式
内联样式是影响单个 HTML 元素的 CSS 声明，包含在元素的 style 属性中

```html
<!doctype html>
<html lang="zh-CN">
  <head>
    <meta charset="utf-8" />
    <title>我的 CSS 测试</title>
  </head>
  <body>
    <h1 style="color: blue;background-color: yellow;border: 1px solid black;">
      Hello World!
    </h1>
    <p style="color:red;">这是我的第一个 CSS 示例</p>
  </body>
</html>
```


## 盒子


### 盒子分类

#### block

* 盒子会在内联的方向上扩展并占据父容器在该方向上的所有可用空间，在绝大数情况下意味着盒子会和父容器一样宽

* 每个盒子都会换行
* width 和 height 属性可以发挥作用
* 内边距（padding）, 外边距（margin）和 边框（border）会将其他元素从当前盒子周围“推开”

#### inline

* 盒子不会产生换行

* width 和 height 属性将不起作用

* 垂直方向的内边距、外边距以及边框会被应用但是不会把其他处于 inline 状态的盒子推开

* 水平方向的内边距、外边距以及边框会被应用且会把其他处于 inline 状态的盒子推开

#### inline-flex
与行级盒子类似，可设置宽度，宽度处理与flex相同

#### inline-block
* 设置width 和height 属性会生效

* padding, margin, 以及border 会推开其他元素
* 不会跳转到新行
* 添加 width 和 height 属性，它只会变得比其内容更大

#### flex
![Alt text](images/image.png)
* 主轴（main axis）是沿着 flex 元素放置的方向延伸的轴（比如页面上的横向的行、纵向的列）。该轴的开始和结束被称为 main start 和 main end

* 交叉轴（cross axis）是垂直于 flex 元素放置方向的轴。该轴的开始和结束被称为 cross start 和 cross end
* 设置了 display: flex 的父元素（在本例中是 &lt;section&gt;）称之为 flex 容器（flex container）
* 在 flex 容器中表现为弹性的盒子的元素被称之为 flex 项（flex item）（本例中是 &lt;article&gt; 元素

##### 主轴
 flex-direction 属性指定主轴方向，默认为row(排成一排)

 通过声明改变为列布局
 
```css
flex-direction: column;
```

##### 换行
在子元素的宽度之和大于父元素的情况下，使用弹性布局时，该子元素的实际宽度是(设置的该子元素的宽度/设置的子元素宽度之和)*父元素的宽度

将以下声明添加到 section css 规则中：

```css
flex-wrap: wrap;
```
将以下规则添加到 &lt;article&gt; 规则中：
```css
flex: 200px;
```
则每个盒子至少占据了200px的空间

##### 动态尺寸
按flex值比例分配主轴空间
```css
article {
  flex: 1;
}
article:nth-of-type(3) {
  flex: 2;
}
```
首先给出 200px 的可用空间，然后，剩余的可用空间将根据分配的比例共享
```css
article {
  flex: 1 200px;
}

article:nth-of-type(3) {
  flex: 2 200px;
}
```

##### 水平与垂直对齐
align-items 控制 flex 项在交叉轴上的位置
* stretch 默认值 其会使所有 flex 项沿着交叉轴的方向拉伸以填充父容器

* center 值会使这些项保持其原有的高度，但是会在交叉轴居中
* flex-start
flex元素向交叉轴起点对齐
* flex-end
flex元素向交叉轴终点对齐

用 align-self 属性覆盖 align-items 的行为
```css
button:first-child {
  align-self: flex-end;
}
```
justify-content 控制 flex 项在主轴上的位置
* flex-start 默认值 使所有 flex 项都位于主轴的开始处

* flex-end 来让 flex 项到结尾处
* center 让 flex 项在主轴居中。
* space-around 使所有 flex 项沿着主轴均匀地分布，在任意一端都会留有一点空间
* space-between 和 space-around 非常相似，只是它不会在两端留下任何空间

##### 排序
```css
button:first-child {
  order: 1;
}
```


### 盒子模型

#### 标准盒模型 

* Content box: 这个区域是用来显示内容，大小可以通过设置 width 和 height

* Padding box: 包围在内容区域外部的空白区域；大小通过 padding 相关属性设置
* Border box: 边框盒包裹内容和内边距。大小通过 border 相关属性设置
* Margin box: 这是最外面的区域，是盒子和其他元素之间的空白区域，大小通过 margin 相关属性设置
![Alt text](images/image2.png)
```css
.box {
  width: 350px;
  height: 150px;
  margin: 25px;
  padding: 25px;
  border: 5px solid black;
}
```
控制内外边距可以是负值
```css
margin-top
margin-right
margin-bottom
margin-left

border-width
border-style
border-color

padding-top-width
padding-top-style
......
```


#### 替代盒模型
* Content box: 这个区域是用来显示内容，大小可以通过设置 width 和 height

* Border box: 边框盒包裹内容和内边距。大小通过 border 相关属性设置
```css
html {
  box-sizing: border-box;
}
*,
*::before,
*::after {
  box-sizing: inherit;
}
```


## 外观


### 背景图片

#### 背景颜色
```css
background-color: black;
```

默认情况下，大图不会缩小以适应盒子，只能看到一个小角，而小图则是平铺以填充方框
```css
.a {
  background-image: url(balloons.jpg);
  background-color: black;
}
```

#### 控制平铺行为
background-repeat 属性用于控制图像的平铺行为，可用的值是

* no-repeat——阻止背景重复平铺

* repeat-x——仅水平方向上重复平铺
* repeat-y——仅垂直方向上重复平铺
* repeat——默认值，在水平和垂直两个方向重复平铺

#### 调整背景图像的大小
background-repeat 属性用于控制图像的平铺行为，可用的值是

* cover——长宽比不变，覆盖容器

* contain——长宽比不变，适应rongqi
* 设置宽度，高度auto
```css
  background-size: 50%
  ```
* 设置宽度，高度
```css
  background-size: 50% 50px
  ```

#### 背景图像定位
background-position 值有两个单独的值——一个水平值和一个垂直值
```css
background-position: 20px 10%;
```

#### 多个背景图像
属性数量小于图像数量时会循环
```css
background-image: url(image1.png), url(image2.png), url(image3.png), url(image4.png);
background-repeat: no-repeat, repeat-x, repeat;
background-position:
  10px 20px,
  top right;
```

#### 渐变背景
```css
.a {
  background-image: linear-gradient(105deg, rgba(0,249,255,1) 39%, rgba(51,56,57,1) 96%);
}

.b {
  background-image: radial-gradient(circle, rgba(0,249,255,1) 39%, rgba(51,56,57,1) 96%);
  background-size: 100px 50px;
}
```

#### 插入图片
```css
a[href*="http"] {
  background: url("external-link-52.png") no-repeat 100% 0;
  background-size: 16px 16px;
  padding-right: 19px;
}
```


### 文本方向
writing-mode 属性决定文本排列方向
* horizontal-tb: 块流向从上至下。对应的文本方向是横向的

* vertical-rl: 块流向从右向左。对应的文本方向是纵向的

* vertical-lr: 块流向从左向右。对应的文本方向是纵向的，使用纵向布局时，会改变块和内联文本的方向


### 溢出
overflow属性是控制一个元素溢出的方式
* visible 默认值，显示
* hidden 隐藏
* scroll 为溢出内容添加滚动条
可以设置overflow-y设置仅在y轴方向滚动
```css
overflow-y: scroll;
```


### 值和单位


| 数值类型 | 描述 |
| ---- | ---- |
| &lt;integer&gt; | 整数 |
| &lt;number&gt; | 小数，可能没有小数点以后的部分 |
| &lt;dimension&gt; | 是一个&lt;number&gt;且有附加单位,包括&lt;length&gt;、&lt;angle&gt;、&lt;time&gt;和&lt;resolution&gt; |
| &lt;percentage&gt; | 表示一些其他值的一部分,例如 50%,总是相对于另一个量 |


### 颜色
十六进制
```css
#f09
#ff0099
```
红 绿 蓝/透明度
```css
rgb(255 0 153)
rgb(255 0 153 / 80%)
```


### 长度

#### 绝对长度单位

| 单位 | 名称 |
| ---- | ---- |
| cm | 厘米 |
| mm | 毫米 |
| Q | 四分之一毫米 |
| in | 英寸 |
| pc | 排卡 |
| pt | 点 |
| px | 像素 |


#### 相对长度单位
 
| 单位 | 名称 |
| ---- | ---- |
| em | font-size中为相对父元素的字体大小；其他属性中是自身字体大小 |
| ex | 字符"x"的高度 |
| ch | 字符"O"的宽度 |
| rem | 根元素字体大小 |
| lh | 元素行高 |
| rlh | 根元素行高 |
| vw | 视口宽度的1% |
| vh | 视口高度的1% |
| svw | 根元素长度1% |
| svh | 根元素宽度1% |
|  |  |