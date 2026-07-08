<h2><a href="https://codeforces.com/contest/1913/problem/A" target="_blank" rel="noopener noreferrer">1913A — Rating Increase</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1913A](https://codeforces.com/contest/1913/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Rating Increase</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp is a great solver of adhoc problems. Recently, he participated in an Educational Codeforces Round, and gained rating!</p><p>Monocarp knew that, before the round, his rating was $$$a$$$. After the round, it increased to $$$b$$$ ($$$b  \gt  a$$$). He wrote both values one after another to not forget them.</p><p>However, he wrote them so close to each other, that he can't tell now where the first value ends and the second value starts.</p><p>Please, help him find some values $$$a$$$ and $$$b$$$ such that: </p><ul> <li> neither of them has a leading zero; </li><li> both of them are strictly greater than $$$0$$$; </li><li> $$$b  \gt  a$$$; </li><li> they produce the given value $$$ab$$$ when written one after another. </li></ul><p>If there are multiple answers, you can print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of testcases.</p><p>The only line of each testcase consists of a single string $$$ab$$$ of length from $$$2$$$ to $$$8$$$ that: </p><ul> <li> consists only of digits; </li><li> doesn't start with a zero. </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, determine if such values $$$a$$$ and $$$b$$$ exist. If they don't, print <span class="tex-font-style-tt">-1</span>. Otherwise, print two integers $$$a$$$ and $$$b$$$.</p><p>If there are multiple answers, you can print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0039349978045257294" id="id00880445116029952" class="input-output-copier">Copy</div></div><pre id="id0039349978045257294"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">20002001</div><div class="test-example-line test-example-line-even test-example-line-2">391125</div><div class="test-example-line test-example-line-odd test-example-line-3">200200</div><div class="test-example-line test-example-line-even test-example-line-4">2001000</div><div class="test-example-line test-example-line-odd test-example-line-5">12</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008027590193926903" id="id002220890579668331" class="input-output-copier">Copy</div></div><pre id="id0008027590193926903">2000 2001
39 1125
-1
200 1000
1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second testcase, printing $$$3$$$ and $$$91125$$$ is also valid.</p><p>In the third testcase, $$$20$$$ and $$$0200$$$ is not valid, because $$$b$$$ has a leading zero. $$$200$$$ and $$$200$$$ is not valid, because $$$200$$$ is not strictly greater than $$$200$$$.</p></div>