Lecture 2-15: Network Attacks
===

Lecture by: [Dr. Geethapriya Thamilarasu](http://faculty.washington.edu/geetha/)
---

Firewalls can be an effective means of protecting a local system or network of systems from network-based security threats while at the same time affording access to the outside world via wide area networks and the Internet.


---
2 Types of Attacks
---

Denial-of-service
Backdoors
Sniffing
Spoofing
Man-in-the-middle
Replay
TCP/IP hijacking
Drive-by downloads
Phishing/pharming



---
3 Denial-of-Service Attack
---

Exploit known identified vulnerabilities
Purpose is to prevent normal system operations for authorized users
Can be accomplished in multiple ways
Take the system offline
Overwhelm the system with requests


---
4 SYN Flood Attack
---

An example of a DoS attack targeting a specific protocol or service
Illustrates basic principles of most DoS attacks 
Exploit a weakness inherent to the function of the TCP/IP protocol
Uses TCP three-way handshake to flood a system with faked connection requests

review the syn/synack slides from previous lectures for more detail.

---
5 TCP Three-Way Handshake
---

System 1 sends SYN packet to System 2.
System 2 responds with SYN/ACK packet.
System 1 sends ACK packet  to System 2 and communications can then proceed.

---
6 Steps of a SYN Flood Attack
---

Communication request sent to target system.
Target responds to faked IP address.
Target waits for non-existent system response.
Request eventually times out.
If the attacks outpace the requests timing-out, then systems resources will be exhausted.

---
7 SYN Flood Attack
---

![](./images)
---
8 Distributed Denial-of-Service Attack (DDoS)
---

   Goal is to deny access or service to authorized users
Uses resources of many systems combined into an attack network
Overwhelms target system or network
With enough attack agents, even simple web traffic can quickly affect a large website

Denial-of-Service Attack
Ping of Death (POD)
Another example of a DoS attack.
Illustrates an attack targeting a specific application.
Attacker sends (ICMP) ping packet > 64KB.
This ping packet size should not occur naturally.
ICMP packet will crash certain systems unable to handle it.


Buffer Overflow Attack
Buffer or memory pool is a necessity in programming applications
Example: login application – need memory space to accept user input and password
application error or Buffer overflow occurs when more data is sent to a buffer than it can handle
Buffer overflow causes
 DoS attack or
can make the target system execute instructions, or 
the attacker can take advantage of some other unintended consequence of the failure
Examples:
Sending oversized ICMP request packets(ping of death)

Sniffing
Attacker observes all network traffic.
Software, hardware, or combination of the two
Ability to target specific protocol, service, string of characters, etc.
May be able to modify some or all traffic in route
Network administrators can use to monitor and troubleshoot network performance.

Sniffing (continued)
Spoofing
True source of data is disguised:
Commonly accomplished by altering packet header information with false information
Can be used for a variety of purposes
Spoofing e-mail:
From address differs from sending system
Recipients rarely question authenticity of the e-mail


IP Address Spoofing
Smurf Attack
Uses a combination of IP spoofing and ICMP replies to cause a DoS attack.
The smurf attack uses spoofed broadcast ping messages to flood a target system.
An attacker sends forged ping packets (ICMP echo requests) to broadcast addresses of vulnerable networks (bounce site).
The attacker forges the source address such that it points to the target (victim) of the attack. 
All the systems on these networks reply to the victim with ICMP echo replies. This rapidly exhausts the bandwidth available to the target. 

Spoofing and Trusted Relationships
Man-in-the-Middle Attack
Attacker is positioned between two target hosts:
Typically accomplished through router manipulation 
Traffic redirected to attacker, then forwarded on
Benefits:
Attacker can intercept, modify, and/or block traffic
Communication appears normal to target hosts
Limitation:
 Useful data collection reduced if traffic is encrypted

Man-in-the-Middle Attack (continued)
Replay Attack
Attacker intercepts part of an exchange between two hosts and retransmits message later. 
Often used to bypass authentication mechanisms
Prevented by encrypting traffic, cryptographic authentication, and time-stamping messages.

TCP/IP Hijacking
Assume control of an already existing session:
Attacker circumvents authentication.
Can be disguised with a DoS attack.
Typically used against web and Telnet sessions.

Drive-by Download Attack
Unsolicited malware downloads
May be hidden in legitimate ads or hosted from web sites that prey on unaware users

Password Attacks
Most common user authentication is combination of user ID and password.

A compromised password typically indicates a failure to adhere to good password procedures.

Password Attacks (continued)
Password attack methods
Guess
Dictionary
Brute force
Hybrid
Birthday
War-dialing and War-driving
War-dialing attempts to find unprotected modem connections to a system over phone lines.
New telephone firewalls restrict access.
War-driving involves traveling around an area in search of vulnerable wireless networks.

Backdoor
Backdoor
Ensures continued unrestricted access in the future
Attackers implant them in compromised systems 
Can be installed inadvertently with a Trojan horse
Phishing 
