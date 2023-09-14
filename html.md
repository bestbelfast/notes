# HTML Learning

# 联系作者：

## <a href="mailto:3220104697@zju.edu.cn">向 Yanze Zhang 发邮件</a>


# 学习网站

## [https://developer.mozilla.org/zh-CN/docs/Learn/HTML](https://developer.mozilla.org/zh-CN/docs/Learn/HTML)

# 目录
 
1. <a href="#元素">元素</a> 

    1. <a href="#元素的组成成分">元素的组成成分</a> 

    2. <a href="#嵌套元素">嵌套元素</a> 

    3. <a href="#块级元素">块级元素</a> 

    4. <a href="#内联元素">内联元素</a> 

    5. <a href="#常用元素">常用元素</a> 

        1. &lt;a&gt;&lt;/a&gt; 
        2. &lt;ul&gt;&lt;/ul&gt; 
        3. &lt;ol&gt;&lt;/ol&gt; 
        3. &lt;address&gt;&lt;/address&gt; 

    6. <a href="#文本格式">文本格式</a> 
        1. &lt;span&gt;&lt;/span&gt; 
        2. &lt;strong&gt;&lt;/strong&gt; 
        3. &lt;em&gt;&lt;/em&gt; 
        4. &lt;mark&gt;&lt;/mark&gt; 
        5. &lt;br&gt;
        6. &lt;hr&gt;
        7. &lt;sub&gt;&lt;/sub&gt; 
        8. &lt;sup&gt;&lt;/sup&gt; 
        9. &lt;code&gt;&lt;/code&gt; 
        10. &lt;pre&gt;&lt;/pre&gt; 
        11. &lt;var&gt;&lt;/var&gt; 
        12. &lt;vbd&gt;&lt;/vbd&gt; 
        13. &lt;samp&gt;&lt;/samp&gt; 


2. <a href="#属性">属性</a> 

    1. <a href="#格式">格式</a> 

    2. <a href="#布尔属性">布尔属性</a> 

3. <a href="#文档结构">html文档结构</a> 

    1. &lt;!DOCTYPE html&gt;

    2. &lt;html&gt;&lt;/html&gt;

    3. &lt;head&gt;&lt;/head&gt;

        1. &lt;title&gt;&lt;/title&gt;
        2. &lt;meta&gt;&lt;/meta&gt;
    4. &lt;body&gt;&lt;/body&gt;

        1. &lt;header&gt;&lt;/header&gt;

        2. &lt;nav&gt;&lt;/nav&gt;

        3. &lt;main&gt;&lt;/main&gt;

        4. &lt;aside&gt;&lt;/aside&gt;

        5. &lt;footer&gt;&lt;/footer&gt;

        6. &lt;article&gt;&lt;/article&gt;

        7. &lt;footer&gt;&lt;/footer&gt;

        8. &lt;section&gt;&lt;/section&gt;

    5. 实体引用
--------------------

<p id="元素"></p>

# 元素 

<p id="元素的组成成分"></p>

## 元素的组成部分

1. 开始标签（Opening tag）：包含元素的名称，被左、右角括号所包围。开头标签标志着元素开始或开始生效的地方


2. 内容（Content）：元素的内容

3. 结束标签（Closing tag）：与开始标签相似，只是其在元素名之前包含了一个斜杠。这标志着该元素的结束

<p id="嵌套元素"></p>

## 嵌套元素
``` html
<p>My cat is <strong>very</strong> grumpy.<p>
```
<p>My cat is <strong>very</strong> grumpy.<p>

<p id="块级元素"></p>

## 块级元素

    块级元素在页面中以块的形式展现。一个块级元素出现在它前面的内容之后的新行上。任何跟在块级元素后面的内容也会出现在新的行上

<p id="内联元素"></p>

## 内联元素

    内联元素通常出现在块级元素中并环绕文档内容的一小部分，而不是一整个段落或者一组内容,内联元素不会导致文本换行
``` html
<strong><em>1</em></strong><em>2</em><em>3</em>
<p>4</p>
<p>5</p>

```
<strong><em>1</em></strong><em>2</em><em>3</em><p>4</p><p>5</p>

<p id="常用元素"></p>

## 常用元素：
<p id="锚"></p>

### &lt;a&gt;&lt;/a&gt; 锚
1. href
这个属性声明超链接的 web 地址，例如 href="https://www.mozilla.org/"

2. title
title 属性为超链接声明额外的信息，比如你将链接至的那个页面。例如 title="The Mozilla homepage"，当鼠标悬停在超链接上面时，这部分信息将以工具提示的形式显示

3. target
target 属性用于指定链接如何呈现出来，例如，target="_blank" 将在新标签页中显示链接，如果希望在当前标签页显示链接，忽略这个属性即可

#### 块级链接
```html
<a href="https://developer.mozilla.org/zh-CN/">
  <p>MDN Web 文档</p>
</a>
```

#### 图片链接
```html
<a href="https://developer.mozilla.org/zh-CN/">
  <img src="mdn_logo.svg" alt="MDN Web 文档主页" />
</a>
```
<p>
  链接方式，请访问<a href="web入门.md">web入门</a>。
</p>
链接除了可以链接到文档外，也可以链接到 HTML 文档的特定部分，首先给要链接到的元素分配一个 id 属性

```html
<p>
  <h2 id="Mailing_address">邮寄地址</h2>
</p>
```
为了链接到那个特定的 id，要将它放在 URL 的末尾，并在前面包含井号（#），例如

```html
<p>
  你是否在寻找<a href="contacts.html#锚"
    >锚</a
  >
</p>
```
可以在同一份文档下，通过链接文档片段，来链接到当前文档的另一部分：
```html
<p>你是否在寻找<a href="#锚">锚</a></p>
```

<p>你是否在寻找<a href="#锚">锚</a></p>

### &lt;ol&gt;&lt;/ol&&gt; 无序列表
```html
<ul>
  <li>a</li>
  <li>b</li>
  <li>c</li>
</ul>
```
<ul>
  <li>a</li>
  <li>b</li>
  <li>c</li>
</ul>


### &lt;ol&gt;&lt;/ol&&gt; 有序列表
```html
<ol>
  <li>a</li>
  <li>b</li>
  <li>c</li>
</ol>
```
<ol>
  <li>a</li>
  <li>b</li>
  <li>c</li>
</ol>


### &lt;address&gt;&lt;/address&gt; 地址

```html
<address>
  <p>
    Chris Mills<br />
    Manchester<br />
    The Grim North<br />
    UK
  </p>

  <ul>
    <li>Tel: 01234 567 890</li>
    <li>Email: me@grim-north.co.uk</li>
  </ul>
</address>
```
<address>
  <p>
    Chris Mills<br />
    Manchester<br />
    The Grim North<br />
    UK
  </p>

  <ul>
    <li>Tel: 01234 567 890</li>
    <li>Email: me@grim-north.co.uk</li>
  </ul>
</address>



<p id="文本格式"></p>



## 文本格式：
### &lt;span&gt;&lt;/span&gt; 可添加style
```html
<span style="font-size: 32px; margin: 21px 0; display: block;" >txt</span>
```
### &lt;strong&gt;&lt;/strong&gt; 加黑
### &lt;em&gt;&lt;/em&gt; 斜体

### &lt;mark&gt;&lt;/mark&gt; 高亮

### &lt;br&gt; 换行

### &lt;hr&gt; 水平分割线

### &lt;abbr&gt;&lt;/abbr&gt; 缩略语

```html
<p>
  我们使用
  <abbr title="超文本标记语言（Hyper text Markup Language）">HTML</abbr>
  来组织网页文档。
</p>
```

<p>
  我们使用
  <abbr title="超文本标记语言（Hyper text Markup Language）">HTML</abbr>
  来组织网页文档。
</p>


### &lt;sub&gt;&lt;/sub&gt; 上标

### &lt;sup&gt;&lt;/sup&gt; 下标

### &lt;code&gt;&lt;/code&gt; 计算机通用代码

### &lt;pre&gt;&lt;/pre&gt; 保留空白字符与缩进

### &lt;var&gt;&lt;/var&gt; 标记具体变量名

### &lt;kbd&gt;&lt;/kbd&gt; 标记输入

### &lt;samp&gt;&lt;/samp&gt; 标记计算机程序输出

```html
<pre><code>const para = document.querySelector('p');

para.onclick = function() {
  alert('噢，噢，噢，别点我了。');
}</code></pre>

<p>
  请不要使用 <code>&lt;font&gt;</code> 
  <code>&lt;center&gt;</code> 等表象元素。
</p>

<p>在上述的 JavaScript 示例中，<var>para</var> 表示一个段落元素。</p>

<p>按 <kbd>Ctrl</kbd>/<kbd>Cmd</kbd> + <kbd>A</kbd> 选择全部内容。</p>

<pre>$ <kbd>ping mozilla.org</kbd>
<samp>PING mozilla.org (63.245.215.20): 56 data bytes
64 bytes from 63.245.215.20: icmp_seq=0 ttl=40 time=158.233 ms</samp></pre>
```

<pre><code>const para = document.querySelector('p');

para.onclick = function() {
  alert('噢，噢，噢，别点我了。');
}</code></pre>

<p>
  请不要使用 <code>&lt;font&gt;</code> 、
  <code>&lt;center&gt;</code> 等表象元素。
</p>

<p>在上述的 JavaScript 示例中，<var>para</var> 表示一个段落元素。</p>

<p>按 <kbd>Ctrl</kbd>/<kbd>Cmd</kbd> + <kbd>A</kbd> 选择全部内容。</p>

<pre>$ <kbd>ping mozilla.org</kbd>
<samp>PING mozilla.org (63.245.215.20): 56 data bytes
64 bytes from 63.245.215.20: icmp_seq=0 ttl=40 time=158.233 ms</samp></pre>


### &lt;time&gt;&lt;/time&&gt; 标记时间与日期


<p id="属性"></p>

# 属性

<p id="格式"></p>

## 格式
1. 一个空格，它在属性和元素名称之间。如果一个元素具有多个属性，则每个属性之间必须由空格分隔

2. 属性名称，后面跟着一个等于号
3. 一个属性值，由一对引号（""）引起来
```html
<p class="editor-note">My cat is very grumpy </p>
```
```html
<span style="font-size: 32px; margin: 21px 0; display: block;" >txt</span>
```



### &lt;a&gt;&lt;/a&gt; 锚
1. href
这个属性声明超链接的 web 地址，例如 href="https://www.mozilla.org/"

2. title
title 属性为超链接声明额外的信息，比如你将链接至的那个页面。例如 title="The Mozilla homepage"，当鼠标悬停在超链接上面时，这部分信息将以工具提示的形式显示

3. target
target 属性用于指定链接如何呈现出来，例如，target="_blank" 将在新标签页中显示链接，如果希望在当前标签页显示链接，忽略这个属性即可

```html
<p>A link to my <a href="https://www.mozilla.org/" title="The Mozilla homepage" target="_blank">favorite website</a>.</p>

```
<p>A link to my <a href="https://www.mozilla.org/" title="The Mozilla homepage" target="_blank">favorite website</a>.</p>

<p id="布尔属性"></p>

## 布尔属性

只能有一个值

disabled 禁用元素

```html
<input type="text" disabled="disabled" />

<input type="text"/>

```
<input type="text" disabled="disabled" />

<input type="text"/>
 
<p id="文档结构"></p>

# html文档结构

## &lt;!DOCTYPE html&gt;
是最短的有效文档声明

## &lt;html&gt;&lt;/html&gt;

这个元素包裹了页面中所有的内容，有时被称为根元素

### 主语言
```html
<html lang="zh-CN">
  …
</html>
```

## &lt;head&gt;&lt;/head&gt;
这个元素是一个容器，它包含了所有你想包含在 HTML 页面中但不在 HTML 页面中显示的内容。这些内容包括你想在搜索结果中出现的关键字和页面描述、CSS 样式、字符集声明等

### 添加标题
```html
<title>&lt;title&gt; element</title>
```
### &lt;meta&gt;&lt;/meta&gt;
元数据就是描述数据的数据，而 HTML 有一个“官方的”方式来为一个文档添加元数据——&lt;meta&gt; 元素,有很多不同种类的 &lt;meta&gt;元素可以被包含进你的页面的 &lt;head&gt; 元素

```html
<meta charset="utf-8">
```
charset 属性将你的文档的字符集设置为 UTF-8，其中包括绝大多数人类书面语言的大多数字符
```html
<meta charset="ISO-8859-1" />
```
使用拉丁文字符集
```html
<meta name="author" content="Chris Mills" />
```
添加作者，name 指定了 meta 元素的类型，
content 指定了实际的元数据内容

```html
<meta
name="description"
content="The MDN Web Docs site provides information about Open Web technologies including HTML, CSS, and APIs for both Web sites and progressive web apps." />
```
description 被使用在搜索引擎显示的结果页中




## &lt;body&gt;&lt;/body&gt;
包含了你访问页面时所有显示在页面上的内容，包含文本、图片、视频、游戏、可播放音频轨道等等。

### &lt;header&gt;&lt;/header&gt;

### &lt;nav&gt;&lt;/nav&gt;导航栏

### &lt;main&gt;&lt;/main&gt;主内容
存放每个页面独有的内容。每个页面上只能用一次,且直接位于 &lt;body&gt; 中。最好不要把它嵌套进其他元素。

### &lt;aside&gt;&lt;/aside&gt;侧边栏
经常嵌套在&lt;main&gt;里

### &lt;footer&gt;&lt;/footer&gt;页脚


### &lt;article&gt;&lt;/article&gt;文章
包围的内容即一篇文章，与页面其他部分无关

### &lt;footer&gt;&lt;/footer&gt;页脚

### &lt;section&gt;&lt;/section&gt;页脚
与 &lt;article&gt; 类似，但更适用于组织页面使其按功能（比如迷你地图、一组文章标题和摘要）分块。一般的最佳用法是：以 标题 作为开头；也可以把一篇 &lt;article&gt; 分成若干部分并分别置于不同的 &lt;section&gt; 中，也可以把一个区段 &lt;section&gt; 分成若干部分并分别置于不同的 &lt;article&gt; 中，取决于上下文

## 实体引用

[转义字符对照表](https://cloud.tencent.com/developer/article/1598269)

| 常用原义字符 | 等价字符引用 |
| ---- | ---- |
| < | ```&lt;``` |
| > | ```&gt;``` |
| " | ```&quot;``` |
| ' | ```&apos;``` |
| & | ```&amp;``` |

```html
