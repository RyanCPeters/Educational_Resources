Lecture 2-15: Network Attacks
===

Lecture by: [Dr. Geethapriya Thamilarasu](http://faculty.washington.edu/geetha/)
---

#### additional slide notes from title slide

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

#### additional slide notes
This is an agenda slide for the next 15 slides – to illustrate the different types of common attacks




---
3 Denial-of-Service Attack
---

Exploit known identified vulnerabilities
Purpose is to prevent normal system operations for authorized users
Can be accomplished in multiple ways
Take the system offline
Overwhelm the system with requests

#### additional slide notes
Security + Objective 2.1g DOS attacks

A denial-of-service (DoS) attack can exploit a previously identified vulnerability within a specific application or weakness in a specific protocol.  

The purpose of the DoS attack is to prevent a system from normal operations by denying authorized users access to system resources or the network in general.

There are multiple ways that a DoS attack can be carried out depending on the desired outcome and the tools available to carry-out the attack with.
One way to prevent authorized users access to the system would be to take the system offline.
Another way would be to overwhelm the system with so many requests that authorized users legitimate requests are unable to get through.

---
4 SYN Flood Attack
---

An example of a DoS attack targeting a specific protocol or service
Illustrates basic principles of most DoS attacks 
Exploit a weakness inherent to the function of the TCP/IP protocol
Uses TCP three-way handshake to flood a system with faked connection requests

review the syn/synack slides from previous lectures for more detail.

#### additional slide notes
Security + Objective 2.1g DOS attacks

One example of a DoS attack that exploits a weakness in the operation of a specific protocol is a SYN flood attack.  
A study of how a SYN flood attack works illustrates the basic principles of how any DoS attack works. 

A SYN flood attack takes advantage of the way that TCP/IP networks were designed to function.
SYN flooding uses the TCP three-way handshake that establishes a connection between two systems. 

---
5 TCP Three-Way Handshake
---

System 1 sends SYN packet to System 2.
System 2 responds with SYN/ACK packet.
System 1 sends ACK packet  to System 2 and communications can then proceed.

#### additional slide notes

First, System 1 sends a SYN packet to System 2 indicating a desire to communicate with the system.
Then System 2 responds to System 1 by sending back the SYN packet combined with an ACK packet to indicate its willingness to accept communications.
Once System 1 receives the SYN/ACK packet, it responds with an ACK packet and communications are then established between the systems.

---
6 Steps of a SYN Flood Attack
---

Communication request sent to target system.
Target responds to faked IP address.
Target waits for non-existent system response.
Request eventually times out.
If the attacks outpace the requests timing-out, then systems resources will be exhausted.

#### additional slide notes
Security + Objective 2.1g DOS attacks

First, an attacker sends a communication request to a target system, but fakes the IP address.
The target system then responds to the request, but directs its response to the faked IP address.
Next the target system waits in vain for an acknowledgement from the imaginary system at the faked IP address.
Of course that acknowledgement never comes and the communication request eventually times out.
However, if the attacker is able to send this type of communication requests quicker than they are timing out on the target system, it will create a backlog of requests which will tax the target system to the point of it no longer being able to accept new communication requests.

---
7 SYN Flood Attack
---

![](./images)

#### additional slide notes
This illustration shows a SYN flood attack as described in the previous slide.

---
8 Distributed Denial-of-Service Attack (DDoS)
---

   Goal is to deny access or service to authorized users
Uses resources of many systems combined into an attack network
Overwhelms target system or network
With enough attack agents, even simple web traffic can quickly affect a large website

#### additional slide notes
Security + Objective 2.1h DDoS attacks

Similar to a DoS attack, a Distributed Denial of Service (DDoS) attack has a goal of denying service to authorized users.
The difference between a DoS and DDoS attack centers on the ability of the DDoS to use the combined resources of many systems.  An entire network of attack agents can be commandeered and controlled by an attacker.
The combined systems can then overwhelm the target with traffic under the direction of the attacker.
If the attack network is large enough, even simple web traffic can quickly overwhelm even the largest web sites.



---
9 Denial-of-Service Attack
---

![]()

#### additional slide notes
Security + Objective 2.1h DDoS attacks

This illustration shows a DDoS attack as described in the previous slide.

---
10 Ping of Death (POD)
---

Another example of a DoS attack.
Illustrates an attack targeting a specific application.
Attacker sends (ICMP) ping packet > 64KB.
This ping packet size should not occur naturally.
ICMP packet will crash certain systems unable to handle it.

#### additional slide notes
A Ping of Death attack (POD) is an example of a DoS attack which targets a specific protocol or operating system.

Attacker sends an Internet Control Message Protocol (ICMP) ping packet equal to or greater than 64KB.
This type of packet should not occur naturally.

Some systems cannot handle the packet and will hang or crash.

---
11 Buffer Overflow Attack
---

Buffer or memory pool is a necessity in programming applications
Example: login application – need memory space to accept user input and password
application error or Buffer overflow occurs when more data is sent to a buffer than it can handle
Buffer overflow causes
 DoS attack or
can make the target system execute instructions, or 
the attacker can take advantage of some other unintended consequence of the failure
Examples:
Sending oversized ICMP request packets(ping of death)


---
12 Sniffing
---

Attacker observes all network traffic.
Software, hardware, or combination of the two
Ability to target specific protocol, service, string of characters, etc.
May be able to modify some or all traffic in route
Network administrators can use to monitor and troubleshoot network performance.

#### additional slide notes
TCP/IP protocols were originally developed to operate in a friendly environment where each system connected to the network used the protocols as they were designed.  However, as time went on, the protocols began to be abused as is illustrated by network-traffic sniffing programs, sometimes referred to as sniffers.

Sniffing occurs when an attacker examines all network traffic as it passes their NIC independent of whether or not the traffic is addressed to them or not.
Network sniffing can be accomplished with a software application, hardware device, or a combination of the two.
Sniffing can be used to view all network traffic or it can target a specific protocol, service, or even string of characters such as a login or password.
Some network sniffers are designed not just to observe all traffic but to modify some or all of the traffic as well.
Network administrators may also use sniffers to analyze network traffic, identify bandwidth issues, and troubleshoot other network issues.

---
13 Sniffing (continued)
---

![]()

#### additional slide notes
This illustration depicts an internal attacker with the ability to observe all network traffic.

Fortunately, for network sniffers to be most effective, they need to be on the internal network, which generally means that the chances for outsiders to use them against you are extremely limited. 
This is another reason that physical security is an important part of information security in today’s environment.

---
14 Spoofing
---

True source of data is disguised:
Commonly accomplished by altering packet header information with false information
Can be used for a variety of purposes
Spoofing e-mail:
From address differs from sending system
Recipients rarely question authenticity of the e-mail

#### additional slide notes
Security + Objective 2.1d spoofing

When data appears be coming from a different source than it actually is, the data source is being spoofed.  An attacker’s goal in spoofing may be to manipulate return packets in the case of ping sweeps, provide anonymity for e-mails, or perform some other action without the target systems .
Spoofing is accomplished by altering a packet’s header information  to deceive the receiver as to the true origin of the packet.  When a packet is sent from one system to another, it includes not only the destination IP address and port but the source IP address as well.  Systems should fill in the their own address as the source, but attackers can manipulate the system into filling in another system’s address.

Spoofing E-Mail
In e-mail spoofing, a message is sent with a from address that differs from that of the sending system. This can be easily accomplished in several different ways using several programs.
Recipients can use several methods to determine whether an e-mail message was sent by the source it claims to have been sent from, but most users do not question their e-mail and will accept as authentic where it appears to have originated.

---
15 IP Spoofing figure
---

![]()

---
16 IP Address Spoofing
---

![]()

#### additional slide notes
Security + Objective 2.1d spoofing

In a specific DoS attack known as a smurf attack, the attacker sends a spoofed packet to the broadcast address for a network, which distributes the packet to all systems on that network. In the smurf attack, the packet sent by the attacker to the broadcast address is an echo request with the From address forged so that it appears that another system (the target system) has made the echo request. 
The normal response of a system to an echo request is an echo reply, and it is used in the ping utility to let a user know whether a remote system is reachable and is responding. 

In this illustration, the attacker has sent one packet and has been able to generate as many as 254 responses aimed at the target. 
Should the attacker send several of these spoofed requests, or send them to several different networks, the target can quickly become overwhelmed with the volume of echo replies it receives.

---
17 Smurf Attack
---

Uses a combination of IP spoofing and ICMP replies to cause a DoS attack.
The smurf attack uses spoofed broadcast ping messages to flood a target system.
An attacker sends forged ping packets (ICMP echo requests) to broadcast addresses of vulnerable networks (bounce site).
The attacker forges the source address such that it points to the target (victim) of the attack. 
All the systems on these networks reply to the victim with ICMP echo replies. This rapidly exhausts the bandwidth available to the target. 


---
18 Spoofing and Trusted Relationships
---

![]()

#### additional slide notes
Security + Objective 2.1d spoofing

Spoofing can also take advantage of a trusted relationship between two systems. 
If two systems are configured to accept the authentication accomplished by each other, an individual logged onto one system might not be forced to go through an authentication process again to access the other system. 
An attacker can take advantage of this arrangement by sending a packet to one system that appears to have come from a trusted system. 
Since the trusted relationship is in place, the targeted system may perform the requested task without authentication.

Since a reply will often be sent once a packet is received, the system that is being impersonated could interfere with the attack, since it would receive an acknowledgement for a request it never made. 
The attacker will often initially launch a DoS attack (such as a SYN flooding attack) to temporarily take out the spoofed system for the period of time that the attacker is exploiting the trusted relationship. 
Once the attack is completed, the DoS attack on the spoofed system would be terminated, and the system administrators, apart from having a temporarily nonresponsive system, might never notice that the attack occurred. 
The figure in this slide illustrates a spoofing attack that includes a SYN flooding attack.

Because of this type of attack, administrators are encouraged to strictly limit any trusted relationships between hosts. 
Firewalls should also be configured to discard any packets from outside of the firewall that have From addresses indicating they originated from inside the network (a situation that should not occur normally and that indicates spoofing is being attempted).

---
19 Man-in-the-Middle Attack
---

Attacker is positioned between two target hosts:
Typically accomplished through router manipulation 
Traffic redirected to attacker, then forwarded on
Benefits:
Attacker can intercept, modify, and/or block traffic
Communication appears normal to target hosts
Limitation:
 Useful data collection reduced if traffic is encrypted

#### additional slide notes
Security + Objective 2.1e Man in the middle attacks

When an attacker successfully inserts themselves between two other hosts communications by spoofing addresses, it is referred to as a man-in-the-middle attack.
A man-in-the-middle attack is usually accomplished by manipulating a router to alter the path of the traffic.
The traffic is sent to the attacker rather than the intended target and then relayed on to the target host.

Benefits:
This enables the attacker to observe the traffic from each target host in route and may even allow the attacker to modify or block certain messages.
Since all expected replies are received by the target hosts, it can appear to them that communications are occurring normally.

Limit:
If the data being intercepted from the target hosts is encrypted, the attacker may only be able to glean a limited amount of information.

---
20 Man-in-the-Middle Attack (continued)
---
![]()

#### additional slide notes
Security + Objective 2.1e Man in the middle attacks

This diagram illustrates a Man-in-the-Middle attack as described in the previous slide.

---
21 Replay Attack
---

Attacker intercepts part of an exchange between two hosts and retransmits message later. 
Often used to bypass authentication mechanisms
Prevented by encrypting traffic, cryptographic authentication, and time-stamping messages.

#### additional slide notes
Security + Objective 2.1f replay attacks

A replay attack occurs when an attacker captures a portion of a communication between two hosts and then retransmits the captured message at a later time. 
Replay attacks are often used to circumvent authentication mechanisms.

Systems can prevent falling victim to a replay attack by encrypting traffic, providing cryptographic authentication, and including a time stamp with each portion of the message.

---
22 TCP/IP Hijacking
---

Assume control of an already existing session:
Attacker circumvents authentication.
Can be disguised with a DoS attack.
Typically used against web and Telnet sessions.

#### additional slide notes
Security + Objective 2.1b TCP/IP hijacking

TCP/IP hijacking and session hijacking are terms used to refer to the process of taking control of an already existing session between a client and a server.
The advantage to an attacker of hijacking over attempting to penetrate a computer system or network is that the attacker doesn’t have to circumvent any authentication mechanisms.
To prevent the user from noticing anything unusual, the attacker may target the user’s system with a DoS attack, taking it down so that the user, and the system, will not notice the extra traffic that is taking place.
Hijack attacks generally are used against web and Telnet sessions. 

---
23 Drive-by Download Attack
---

Unsolicited malware downloads
May be hidden in legitimate ads or hosted from web sites that prey on unaware users

#### additional slide notes
Browsers are used to navigate the Internet, using HTTP and other protocols to bring files to users’ computers. Some of these files are images, some are scripts, and some are text based, and together they form the web pages that we see. Users don’t ask for each component—it is the job of the browser to identify the needed files and fetch them. 

A new type of attack called a drive-by download attack takes advantage of this process by initiating downloads of malware, whether a user clicks it or not. 
Drive by downloads can occur from a couple of different mechanisms.  It is possible for an ad that is rotated into content on a reputable site to contain a drive by download. Users don’t have control over what ads are presented.  A second, more common method is a website that the user gets to either by mistyping a URL or by following a search link without vetting where they are clicking forst.  Just like cities can have bad neighborhoods, so too does the Internet, and surfing in a bad neighborhood can result in bad outcomes.

---
24 Password Attacks
---

Most common user authentication is combination of user ID and password.

A compromised password typically indicates a failure to adhere to good password procedures.

#### additional slide notes
Security + Objective 2.5b weak passwords

The combination of a user ID and a password is the most common form of system authentication.

When this combination fails, it is typically the result of users failing to adhere to good password procedures.

---
25 Password Attacks (continued)
---

Password attack methods
Guess
Dictionary
Brute force
Hybrid
Birthday

#### additional slide notes
  There are multiple ways to attack passwords as the following list illustrates:
Guessing - It is surprising how often this simple method works, and the reason it does is because people are notorious for picking poor passwords. Even if the person doesn’t use some personal detail as her password, the attacker may still get lucky, since many people use a common word for their password. Attackers can use the Internet to find many lists of common passwords to try. 
Dictionary attack - The dictionary words can be used by themselves, or two or more smaller words can be combined to form a single possible password. A number of commercial and public-domain password-cracking programs employ a variety of methods to crack passwords, including using variations on the user ID.
  Brute-force attack - a password-cracking program that attempts all possible character combinations.  The length of the password and the size of the set of possible characters in the password will greatly affect the time a brute-force attack will take. A few years ago, this method of attack was very time consuming, since it took considerable time to generate all possible combinations. With the increase in computer speed, however, generating password combinations is much faster, making it more feasible to launch brute-force attacks against certain computer systems and networks.  A brute-force attack on a password can take place at two levels: The attacker can use a password-cracking program to attempt to guess the password directly at a login prompt, or the attacker can first steal a password file, use a password-cracking program to compile a list of possible passwords based on the list of password hashes contained in the password file (offline), and then use that narrower list to attempt to guess the password at the login prompt. The first attack can be made more difficult if the account locks after a few failed login attempts. The second attack can be thwarted if the password file is securely maintained so that others cannot obtain a copy of it.
hybrid attack -  is a password attack that combines the dictionary and brute-force methods.  Most password cracking tools operate perform in this manner by first attempting a dictionary attack and then moving on to brute-force methods.  The programs often permit the attacker to create various rules that tell the program how to combine words to form new possible passwords. Users commonly substitute certain numbers for specific letters. If the user wanted to use the word secret as a base for a password, for example, she could replace the letter e with the number 3, yielding s3cr3t. This password will not be found in the dictionary, so a pure dictionary attack would not crack it, but the password is still easy for the user to remember. If the attacker created a rule that instructed the program to try all words in the dictionary and then try the same words substituting the number 3 for the letter e, however, the password would be cracked.
birthday attack  - is a special type of brute-force attack that gets its name from something known as the birthday paradox, which states that in a group of at least 23 people, the chance that two individuals will have the same birthday is greater than 50 percent.  Mathematically, the equation is 1.25×k1/2, where k equals the size of the set of possible values, which in the birthday paradox is 365 (the number of possible birthdays).This same phenomenon applies to passwords, with k (number of passwords) being quite a bit larger.

---
26 War-dialing and War-driving
---

War-dialing attempts to find unprotected modem connections to a system over phone lines.
New telephone firewalls restrict access.
War-driving involves traveling around an area in search of vulnerable wireless networks.

#### additional slide notes
Security + Objective 2.7b war-driving

War-dialing is an attempt by an attacker to find unprotected modem connections to an organizations computer systems and networks.  Success is often the result of authorized individuals connecting unauthorized or rogue modems to the network.  The authorized user’s intent is not usually malicious, but the results can be. 
In recent years, advances in telephone firewalls have severely restricted unauthorized connections while also increasing the security of authorized modems as well.

The term war-driving  refers to attackers wandering around an area (often in a car), searching for available wireless network connections.  There are security measures built into both the hardware and software tasked with maintaining a wireless access point, but it will only operate as well as it is configured.

---
27 Backdoor
---

Backdoor
Ensures continued unrestricted access in the future
Attackers implant them in compromised systems 
Can be installed inadvertently with a Trojan horse

#### additional slide notes
Security + Objective 2.5c backdoors

In the beginning, backdoors referred to efforts by software developers to ensure access to a program that bypassed the normal access methods.  Overtime, this practice has come to be known as creating a trapdoor into a program.
One problem with a trapdoor is that since it is hard-coded into the program, it can be very difficult if not impossible to remove.
A benefit to software developers and system administrators alike in using a trapdoor is that it ensures access to a program even if the normal access methods fail.
However, this benefit is far outweighed by the vulnerability the trapdoor creates within each system running the affected software.  The trapdoor offers full access into the system where an attacker could cause serious harm.

More recently, a backdoor has come to refer to the programs or code introduced by an attacker that has compromised a system. A few common backdoor programs are Netbus and Back Orifice which both allow remote access to unauthorized system users.
The purpose of the backdoor is to grant the attacker future access to the system even if the original vulnerability used to attack the system has been rectified. 
Usually, backdoors are installed on systems by unauthorized users or attackers.
However, they can also be installed by authorized users who inadvertently run a Trojan horse program on their machine which then installs the backdoor as well.

Similar to the backdoor, another method employed by attackers is to install a rootkit on a system that ensures continued root access for the attacker.

---
28 Phishing 
---

![]()
