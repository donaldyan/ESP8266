function toggle(n){
	var home=document.getElementsByClassName("home")[0];
	var networks=document.getElementsByClassName("networks")[0];
	var switches=document.getElementsByClassName("switches")[0];
	var hometab=document.getElementsByClassName("hometab")[0];
	var networkstab=document.getElementsByClassName("networkstab")[0];
	var switchestab=document.getElementsByClassName("switchestab")[0];
	home.style.display="none";
	networks.style.display="none";
	switches.style.display="none";
	hometab.style.backgroundColor="#7777AA";
	networkstab.style.backgroundColor="#7777AA";
	switchestab.style.backgroundColor="#7777AA";
	if(n===1) { home.style.display="inline"; hometab.style.backgroundColor="#ffffff";}
	if(n===2) { networks.style.display="inline"; networkstab.style.backgroundColor="#ffffff";}
	if(n===3) { switches.style.display="inline"; switchestab.style.backgroundColor="#ffffff";}
}
