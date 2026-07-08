<h2><a href="https://codeforces.com/contest/1288/problem/C" target="_blank" rel="noopener noreferrer">1288C — Two Arrays</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1288C](https://codeforces.com/contest/1288/problem/C) |

## Topics
`combinatorics` `dp`

---

## Problem Statement

<div class="header"><div class="title">C. Two Arrays</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$n$$$ and $$$m$$$. Calculate the number of pairs of arrays $$$(a, b)$$$ such that:</p><ul> <li> the length of both arrays is equal to $$$m$$$; </li><li> each element of each array is an integer between $$$1$$$ and $$$n$$$ (inclusive); </li><li> $$$a_i \le b_i$$$ for any index $$$i$$$ from $$$1$$$ to $$$m$$$; </li><li> array $$$a$$$ is sorted in non-descending order; </li><li> array $$$b$$$ is sorted in non-ascending order. </li></ul><p>As the result can be very large, you should print it modulo $$$10^9+7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 1000$$$, $$$1 \le m \le 10$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer – the number of arrays $$$a$$$ and $$$b$$$ satisfying the conditions described above modulo $$$10^9+7$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003151113596158608" id="id00034635796187682644" class="input-output-copier">Copy</div></div><pre id="id003151113596158608">2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010888306934723324" id="id007385081311867344" class="input-output-copier">Copy</div></div><pre id="id0010888306934723324">5
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002661967270500941" id="id008095075774481628" class="input-output-copier">Copy</div></div><pre id="id002661967270500941">10 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005374840199116113" id="id00003348066876618483" class="input-output-copier">Copy</div></div><pre id="id005374840199116113">55
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007165616830433676" id="id005808686681901299" class="input-output-copier">Copy</div></div><pre id="id007165616830433676">723 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005551264015044485" id="id0042108141302184465" class="input-output-copier">Copy</div></div><pre id="id005551264015044485">157557417
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test there are $$$5$$$ suitable arrays: </p><ul> <li> $$$a = [1, 1], b = [2, 2]$$$; </li><li> $$$a = [1, 2], b = [2, 2]$$$; </li><li> $$$a = [2, 2], b = [2, 2]$$$; </li><li> $$$a = [1, 1], b = [2, 1]$$$; </li><li> $$$a = [1, 1], b = [1, 1]$$$. </li></ul></div>