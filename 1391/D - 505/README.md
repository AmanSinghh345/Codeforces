<h2><a href="https://codeforces.com/contest/1391/problem/D" target="_blank" rel="noopener noreferrer">1391D — 505</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1391D](https://codeforces.com/contest/1391/problem/D) |

## Topics
`bitmasks` `brute force` `constructive algorithms` `dp` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D. 505</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A binary matrix is called <span class="tex-font-style-bf">good</span> if every <span class="tex-font-style-bf">even</span> length square sub-matrix has an <span class="tex-font-style-bf">odd</span> number of ones. </p><p>Given a binary matrix $$$a$$$ consisting of $$$n$$$ rows and $$$m$$$ columns, determine the minimum number of cells you need to change to make it good, or report that there is no way to make it good at all. </p><p>All the terms above have their usual meanings — refer to the Notes section for their formal definitions. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n \leq m \leq 10^6$$$ and $$$n\cdot m \leq 10^6$$$)  — the number of rows and columns in $$$a$$$, respectively. </p><p>The following $$$n$$$ lines each contain $$$m$$$ characters, each of which is one of <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span>. If the $$$j$$$-th character on the $$$i$$$-th line is <span class="tex-font-style-tt">1</span>, then $$$a_{i,j} = 1$$$. Similarly, if the $$$j$$$-th character on the $$$i$$$-th line is <span class="tex-font-style-tt">0</span>, then $$$a_{i,j} = 0$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the minimum number of cells you need to change to make $$$a$$$ good, or output $$$-1$$$ if it's not possible at all.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003777529626433639" id="id002677942953585062" class="input-output-copier">Copy</div></div><pre id="id003777529626433639">3 3
101
001
110
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041827854533009745" id="id007688809004724941" class="input-output-copier">Copy</div></div><pre id="id0041827854533009745">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009810946466095085" id="id007006449227928103" class="input-output-copier">Copy</div></div><pre id="id009810946466095085">7 15
000100001010010
100111010110001
101101111100100
010000111111010
111010010100001
000011001111101
111111011010011
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008825709168112131" id="id005676776078591481" class="input-output-copier">Copy</div></div><pre id="id008825709168112131">-1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case, changing $$$a_{1,1}$$$ to $$$0$$$ and $$$a_{2,2}$$$ to $$$1$$$ is enough. </p><p>You can verify that there is no way to make the matrix in the second case good. </p><p>Some definitions — </p><ul> <li> A binary matrix is one in which every element is either $$$1$$$ or $$$0$$$. </li><li> A sub-matrix is described by $$$4$$$ parameters — $$$r_1$$$, $$$r_2$$$, $$$c_1$$$, and $$$c_2$$$; here, $$$1 \leq r_1 \leq r_2 \leq n$$$ and $$$1 \leq c_1 \leq c_2 \leq m$$$. </li><li> This sub-matrix contains all elements $$$a_{i,j}$$$ that satisfy both $$$r_1 \leq i \leq r_2$$$ and $$$c_1 \leq j \leq c_2$$$. </li><li> A sub-matrix is, further, called an even length square if $$$r_2-r_1 = c_2-c_1$$$ and $$$r_2-r_1+1$$$ is divisible by $$$2$$$. </li></ul></div>