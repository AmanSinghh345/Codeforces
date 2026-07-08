<h2><a href="https://codeforces.com/contest/1401/problem/C" target="_blank" rel="noopener noreferrer">1401C — Mere Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1401C](https://codeforces.com/contest/1401/problem/C) |

## Topics
`constructive algorithms` `math` `number theory` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Mere Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> You are given an array $$$a_1, a_2, \dots, a_n$$$ where all $$$a_i$$$ are integers and greater than $$$0$$$.</p><p> In one operation, you can choose two different indices $$$i$$$ and $$$j$$$ ($$$1 \le i, j \le n$$$). If $$$gcd(a_i, a_j)$$$ is equal to the minimum element of the <span class="tex-font-style-bf">whole array</span> $$$a$$$, you can swap $$$a_i$$$ and $$$a_j$$$. $$$gcd(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$.</p><p> Now you'd like to make $$$a$$$ non-decreasing using the operation any number of times (possibly zero). Determine if you can do this.</p><p> An array $$$a$$$ is non-decreasing if and only if $$$a_1 \le a_2 \le \ldots \le a_n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p> The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p> The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the length of array $$$a$$$.</p><p> The second line of each test case contains $$$n$$$ positive integers $$$a_1, a_2, \ldots a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the array itself.</p><p> It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p> For each test case, output "<span class="tex-font-style-tt">YES</span>" if it is possible to make the array $$$a$$$ non-decreasing using the described operation, or "<span class="tex-font-style-tt">NO</span>" if it is impossible to do so.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006070807116980467" id="id006489470864479292" class="input-output-copier">Copy</div></div><pre id="id006070807116980467">4
1
8
6
4 3 6 6 2 9
4
4 5 6 7
5
7 5 2 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0016241835244187353" id="id007974046742049297" class="input-output-copier">Copy</div></div><pre id="id0016241835244187353">YES
YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p> In the first and third sample, the array is already non-decreasing.</p><p> In the second sample, we can swap $$$a_1$$$ and $$$a_3$$$ first, and swap $$$a_1$$$ and $$$a_5$$$ second to make the array non-decreasing.</p><p> In the forth sample, we cannot the array non-decreasing using the operation.</p></div>