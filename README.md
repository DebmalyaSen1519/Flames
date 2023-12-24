# Flames
This repository contains the codes required for the FLAMES algorithm which is a quiet famous game. It contains codes from both naive approach to high-level one. The basic task of this was to understand data structures and how to use them in a fun way so that anyone could understand why one may need to study it.
<br>
<h1>What is Flames?</h1>
<p>I don't think this had to be explained beacuse almost everybody has once in their lifetime played the famous game which lets you know what to expect from your crush or someone you just vibe with.</p>
<p>There might be few who need a recap of what FLAMES is. For them it is a game mwhere you need two name; for an example I wil be going with:</p>
<p><b>David Sally</b> and</p>
<p><b>Keneth Morrison</b></p>
<h3>Rules</h3>
<p>The rules of the game is pretty simple; cut out the common letters from both the names and then count the remaining letters.</p>
<p>Here as you can see the remaining number of elements is <b>20</b></p>
<p>So now the last part of the game is repeatedly couting over the letters "FLAMES" until you reach the flame number and then you remove that particular letter from "FLAMES" and start counting again from the next element and repeat the process.</p>
<p>If you reach the end then start from the start and do this untill one letter remains which will determine the result.</p>
<h3>Result of FLAMES</h3>
<p>Now for the result; different elements represent something different.</p>
<ul>
  <li><b>F</b> - <b>Friend</b></li>
  <li><b>L</b> - <b>Love</b></li>
  <li><b>A</b> - <b>Attraction</b></li>
  <li><b>M</b> - <b>Marriage</b></li>
  <li><b>E</b> - <b>Enemy</b></li>
  <li><b>S</b> - <b>Sibling</b></li>
</ul>
<p>Now, result for the example I have chosen here turns out to be and I used this code to run it is</p>
<p>David Sally</p>
<p>Keneth Morrison</p>
<p>Ouch! Something is wrong. Too much negativity.</p>
<p>David Sally and Keneth Morrison are ENEMIES!</p>
<p>Try to solve your problems or kill the other one to live a peaceful life.</p>
<p>Funny isn't it?</p>
<br>
<h1>How the code works?</h1>
<h3>Use of hash functions</h3>
<p>As discussed above one has to rule out common letters in both the names and to accomplish that I used the hash function.</p>
<p>The hash function counts the frequency of letters in <mark>string boy</mark> and substracts the elements if there in <mark> string girl</mark> so that now all the common letters are decremented by number of times they are repeated in both the strings.</p>
<p>Now <mark>int flame_number</mark> is declared and both the hash functions are check and if <mark>mp_girl[girl[i]]!=0</mark> then <mark>flame_number</mark> is incremented by 1. This is done for both <mark>boy</mark> and <mark>girl</mark>. This way I calculated the <mark>flame_number</mark></p>