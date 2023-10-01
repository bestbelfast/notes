# <center>Maxinum Submatrix Sum</center>

## Chapter 1 Introduction

Given an $N*N$ integer matrix $(a_{ij})_{N×N}$ , find the maximum value of $\sum_{k=i}^m \sum_{l=j}^n a[i][j]$ for all $1≤i≤m≤N$ and $1≤j≤n≤N$ . For convenience, the maximum submatrix sum is 0 if all the integers are negative.

## Chapter 2 Algorithm Specification

* Algorithm 1

1. Calculate the value of $\sum_{k=1}^i a_{kj}$ for all $1≤i≤N$ and $1≤j≤N$,and save as $su[i][j]$
2. For row $1≤i≤N$ and heighth $1≤k≤N-i$ , calculate the max value of $\sum_{l=i}^{i+k} \sum_{x}^y a[i][j]$ for all $1≤x≤y$  and $x≤y≤N$  by on-line Algorithm

* Because $su[i][j]=\sum_{k=0}^i a_{kj}$ ,so $\sum_{l=i}^{i+k}  a[i][j]=su[i+k][j]-su[i-1][j]$

```c
void algorithm1()
{
    long long su[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        su[i][0] = 0;
        su[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            su[j][i] = su[j - 1][i] + array[j - 1][i - 1];
        }
    }
    long long temp, y_temp;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; i + k <= n; k++)
        {

            temp = 0;
            y_temp = 0;
            for (int j = 1; j <= n; j++)
            {
                temp += su[i + k][j] - su[i - 1][j];
                if (temp < 0)
                {
                    temp = 0;
                }
                if (temp > max)
                {
                    max = temp;
                }
            }
        }
    }
}
```

* Algorithm 2

1. Calculate the value of $\sum_{i=1}^m \sum_{j=1}^n array[i][j]$ ,and save as $sum[i][j]$
2. For row_start $1≤i≤k$ , row_end $i≤k≤n$ ,line_start $1≤j≤l$ ,line_end $j≤l≤n$ , calculate the max value of $\sum_{x=i}^{k} \sum_{y=j}^{l} array[x][y]$ for all $1≤x≤y$  and $x≤y≤N$  by $sum[i][j]+sum[k][l]-sum[i][l]-sum[k][j]$

```c
void algorithm2()
{
    long long sum[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            sum[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                for (int l = 0; l <= j; l++)
                {
                    sum[i + 1][j + 1] += array[k][l];
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = i; k <= n; k++)
            {
                for (int l = j; l <= n; l++)
                {
                    if (max < sum[k][l] + sum[i][j] - sum[k][j] - sum[i][l])
                    {
                        max = sum[k][l] + sum[i][j] - sum[k][j] - sum[i][l];
                    }
                }
            }
        }
    }
}

```

* Algorithm 3
Calculate the max value of $\sum_{x=i}^{k} \sum_{y=j}^{l} array[x][y]$ for all $1≤i≤k$   $1≤j≤l$ $i≤k≤n$ and $j≤l≤n$ one by one

```c

void algorithm3()
{
    long long sum[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            sum[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                for (int l = 0; l <= j; l++)
                {
                    long long temp = 0;
                    for (int p = k; p <= i; p++)
                    {
                        for (int q = l; q <= j; q++)
                        {
                            temp += array[p][q];
                        }
                    }
                    if (temp > max)
                    {
                        max = temp;
                    }
                }
            }
        }
    }
}

```

## Chapter 3 Testing Results

<table>
    <tr>
        <th colspan="8">Testing Results </th>
    </tr>
    <tr>
        <td> </td>
        <td> <em>N</em> </td>
        <td> 5 </td>
        <td> 10 </td>
        <td> 30 </td>
        <td> 50 </td>
        <td> 80 </td>
        <td> 100 </td>
    </tr>
    <tr>
        <th rowspan="5"> <em>O(N^3)</em>  </th>
    </tr>
    <tr>
        <td> Iterations<em>(K)</em> </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 100 </td>
    </tr><tr>
        <td> Ticks </td>
        <td> 0 </td>
        <td> 0 </td>
        <td> 9 </td>
        <td> 31 </td>
        <td> 163 </td>
        <td> 219 </td>
    </tr><tr>
        <td> Total Time<em>(sec)</em> </td>
        <td> 0 </td>
        <td> 0 </td>
        <td> 0.009 </td>
        <td> 0.031 </td>
        <td> 0.163 </td>
        <td> 0.219 </td>
    </tr>
    </tr><tr>
        <td> Drration<em>(sec)</em> </td>
        <td> 0 </td>
        <td> 0 </td>
        <td> 9*10^-5 </td>
        <td> 3.1*10^-4 </td>
        <td> 1.63*10^-3 </td>
        <td> 2.19*10^-3 </td>
    </tr>
     <tr>
    </tr>
    <tr>
        <th rowspan="5"> <em>O(N^4)</em>  </th>
    </tr>
    <tr>
        <td> Iterations<em>(K)</em> </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 1 </td>
        <td> 1 </td>
    </tr><tr>
        <td> Ticks </td>
        <td> 0 </td>
        <td> 5 </td>
        <td> 176 </td>
        <td> 1105 </td>
        <td> 61 </td>
        <td> 168 </td>
    </tr><tr>
        <td> Total Time<em>(sec)</em> </td>
        <td> 0 </td>
        <td> 0.005 </td>
        <td> 0.176 </td>
        <td> 11.05 </td>
        <td> 0.061 </td>
        <td> 0.168 </td>
    </tr>
    </tr><tr>
        <td> Drration<em>(sec)</em> </td>
        <td> 0 </td>
        <td> 5*10^-6 </td>
        <td> 1.76*10^-3 </td>
        <td> 1.105*10^-2 </td>
        <td> 0.061 </td>
        <td> 0.168 </td>
    </tr>
    <tr>
        <th rowspan="5"> <em>O(N^6)</em>  </th>
    </tr>
    <tr>
        <td> Iterations<em>(K)</em> </td>
        <td> 100 </td>
        <td> 100 </td>
        <td> 1 </td>
        <td> 1 </td>
        <td> 1 </td>
        <td> 1 </td>
    </tr><tr>
        <td> Ticks </td>
        <td> 0 </td>
        <td> 18 </td>
        <td> 54 </td>
        <td> 1072 </td>
        <td> 17599 </td>
        <td> 71431 </td>
    </tr><tr>
        <td> Total Time<em>(sec)</em> </td>
        <td> 0 </td>
        <td> 0.018 </td>
        <td> 0.054 </td>
        <td> 1.072 </td>
        <td> 17.599 </td>
        <td> 71.431 </td>
    </tr>
    </tr><tr>
        <td> Drration<em>(sec)</em> </td>
        <td> 0 </td>
        <td> 1.8*10^-5 </td>
        <td> 0.054 </td>
        <td> 1.072 </td>
        <td> 17.599 </td>
        <td> 71.431 </td>
    </tr>
</table>

Explanation:

1. For algorithms with a runtime of less than or equal to 20 ticks, running it 100 times will result in an accuracy of 0.01 tick.

2. For each data size (N), each algorithm is run three times and the average value is taken.

## Chapter 4 Analysis and Comments

<div id="main"></div>

<script src="https://cdn.jsdelivr.net/npm/echarts@5.2.1/dist/echarts.min.js"></script>
<script type="text/javascript">
  var chartDom = document.getElementById('main');
  var myChart = echarts.init(chartDom);
  var option;
  option = {
    xAxis: {
      type: 'category',
      data: ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']
    },
    yAxis: {
      type: 'value'
    },
    series: [
      {
        data: [150, 230, 224, 218, 135, 147, 260],
        type: 'line'
      }
    ]
  };
  option && myChart.setOption(option);
</script>
