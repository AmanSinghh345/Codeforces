<h2><a href="https://codeforces.com/contest/1215/problem/B" target="_blank" rel="noopener noreferrer">1215B — The Number of Products</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1215B](https://codeforces.com/contest/1215/problem/B) |

## Topics
`combinatorics` `dp` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. The Number of Products</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a sequence $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ non-zero integers (i.e. $$$a_i \ne 0$$$). </p><p>You have to calculate two following values:</p><ol> <li> the number of pairs of indices $$$(l, r)$$$ $$$(l \le r)$$$ such that $$$a_l \cdot a_{l + 1} \dots a_{r - 1} \cdot a_r$$$ is negative; </li><li> the number of pairs of indices $$$(l, r)$$$ $$$(l \le r)$$$ such that $$$a_l \cdot a_{l + 1} \dots a_{r - 1} \cdot a_r$$$ is positive; </li></ol></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ $$$(1 \le n \le 2 \cdot 10^{5})$$$ — the number of elements in the sequence.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ $$$(-10^{9} \le a_i \le 10^{9}; a_i \neq 0)$$$ — the elements of the sequence.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integers — the number of subsegments with negative product and the number of subsegments with positive product, respectively.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010136196034423828" id="id00624837556719819" class="input-output-copier">Copy</div></div><pre id="id0010136196034423828">5
5 -3 3 -1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007719839413412797" id="id004637707780605528" class="input-output-copier">Copy</div></div><pre id="id007719839413412797">8 7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009630721590917378" id="id0023881118484931596" class="input-output-copier">Copy</div></div><pre id="id009630721590917378">10
4 2 -4 3 1 2 -4 3 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009613232286020378" id="id00165669077470469" class="input-output-copier">Copy</div></div><pre id="id009613232286020378">28 27
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009305050279822938" id="id008006384691552862" class="input-output-copier">Copy</div></div><pre id="id009305050279822938">5
-1 -2 -3 -4 -5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008233991719984777" id="id0021599371919375854" class="input-output-copier">Copy</div></div><pre id="id008233991719984777">9 6
</pre></div></div></div>