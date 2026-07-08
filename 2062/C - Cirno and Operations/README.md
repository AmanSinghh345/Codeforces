<h2><a href="https://codeforces.com/contest/2062/problem/C" target="_blank" rel="noopener noreferrer">2062C — Cirno and Operations</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2062C](https://codeforces.com/contest/2062/problem/C) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Cirno and Operations</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Cirno has a sequence $$$a$$$ of length $$$n$$$. She can perform either of the following two operations for any (possibly, zero) times <span class="tex-font-style-bf">unless</span> the current length of $$$a$$$ is $$$1$$$:</p><ul> <li> Reverse the sequence. Formally, $$$[a_1,a_2,\ldots,a_n]$$$ becomes $$$[a_n,a_{n-1},\ldots,a_1]$$$ after the operation. </li><li> Replace the sequence with its difference sequence. Formally, $$$[a_1,a_2,\ldots,a_n]$$$ becomes $$$[a_2-a_1,a_3-a_2,\ldots,a_n-a_{n-1}]$$$ after the operation. </li></ul><p>Find the maximum possible sum of elements of $$$a$$$ after all operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of input test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 50$$$) — the length of sequence $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$|a_i|\le 1000$$$) — the sequence $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print an integer representing the maximum possible sum.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005274431581196416" id="id0006713673050344604" class="input-output-copier">Copy</div></div><pre id="id005274431581196416"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">-1000</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">5 -3</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1000 1</div><div class="test-example-line test-example-line-even test-example-line-4">9</div><div class="test-example-line test-example-line-even test-example-line-4">9 7 9 -9 9 -8 7 -8 9</div><div class="test-example-line test-example-line-odd test-example-line-5">11</div><div class="test-example-line test-example-line-odd test-example-line-5">678 201 340 444 453 922 128 987 127 752 0</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005057618042689289" id="id007239702665245447" class="input-output-copier">Copy</div></div><pre id="id005057618042689289">-1000
8
1001
2056
269891
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Cirno can not perform any operation, so the answer is $$$-1000$$$.</p><p>In the second test case, Cirno firstly reverses the sequence, then replaces the sequence with its difference sequence: $$$[5,-3]\to[-3,5]\to[8]$$$. It can be proven that this maximizes the sum, so the answer is $$$8$$$.</p><p>In the third test case, Cirno can choose not to operate, so the answer is $$$1001$$$.</p></div>