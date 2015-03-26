<!DOCTYPE html>
<html>

<head><title>Meow web server</title>
  <link rel="stylesheet" type="text/css" href="style.css">
  <script type="text/javascript" src="pages.js"> </script>
</head>

<body>
<div id="header">
    <img src="cats/cat.png" align=left>
    <br><br><h2>Meow</h2>
</div>

<h3 class="new_line"></h3>

<div id="nav">
  <button onclick="toggle(1)">Home</button><br><br>
  <button onclick="toggle(2)">Network</button><br><br>
  <button onclick="toggle(3)">Switches</button><br>
</div>

<div class="home tab">
<p> <font size="5">
                                Welcome to MEOW!
                                <br><br>
                                Select "Networks" to connect to or change networks.
                                <br>
                                Select "Switches" to control switches.
                                <br><br>

</font></p>
</div>

<div class="networks tab">
<font size="5">
<br>
This device by default creates its own network access point.  It's how you got here the first time. <br><br>
You can connect the device to your Wifi network:
<br><br>
<form action="/wifi">
    <input type="submit" value="CONNECT to WIFI" id="wifi-button">
<!--
    <input type="submit" value="Setup Wifi" style="background-color:#AAADAB;width:500px;height:40px;font-size:25px">
-->
</form>
</font>
</div>

<div class="switches tab">
<h1>Switches</h1>
<font size="5">
<form action="/cgi-bin/relay.cgi" method="GET">
<input type="radio" name="on" value="1" checked> Switch #1
<input type="radio" name="on" value="2"> Switch #2
<br>
<input type="submit" value="Turn ON" style="height:30px;font-size:20px"><br>
</form>
<br>
<form action="/cgi-bin/relay.cgi" method="GET">
<input type="radio" name="off" value="1" checked> Switch #1
<input type="radio" name="off" value="2"> Switch #2
<br>
<input type="submit" value="Turn OFF" style="height:30px;font-size:20px"> </form>
</font>
</div>

<div id="footer">
<p>Page Counter:<b>%counter%</b></p>
Copyright &#x263A; meow.home
</div>

</body></html>
