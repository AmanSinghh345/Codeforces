<h2><a href="https://codeforces.com/contest/1622/problem/C" target="_blank" rel="noopener noreferrer">1622C — Set or Decrease</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1622C](https://codeforces.com/contest/1622/problem/C) |

## Topics
`binary search` `brute force` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Set or Decrease</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer array $$$a_1, a_2, \dots, a_n$$$ and integer $$$k$$$.</p><p>In one step you can </p><ul> <li> either choose some index $$$i$$$ and decrease $$$a_i$$$ by one (make $$$a_i = a_i - 1$$$); </li><li> or choose two indices $$$i$$$ and $$$j$$$ and set $$$a_i$$$ equal to $$$a_j$$$ (make $$$a_i = a_j$$$). </li></ul><p>What is the minimum number of steps you need to make the sum of array $$$\sum\limits_{i=1}^{n}{a_i} \le k$$$? (You are allowed to make values of array negative).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 2 \cdot 10^5$$$; $$$1 \le k \le 10^{15}$$$) — the size of array $$$a$$$ and upper bound on its sum.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the array itself.</p><p>It's guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimum number of steps to make $$$\sum\limits_{i=1}^{n}{a_i} \le k$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008956170063146798" id="id00056229771430656994" class="input-output-copier">Copy</div></div><pre id="id008956170063146798">4
1 10
20
2 69
6 9
7 8
1 2 1 3 1 2 1
10 1
1 2 3 1 2 6 1 6 8 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014513073358203488" id="id005994685220418992" class="input-output-copier">Copy</div></div><pre id="id0014513073358203488">10
0
2
7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you should decrease $$$a_1$$$ $$$10$$$ times to get the sum lower or equal to $$$k = 10$$$.</p><p>In the second test case, the sum of array $$$a$$$ is already less or equal to $$$69$$$, so you don't need to change it.</p><p>In the third test case, you can, for example: </p><ol> <li> set $$$a_4 = a_3 = 1$$$; </li><li> decrease $$$a_4$$$ by one, and get $$$a_4 = 0$$$. </li></ol> As a result, you'll get array $$$[1, 2, 1, 0, 1, 2, 1]$$$ with sum less or equal to $$$8$$$ in $$$1 + 1 = 2$$$ steps.<p>In the fourth test case, you can, for example: </p><ol> <li> choose $$$a_7$$$ and decrease in by one $$$3$$$ times; you'll get $$$a_7 = -2$$$; </li><li> choose $$$4$$$ elements $$$a_6$$$, $$$a_8$$$, $$$a_9$$$ and $$$a_{10}$$$ and them equal to $$$a_7 = -2$$$. </li></ol> As a result, you'll get array $$$[1, 2, 3, 1, 2, -2, -2, -2, -2, -2]$$$ with sum less or equal to $$$1$$$ in $$$3 + 4 = 7$$$ steps.</div>