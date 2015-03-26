function toggle(n){
var home=document.getElementsByClassName("home")[0];
var networks=document.getElementsByClassName("networks")[0];
var switches=document.getElementsByClassName("switches")[0];
home.style.display="none";
networks.style.display="none";
switches.style.display="none";
if(n===1) { home.style.display="inline"; }
if(n===2) { networks.style.display="inline"; }
if(n===3) { switches.style.display="inline"; }
}
