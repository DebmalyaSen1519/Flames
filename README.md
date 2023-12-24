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
<p><b>Now, result for the example I have chosen here turns out to be and I used this code to run it is</b>
<p><b>David Sally</b>
<p><b>Keneth Morrison</b>
<p><b>Ouch! Something is wrong. Too much negativity.</b>
<p><b>David Sally and Keneth Morrison are ENEMIES!</b>
<p><b>Try to solve your problems or kill the other one to live a peaceful life.</b>
<p>Funny isn't it?</p>
<br>
<h1>How the code works?</h1>
<h3>Use of hash functions</h3>
<p>As discussed above one has to rule out common letters in both the names and to accomplish that I used the hash function.</p>
<p>The hash function counts the frequency of letters in <b>string boy</b> and substracts the elements if there in <b> string girl</b> so that now all the common letters are decremented by number of times they are repeated in both the strings.</p>
<p>Now <b>int flame_number</b> is declared and both the hash functions are check and if <b>mp_girl[girl[i]]!=0</b> then <b>flame_number</b> is incremented by 1. This is done for both <b>boy</b> and <b>girl</b>. This way I calculated the <b>flame_number</b></p>
<h3>Use of circular linked lists</h3>
<p>This project of mine is not very recent rather I thought of writing the code for FLAMES in first second semester of first year of my B.Tech but at that time I didn't know <b>Data Structures and Algorithms</b> so I couldn't figure out how to solve the repeatitive deletion of letters in FLAMES.</p>
<p>Now, I know various method by which this could be solved and there are more efficient solution to this problem but I wanted to combine my college level DSA skills with competitive DSA skills which I gained through leetcode.com and through contests.</p>
<p>What I want to express is that through this approach one can understand how linked lists can be utilised to make a fun project which one can show off to their friends whilst gaining the knowledge of DSA and their further use in technology.</p>
<p>But why <b>Circular Linked Lists?</b></p>
<p>If you know the rules then you must be wondering how one can approach a problem of deleting one letter from a set of letters using a particular number which also loops over the remaining letters in the set?</p>\
<p>Don't worry. I thought about that too and after kicking myself in the head I thought, <b>"Loop, hmm. Circles, hmm. Circular linked list!"</b> and like that I had an intuition which once I went forward with got me the solution I was searching for since 5 months.</p>
<p>In <b>Circular linked list</b> the tail pointer points to the head so that even if the pointer one is using to traverse the list comes to the end of the list it would again go to the head of the list. And this was the Eurekha! moment for me. I created a simple circular linked list with insert function and a <b>size</b> counter. I didn't use the normal delete funciton one might write rather wrote the <b>flames(int pos)</b> function which deleted the letter at <b>pos</b> making sure to update the previous pointer points to the next of that position.</p>
<p>Here the only special case that I had to look at was when the <b>pos</b> iteration pointed at the head of the list. In this case I have to delete that head and update the head pointer. The tail anyway points to head so that takes cares of everything else.
<p>The deletion coninued till the <b>size</b> of the list == <b>1</b>. At that point the algorithm is over and the <b>head->data</b> is returned as the result. This result is then used to determine the final result of FLAMES.
<br>
<h1>Last Issue</h1>
<p>If the strings had any <b>uppercases</b> then the <b>hash function</b> would count them <b>separately</b> leading to bugs in the code so to avoid that a new function was written <b>remove_spaces_and_uppercase_to_lowercase</b>. This function also removes the spaces which doesn't affect the algorithm but it's safe to be cautious anyways.</p>