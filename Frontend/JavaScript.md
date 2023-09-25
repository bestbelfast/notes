# JavaScript Learning

## 学习网站

### [https://developer.mozilla.org/zh-CN/docs/Learn/JavaScript](https://developer.mozilla.org/zh-CN/docs/Learn/JavaScript)

## JS基本知识

### 声明变量

```js
var name= value;
```

### 变量命名的规则

* 必须由数字、字母、下划线和$组成
* 不能以数字开头
* 不能是关键字
* 在JS中区分大小写

### 数据类型

* Number 数值
* String 字符串
必须用单/双引号定义的才是字符串
* Boolean 布尔
true/false
* Undefined
* Null
* Object

### 类型转换

使用变量名

```js
var a = String(b);
```

### 布尔类型转换

只要有内容就会输出true,否则输出false

### 逻辑运算符

&& 与
|| 或
！ 取反

### 比较运算符

|运算符|实际意义|
|---|---|
|>|大于|
|<|小于|
|=|大于等于|
|<=|小于等于|
|==|等于|
|===|全等|
|!=|不等于|
|!==|不全等|

全等比较的是值与类型，等于比较的是值

### this用法

this:指向当前对象的引用
this即为Date,this.xx即为Date.xx

```js
class Date {
    int year;
    int month;
    int day;
    // 添加了this关键字的构造函数
    public Date(int year, int month, int day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }
 
    public void printDate() {
        System.out.println(year + "/" + month + "/" + day);
    }
}
 
public class TestDemo2 {
    public static void main(String[] args) {
        Date date1 = new Date(2022, 4, 2);
        date1.printDate();
    }
}
```

## 如何向页面添加 JavaScript

### 内部 JavaScript

&lt;script&gt;&lt;/script&gt;

### 外部 JavaScript

```html
<script src="script.js" defer></script>
```

### addEventListener

会对页面上所有按钮生效，无论多少个，或添加或删除，无需修改 JavaScript 代码

```js
const buttons = document.querySelectorAll("button");

for (let i = 0; i < buttons.length; i++) {
  buttons[i].addEventListener("click", createParagraph);
}
```

### 脚本调用策略

async 和 defer

浏览器遇到 async 脚本时不会阻塞页面渲染，而是直接下载然后运行。但是，一旦下载完成，脚本就会执行，从而阻止页面渲染。脚本的运行次序无法控制。当页面的脚本之间彼此独立，且不依赖于本页面的其他任何脚本时，async 是最理想的选择

使用 defer 属性加载的脚本将按照它们在页面上出现的顺序加载。在页面内容全部加载完毕之前，脚本不会运行，如果脚本依赖于 DOM 的存在（例如，脚本修改了页面上的一个或多个元素），这一点非常有用

```html
<script async src="js/script2.js"></script>
```
