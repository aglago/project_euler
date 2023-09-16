# My notes

## Javascript variables
<h2>Difference Between var, let and const</h2>
<table class="ws-table-all">
<tr></tr>
<tr><td></td><td>Scope</td><td>Redeclare</td><td>Reassign</td><td>Hoisted</td><td>Binds this</td></tr>
<tr><td>var</td><td>No</td><td>Yes</td><td>Yes</td><td>Yes</td><td>Yes</td></tr>
<tr><td>let</td><td>Yes</td><td>No</td><td>Yes</td><td>No</td><td>No</td></tr>
<tr><td>const</td><td>Yes</td><td>No</td><td>No</td><td>No</td><td>No</td></tr>
</table>
<h2>What is Good?</h2>
<p><code class="w3-codespan">let</code> and <code class="w3-codespan">const</code>
have <b>block scope</b>.</p>
<p><code class="w3-codespan">let</code> and <code class="w3-codespan">const</code>
can not be <b>redeclared</b>.</p>
<p><code class="w3-codespan">let</code> and <code class="w3-codespan">const</code>
must be <b>declared</b> before use.</p>
<p><code class="w3-codespan">let</code> and <code class="w3-codespan">const</code>
does <b>not bind</b> to <code class="w3-codespan">this</code>.</p>
<p><code class="w3-codespan">let</code> and <code class="w3-codespan">const</code>
are <b>not hoisted</b>.</p>
<h2>What is Not Good?</h2>
<p><code class="w3-codespan">var</code> does not have to be declared.</p>
<p><code class="w3-codespan">var</code> is hoisted.</p>
<p><code class="w3-codespan">var</code> binds to this.</p>
<hr>
<h2>Browser Support</h2>
<p>The <code class="w3-codespan">let</code> and <code class="w3-codespan">const</code> keywords are
not supported in Internet Explorer 11 or earlier.</p>
<p>The following table defines the first browser versions with full support:</p>
<div class="w3-responsive">
<table class="browserref notranslate">
  <tr>
    <th style="width:20%;" class="bsChrome" title="Chrome"></th>
    <th style="width:20%;" class="bsEdge" title="Edge"></th>
    <th style="width:20%;" class="bsFirefox" title="Firefox"></th>
    <th style="width:20%;" class="bsSafari" title="Safari"></th>
    <th style="width:20%;" class="bsOpera" title="Opera"></th>                
  </tr>
  <tr>
    <td>Chrome 49</td>
    <td>Edge 12</td>    
    <td>Firefox 36</td>
    <td>Safari 11</td>
    <td>Opera 36</td>
  </tr>
  <tr>
    <td>Mar, 2016</td>
    <td>Jul, 2015</td>    
    <td>Jan, 2015</td>
    <td>Sep, 2017</td>
    <td>Mar, 2016</td>
  </tr>
</table>
</div>


- source : [w3schools](https://www.w3schools.com/js/js_let.asp)

# How to run js files in terminal
## Installing `nodejs`
To install [Node.js](https://www.google.com/search?q=Node.js) on your terminal, follow these steps:

1. Open the terminal from your system's main menu or press the Ctrl + Alt + T shortcut.
2. Connect to the server using ssh by entering the following command: `ssh username@server_ip_address`.
3. Refresh the Apt cache to update the repository: `sudo apt update`.
4. Enter the system's password and press Enter.
5. Install [Node.js](https://www.google.com/search?q=Node.js) by entering the following command: `sudo apt-get install nodejs`.
   - Type Y and press Enter to start the installation.
   - Wait for the installation process to complete.
6. To check if `nodejs` has been successfully installed [Node.js](https://www.google.com/search?q=Node.js), use the following command: `node -v`. This will display the version number in the terminal.
7. If you decide to remove [Node.js](https://www.google.com/search?q=Node.js) from your Linux system, you can follow these steps:
   - Open the terminal.
   - Run the following command to remove [Node.js](https://www.google.com/search?q=Node.js): `sudo apt-get remove nodejs`.
   - Type Y and press Enter to confirm the removal.
   - Wait for the removal process to complete.

Once the installation is complete, [Node.js](https://www.google.com/search?q=Node.js) will be installed on your terminal.

