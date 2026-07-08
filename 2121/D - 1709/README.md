<h2><a href="https://codeforces.com/contest/2121/problem/D" target="_blank" rel="noopener noreferrer">2121D — 1709</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2121D](https://codeforces.com/contest/2121/problem/D) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. 1709</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays of integers $$$a_1, a_2, \ldots, a_n$$$ and $$$b_1, b_2, \ldots, b_n$$$. It is guaranteed that each integer from $$$1$$$ to $$$2 \cdot n$$$ appears in exactly one of the arrays.</p><p>You need to perform a certain number of operations (possibly zero) so that <span class="tex-font-style-bf">both</span> of the following conditions are satisfied:</p><ul><li> For each $$$1 \leq i  \lt  n$$$, it holds that $$$a_i  \lt  a_{i + 1}$$$ and $$$b_i  \lt  b_{i + 1}$$$. </li><li> For each $$$1 \leq i \leq n$$$, it holds that $$$a_i  \lt  b_i$$$. </li></ul><p>During each operation, you can perform exactly one of the following three actions:</p><ol><li> Choose an index $$$1 \leq i  \lt  n$$$ and swap the values $$$a_i$$$ and $$$a_{i + 1}$$$. </li><li> Choose an index $$$1 \leq i  \lt  n$$$ and swap the values $$$b_i$$$ and $$$b_{i + 1}$$$.</li><li> Choose an index $$$1 \leq i \leq n$$$ and swap the values $$$a_i$$$ and $$$b_i$$$.</li></ol><p>You do not need to minimize the number of operations, but the total number must not exceed $$$1709$$$. Find any sequence of operations that satisfies <span class="tex-font-style-bf">both</span> conditions.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 40$$$) — the length of the arrays $$$a$$$ and $$$b$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 2 \cdot n$$$).</p><p>The third line of each test case contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$1 \leq b_i \leq 2 \cdot n$$$).</p><p>It is guaranteed that each integer from $$$1$$$ to $$$2 \cdot n$$$ appears either in array $$$a$$$ or in array $$$b$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the sequence of operations. </p><p>In the first line for each test case, output the number of operations $$$k$$$. Note that $$$0 \leq k \leq 1709$$$. </p><p>In the following $$$k$$$ lines for each test case, output the operations themselves:</p><ul><li> If you want to swap the values $$$a_i$$$ and $$$a_{i + 1}$$$, output two integers $$$1$$$ and $$$i$$$. Note that $$$1 \leq i  \lt  n$$$.</li><li> If you want to swap the values $$$b_i$$$ and $$$b_{i + 1}$$$, output two integers $$$2$$$ and $$$i$$$. Note that $$$1 \leq i  \lt  n$$$.</li><li> If you want to swap the values $$$a_i$$$ and $$$b_i$$$, output two integers $$$3$$$ and $$$i$$$. Note that $$$1 \leq i \leq n$$$.</li></ul><p>It can be shown that under the given constraints, a solution always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008822263393383432" id="id0000932464867347782" class="input-output-copier">Copy</div></div><pre id="id008822263393383432"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 3</div><div class="test-example-line test-example-line-odd test-example-line-3">4 2</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">1 4</div><div class="test-example-line test-example-line-even test-example-line-4">3 2</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-odd test-example-line-5">6 5 4</div><div class="test-example-line test-example-line-odd test-example-line-5">3 2 1</div><div class="test-example-line test-example-line-even test-example-line-6">3</div><div class="test-example-line test-example-line-even test-example-line-6">5 3 4</div><div class="test-example-line test-example-line-even test-example-line-6">2 6 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002108437799681303" id="id00019581111593083622" class="input-output-copier">Copy</div></div><pre id="id002108437799681303">0
1
3 1
1
2 1
1
3 2
9
3 1
3 2
3 3
1 1
2 1
2 2
1 2
1 1
2 1
6
2 2
1 1
1 2
2 1
3 1
3 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$a_1  \lt  b_1$$$, so no operations need to be applied. </p><p>In the second test case, $$$a_1  \gt  b_1$$$. After applying the operation, these values will be swapped. </p><p>In the third test case, after applying the operation, $$$a = [1, 3]$$$ and $$$b = [2, 4]$$$. </p><p>In the fourth test case, after applying the operation, $$$a = [1, 2]$$$ and $$$b = [3, 4]$$$.</p></div>