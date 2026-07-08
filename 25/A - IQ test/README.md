<h2><a href="https://codeforces.com/contest/25/problem/A" target="_blank" rel="noopener noreferrer">25A — IQ test</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 25A](https://codeforces.com/contest/25/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. IQ test</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given <span class="tex-span"><i>n</i></span> numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given <span class="tex-span"><i>n</i></span> numbers finds one that is different in evenness.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">3 ≤ <i>n</i> ≤ 100</span>) — amount of numbers in the task. The second line contains <span class="tex-span"><i>n</i></span> space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00023947496383943445" id="id007090468614551205" class="input-output-copier">Copy</div></div><pre id="id00023947496383943445">5<br>2 4 7 8 10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009629731281116263" id="id0008357664449595925" class="input-output-copier">Copy</div></div><pre id="id009629731281116263">3<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014388471469849695" id="id0059288452789593" class="input-output-copier">Copy</div></div><pre id="id0014388471469849695">4<br>1 2 1 1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002929791878379039" id="id005953744517069638" class="input-output-copier">Copy</div></div><pre id="id002929791878379039">2<br></pre></div></div></div>