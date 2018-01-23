Security Principles
===

Created By: [Dr. Geethapriya Thamilarasu](http://faculty.washington.edu/geetha/)
---

##### Formatted to work in GitHub's markdown syntax by Ryan Peters

---

#### Table of Contents


---
Definitions of Keywords and short-hand abbreviations
---

- Short-hand:
	+ Sec == Security
		- SecPr == Security Principles


---
Security Principels
---


This is an agenda slide for the next eight slides – to introduce the coming topics.
These are important principles that guide our decision-making process in designing, 
planning, and implementing secure information systems.
Note that four of the items address specific Comptia Objectives

Comptia Objectives
Security approaches -  
Least privilege – 3.1
Separation of duties – 3.1
Implicit deny – 3.1
Job rotation – 3.1
Layered security
Defense in depth
Security through obscurity
Keep it simple



?
Slide 3

 

Security+ objective 3.3a Organize into groups and roles

1. One of the most fundamental approaches to security is least privilege. 
2. There are two prominent drawbacks to this security concept, however.
A. First, if the concept isn't utilized correctly by allowing everyone the same rights and 
permissions just because it is easier, then the entire purpose of using least privilege 
is cancelled out. 
B. Second, programs should execute only in the security context that is needed for that 
program to perform its duties successfully. If all the programs run under a main 
administrator account, then any attack through that domain would have an elevated 
access level and could cause much more damage.

If a person is logged in as an administrator, then any program that is run, including 
malware, will run as an administrator (this is what we mean by context). Many of the 
things that malware tries to do to a system would not work as a normal user and 
would stop some of the viruses from being successful.



?
Slide 4

 

Security+ objective 3.1c Separation of Duties




?
Slide 5

 

Security+ objective 3.1a Implicit Deny

•	One of the less friendly, but fundamental, approaches to security are known as implicit deny. 
•	Implicit deny is an essential default setting for any security system. 
•	An example can be found in the programs used to monitor and block access to certain web 
sites. The first approach would provide a list websites the users cannot access. The opposite 
approach would block all access to sites not identified as authorized. Either approach of this 
concept is effective, whichever one is chosen for an organization is chosen based on the security 
objectives or policies of the organization.



?
Slide 6

 

Security+ objective 3.1d Job Rotation

•	More basic but essential approaches to security would be job rotation and layered security. 
•	A drawback to job rotation occurs when an organization relies on this concept too heavily. 
Since the IT world is very technical, some of the skills and aspects of expertise required for the 
various areas of IT require years of study and development to master. By rotating the individuals 
through the jobs too much, they lose the ability to take the time necessary to gain better 
expertise in different areas of IT. 


?
Slide 7

 

•	More basic, but essential approaches to security would be job rotation and layered security. 
•	Layered security is a security approach that focuses on a security system as a piece of 
architecture. 
•	Example of layered security could be found in the layout of a bank. A bank does not protect 
the money that it stores only by using a vault. It has one or more security guards as a first 
defense to watch for suspicious activities and to secure the facility when the bank is closed. 
It may have monitoring systems that watch various activities that take place in the bank, 
whether involving customers or employees. The vault is usually located in the center of the 
facility, and thus there are layers of rooms or walls before arriving at the vault. There is 
access control, which ensures that the people entering the vault have to be given the 
authorization beforehand. And the systems, including manual switches, are connected 
directly to the police station in case a determined bank robber successfully penetrates any 
one of these layers of protection.



?
Slide 8

 


?
Slide 9

 

•	An example of Diversity of Defense: 
A. If an environment has two firewalls that form a demilitarized zone (DMZ). For example, one 
firewall may be placed at the perimeter of the Internet and the DMZ. This firewall analyzes 
the traffic that is entering through that specific access point and enforces certain types of 
restrictions. The other firewall may then be placed between the DMZ and the internal 
network. When applying the diversity of defense concept, you should set up these two 
firewalls to filter for different types of traffic and provide different types of restrictions. The 
first firewall, for example, may make sure that no FTP, SNMP, or Telnet traffic enters the 
network but allow SMTP, SSH, HTTP, and SSL traffic through. The second firewall may not 
allow SSL or SSH through and may interrogate SMTP and HTTP traffic to make sure that 
certain types of attacks are not part of that traffic.
•	Another example of diversity of defense:
B. An organization may use products from different vendors. Every product has its own security 
vulnerabilities that are usually known to experienced attackers in the community. A check 
point firewall has different security issues and settings than the open source sentry firewall; 
thus different exploits can be used against them to crash them or compromise them in 
some fashion. Combining this type of diversity with the preceding example, you might 
utilize the check point firewall as the first line of defense. If attackers are able to penetrate 
it, they are less likely to get through the next firewall if it is one from another vendor, such 
as a Cisco PIX firewall or a sentry firewall.
 
A drawback is this adds complexity to the network and makes it more difficult to maintain.




?
Slide 10

 

•	In this day and age, when any subject can be researched or discussed on the internet and 
technology is more widely understood, this concept is not effective. 
•	Since security through obscurity only seeks to hide an object, and not implement a security 
control to protect the object, any successful attack to the system or leak of information 
could compromise the system.


?
Slide 11

 

•	The terms security and complexity are often at odds with each other, because the more 
complex something is, the harder it is to understand, and it’s nearly impossible to secure 
something that cannot be understood. Another reason complexity can destroy security is 
that it allows too many opportunities for something to go wrong. 
•	The default controls on most computer systems is to leave many services and programs 
running at one time. The keep it simple principle ensures that the processes that are 
running unnecessarily be eliminated. 
•	This is a good ideal to apply to security as well, since it results in fewer applications that can 
be exploited and fewer services that the administrator is responsible for securing. 
•	Alternately, the extreme of this approach is to assume that no service is necessary and 
activate services and ports only as they are requested. Whichever approach is taken towards 
the keep it simple principle, balance between providing functionality and maintaining 
security is essential.


?
Slide 12

 

Minimize the amount of mechanism common to more than one user and depended on by all 
users [28]. Every shared mechanism (especially one involving shared variables) represents a 
potential information path between users and must be designed with great care to be sure it 
does not unintentionally compromise security. Further, any mechanism serving all users must be 
certified to the satisfaction of every user, a job presumably harder than satisfying only one or a 
few users. For example, given the choice of implementing a new function as a supervisor 
procedure shared by all users or as a library procedure that can be handled as though it were 
the user's own, choose the latter course. Then, if one or a few users are not satisfied with the 
level of certification of the function, they can provide a substitute or not use it at all. Either way, 
they can avoid being harmed by a mistake in it. 


?
Slide 13

 



