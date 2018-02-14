Internet Firewalls and Security
===

---


---
1 
---


##### additional slide notes

Firewalls can be an effective means of protecting a local system or network of systems from network-based security threats while at the same time affording access to the outside world via wide area networks and the Internet.


---
2 some quotes 
---

The function of a strong position is to make the forces holding it practically unassailable.	
— On War, Carl Von Clausewitz

On the day that you take up your command, block the frontier passes, destroy the official tallies, and stop the passage of all emissaries.
—The Art of War, Sun Tzu


---
3 Defenses
---

![](./images/slide3.png)




---
4 Firewalls
---




---
5 Introduction
---

Increasing concerns about the security of organization’s networks when they expose their private data and networking infrastructure to Internet
Organization needs a security policy to prevent unauthorized users from accessing resources on the private network and to protect against the unauthorized export of private information
Organization needs to also establish an internal security policy to manage user access to portions of the network and protect sensitive or secret information.
While it is possible to equip each workstation and server on the premises network with strong security features, this may not be sufficient and in some cases is not cost-effective


---
6 What is a Firewall?
---

Firewall
An alternative, or at least complement, to host-based security services
Is a system or group of systems (combination of hardware and software) that enforces a security policy between an organization's network and the Internet. 
Is inserted between the premises network and the Internet to establish a controlled link and to erect an outer security wall or perimeter
Part of an overall security policy that creates a perimeter defense designed to protect the information resources of the organization
The aim of this perimeter is to protect the premises network from Internet-based attacks and to provide a single choke point where security and auditing can be imposed


##### additional slide notes

 Information systems in corporations, government agencies, and other organizations
have undergone a steady evolution. The following are notable developments:

•  Centralized data processing system, with a central mainframe supporting a
number of directly connected terminals

•  Local area networks (LANs) interconnecting PCs and terminals to each other
and the mainframe

•  Premises network, consisting of a number of LANs, interconnecting PCs,
servers, and perhaps a mainframe or two

•  Enterprise-wide network, consisting of multiple, geographically distributed
premises networks interconnected by a private wide area network (WAN)

•  Internet connectivity, in which the various premises networks all hook into the
Internet and may or may not also be connected by a private WAN
Internet connectivity is no longer optional for organizations. The information
and services available are essential to the organization. Moreover, individual users
 within the organization want and need Internet access, and if this is not provided via
their LAN, they will use dial-up capability from their PC to an Internet service provider
(ISP). However, while Internet access provides benefits to the organization, it
enables the outside world to reach and interact with local network assets. This creates
a threat to the organization. While it is possible to equip each workstation and
server on the premises network with strong security features, such as intrusion protection,
this may not be sufficient and in some cases is not cost-effective. Consider
a network with hundreds or even thousands of systems, running various operating
systems, such as different versions of UNIX and Windows. When a security flaw
is discovered, each potentially affected system must be upgraded to fix that flaw.
This requires scalable configuration management and aggressive patching to function
effectively. While difficult, this is possible and is necessary if only host-based
security is used. A widely accepted alternative or at least complement to host-based
security services is the firewall. The firewall is inserted between the premises network
and the Internet to establish a controlled link and to erect an outer security
wall or perimeter. The aim of this perimeter is to protect the premises network from
Internet-based attacks and to provide a single choke point where security and auditing
can be imposed. The firewall may be a single computer system or a set of two or
more systems that cooperate to perform the firewall function.

The firewall, then, provides an additional layer of defense, insulating the
internal systems from external networks. This follows the classic military doctrine of
“defense in depth,” which is just as applicable to IT security.


---
7 no title 
---

![](./images/slide7.png)


---
8 Firewall characteristics
---

Design goals for a firewall:
All traffic from inside to outside, and vice versa, must pass through the firewall
Only authorized traffic, as defined by the local security policy, will be allowed to pass
The firewall itself is immune to penetration
Techniques that firewalls use to control access and enforce the site’s security policy:

Service control
  Determines the types of Internet services that can be accessed, inbound or outbound 
Direction control
  Determines the direction in which particular service requests may be initiated and allowed to flow through the firewall
User control
  Controls access to a service according to which user is attempting to access it
Behavior control
  Controls how particular services are used


#### additional slide notes

following  are the design goals for a firewall:

1. All traffic from inside to outside, and vice versa, must pass through the firewall.
This is achieved by physically blocking all access to the local network
except via the firewall. Various configurations are possible, as explained later.

2. Only authorized traffic, as defined by the local security policy, will be allowed
to pass. Various types of firewalls are used, which implement various types of
security policies, as explained later.

3. The firewall itself is immune to penetration. This implies the use of a hardened
system with a secured operating system. Trusted computer systems are
suitable for hosting a firewall and often required in government applications.

[SMIT97] lists four general techniques that firewalls use to control access and
enforce the site’s security policy. Originally, firewalls focused primarily on service
control, but they have since evolved to provide all four:

• Service control: Determines the types of Internet services that can be accessed,
inbound or outbound. The firewall may filter traffic on the basis of IP
address, protocol, or port number; may provide proxy software that receives
and interprets each service request before passing it on; or may host the server
software itself, such as a Web or mail service.

• Direction control: Determines the direction in which particular service
requests may be initiated and allowed to flow through the firewall.

• User control: Controls access to a service according to which user is attempting
to access it. This feature is typically applied to users inside the firewall
perimeter (local users). It may also be applied to incoming traffic from external
users; the latter requires some form of secure authentication technology,
such as is provided in IPsec (Chapter 9).

• Behavior control: Controls how particular services are used. For example, the
firewall may filter e-mail to eliminate spam, or it may enable external access to
only a portion of the information on a local Web server.


---
9 Benefits of an Internet Firewall
---

![](./images/slide9.png)

#### additional slide notes

Before proceeding to the details of firewall types and configurations, it is best
to summarize what one can expect from a firewall. The following capabilities are
within the scope of a firewall:

1.  A firewall defines a single choke point that keeps unauthorized users out of
the protected network, prohibits potentially vulnerable services from entering
or leaving the network, and provides protection from various kinds of IP
spoofing and routing attacks. The use of a single choke point simplifies security
management because security capabilities are consolidated on a single
system or set of systems.

2.  A firewall provides a location for monitoring security-related events. Audits
and alarms can be implemented on the firewall system.

3.  A firewall is a convenient platform for several Internet functions that are not
security related. These include a network address translator, which maps local
addresses to Internet addresses, and a network management function that
audits or logs Internet usage.

4.  A firewall can serve as the platform for IPsec. Using the tunnel mode capability
described in Chapter 9, the firewall can be used to implement virtual
private networks.

---
10 Firewall limitations
---

![](./slide10.png)

#### additional slide notes

Firewalls have their limitations, including the following:

1.  The firewall cannot protect against attacks that bypass the firewall. Internal
systems may have dial-out capability to connect to an ISP. An internal LAN
may support a modem pool that provides dial-in capability for traveling
employees and telecommuters.

2.  The firewall may not protect fully against internal threats, such as a disgruntled
employee or an employee who unwittingly cooperates with an external
attacker.

3.  An improperly secured wireless LAN may be accessed from outside the
organization. An internal firewall that separates portions of an enterprise
network cannot guard against wireless communications between local
systems on different sides of the internal firewall.

4.  A laptop, PDA, or portable storage device may be used and infected outside
the corporate network, and then attached and used internally.

---
11 Basic Firewall Design Decisions
---

Stance of the Firewall : describes the fundamental security philosophy of the organization.
Everything not specifically permitted is denied (Recommended, security vs. ease of use)
Everything not specifically denied is permitted 
Security Policy of the Organization
The security policy must be based on a carefully conducted security analysis, risk assessment, and business needs analysis
If an organization does not have a detailed security policy, the most carefully crafted firewall can be circumvented to expose the entire private network to attack
Cost of the Firewall
Development, deployment costs, continuing support for administration, general maintenance, software updates, security patches, and incident handling
Type of Firewall System



---
12 no title 
---

![](./images/slide12.png)

#### additional slide notes

A packet filtering firewall applies a set of rules to each incoming and outgoing
IP packet and then forwards or discards the packet (Figure 12.1b). The firewall
is typically configured to filter packets going in both directions (from and to
the internal network). Filtering rules are based on information contained in a
network packet:

• Source IP address:  The IP address of the system that originated the IP packet
(e.g., 192.178.1.1)

• Destination IP address:  The IP address of the system the IP packet is trying to
reach (e.g., 192.168.1.2)

• Source and destination transport-level address:  The transport-level (e.g., TCP
or UDP) port number, which defines applications such as SNMP or TELNET

• IP protocol field:  Defines the transport protocol

• Interface:  For a firewall with three or more ports, which interface of the
firewall the packet came from or which interface of the firewall the packet is
destined for

The packet filter is typically set up as a list of rules based on matches to fields
in the IP or TCP header. If there is a match to one of the rules, that rule is invoked
to determine whether to forward or discard the packet. If there is no match to any
rule, then a default action is taken. Two default policies are possible:

• Default  discard:  That which is not expressly permitted is prohibited.

• Default  forward:  That which is not expressly prohibited is permitted.

The default discard policy is more conservative. Initially, everything is
blocked, and services must be added on a case-by-case basis. This policy is more
visible to users, who are more likely to see the firewall as a hindrance. However,
this is the policy likely to be preferred by businesses and government organizations.
Further, visibility to users diminishes as rules are created. The default forward
policy increases ease of use for end users but provides reduced security; the
security administrator must, in essence, react to each new security threat as it
becomes known. This policy may be used by generally more open organizations,
such as universities.


---
13 Packet Filtering Firewalls
---

Firewall may act as a packet filter
Can operate as positive or negative filter
Packet filtering firewalls examine header information of data packets, determining whether the datagram should be allowed to pass or should be dropped based on administrator-specific rules
Simple firewall models enforce rules designed to prohibit packets with certain addresses or partial addresses
Accomplished though access control lists (ACLs), which are created and modified by the firewall administrators
The firewall is typically configured to filter packets going in both directions (from and to the internal network).

---
14 Packet Filtering Firewalls
---

Filtering decisions are based on information contained in a network packet.
Source IP address: The IP address of the system that originated the IP packet.
Destination IP address: The IP address of the system where  the IP packet is trying to reach.
Source and destination transport-level address : The transport level (e.g., TCP or UDP) port number, which defines applications such as SNMP or TELNET.
IP protocol field : Defines the transport protocol (TCP, UDP, ICMP, OSPF, and so on)
Interface: For a firewall with three or more ports, which interface of the firewall the packet came from or which interface of the firewall the packet is destined for.


---
15 Packet Filtering Firewalls
---

The packet filter is typically set up as a list of rules based on matches to fields in the IP or TCP header. If there is a match to one of the rules, that rule is invoked to determine whether to forward or discard the packet.
If there is no match to any rule, then a default action is taken. Two default policies are possible:
Default = discard: That which is not expressly permitted is prohibited.
Default = forward: That which is not expressly prohibited is permitted.
The default discard policy is more conservative. Initially, everything is blocked, and services must be added on a case-by-case basis. 
The default forward policy increases ease of use for end users but provides reduced security; the security administrator must, in essence, react to each new security threat as it becomes known.

---
16 Packet Filtering Firewalls
---

Filtering can also be based on whether or not the TCP ACK bit is set. 
Useful if an organization wants to let its internal clients connect to external servers but wants to prevent external clients from connecting to internal servers.
Recall that the first segment in every TCP connection has the ACK bit set to 0, whereas all the other segments in the connection have the ACK bit set to 1. 
If an organization wants to prevent external clients from initiating connections to internal servers, it simply filters all incoming segments with the ACK bit set to 0. 
This policy kills all TCP connections originating from the outside, but permits connections originating internally.
Firewall rules are implemented in routers with access control lists, with each router interface having its own list.





#### additional slide notes

Many protocols are acknowledgement(ACK)-based, meaning that they positively acknowledge receipt of messages. The internet's Transmission Control Protocol (TCP) is an example of an ACK-based protocol


---
17 Security Policy of the Organization
---

![](./images/slide17.png)

---
18 Example of Access Control List Simple Ruleset for SMTP Traffic
---

Allow inbound and outbound e-mail traffic but block all 
other traffic

SMTP operates by setting up a TCP connection between client and server, 
in which the TCP server port number, which identifies the SMTP server 
application, is 25.  The TCP port number for the SMTP client is a number b/w 
1024 and 65535 that is generated by the SMTP client

![](./images/slide18.png)

#### additional slide notes

 Table shows a simplified example of a ruleset for SMTP traffic. The goal is to
allow inbound and outbound e-mail traffic but to block all other traffic. The rules
are applied top to bottom to each packet.





---
19 Example Legitimate Traffic based on the Ruleset
---

![](./images/slide19.png)


---
20 Problems with the Firewall Rules
---

Rule D allows external traffic any destination port above 1023
Let’s suppose host 192.168.3.4 (external attacker) attempts to open a connection from port 5150 on his end to the web proxy server on port 8080 on machine inside the network (172.16.1.1)
Rule D allows this TCP connection (supposed to be forbidden)


To counter: Add source port field to each row
Rules B and D: source port is 25
Rules A and C: source port is >1023

---
21 Modified Firewall Ruleset
---

![](./images/slide21.png)

---
22 Application Level Gateway
---

![](./images/slide22.png)

What if an organization wants to provide a Telnet service to a restricted set of internal users (as opposed to IP addresses)?
And what if the organization wants such privileged users to authenticate themselves first before being allowed to create Telnet sessions to the outside world?
Application gateways look beyond the IP/TCP/UDP headers and make policy decisions based on application data
An application gateway is an application-specific server through which all application data (inbound and outbound) must pass. 
Multiple application gateways can run on the same host, but each gateway is a separate server with its own processes.

#### additional slide notes

 An application-level gateway, also called an application proxy , acts as a relay of
application-level traffic (Figure 12.1d). The user contacts the gateway using a TCP/
IP application, such as Telnet or FTP, and the gateway asks the user for the name
of the remote host to be accessed. When the user responds and provides a valid
user ID and authentication information, the gateway contacts the application on
the remote host and relays TCP segments containing the application data between
the two endpoints. If the gateway does not implement the proxy code for a specific
application, the service is not supported and cannot be forwarded across the firewall.
Further, the gateway can be configured to support only specific features of an
application that the network administrator considers acceptable while denying all
other features.

Application-level gateways tend to be more secure than packet filters. Rather
than trying to deal with the numerous possible combinations that are to be allowed
and forbidden at the TCP and IP level, the application-level gateway need only
scrutinize a few allowable applications. In addition, it is easy to log and audit all
incoming traffic at the application level.

A prime disadvantage of this type of gateway is the additional processing
overhead on each connection. In effect, there are two spliced connections between
the end users, with the gateway at the splice point, and the gateway must examine
and forward all traffic in both directions.


---
23 Firewall consisting of an application gateway and a filter
---

![](./images/slide23.png)

---
24 Application Level Gateway
---

![](./images/slide24.png)

Also called an application proxy
Acts as a relay of application-level traffic
If the gateway does not implement the proxy code for a specific application, the service is not supported and cannot be forwarded across the firewall
user requests service from proxy 
proxy validates request as legal  (user authentication)
Proxy contacts application on host and relays TCP segment with application data between two end points
can log / audit traffic at application level 
The gateway can be configured to support only specific features of an application that the network administrator considers acceptable while denying all other features
Tend to be more secure than packet filters
Disadvantage: The additional processing overhead on each connection




#### additional slide notes

 An application-level gateway, also called an application proxy , acts as a relay of
application-level traffic (Figure 12.1d). The user contacts the gateway using a TCP/
IP application, such as Telnet or FTP, and the gateway asks the user for the name
of the remote host to be accessed. When the user responds and provides a valid
user ID and authentication information, the gateway contacts the application on
the remote host and relays TCP segments containing the application data between
the two endpoints. If the gateway does not implement the proxy code for a specific
application, the service is not supported and cannot be forwarded across the firewall.
Further, the gateway can be configured to support only specific features of an
application that the network administrator considers acceptable while denying all
other features.

Application-level gateways tend to be more secure than packet filters. Rather
than trying to deal with the numerous possible combinations that are to be allowed
and forbidden at the TCP and IP level, the application-level gateway need only
scrutinize a few allowable applications. In addition, it is easy to log and audit all
incoming traffic at the application level.

A prime disadvantage of this type of gateway is the additional processing
overhead on each connection. In effect, there are two spliced connections between
the end users, with the gateway at the splice point, and the gateway must examine
and forward all traffic in both directions.

---
25 Bastion Host
---

A bastion host is a computer that is fully exposed to attack .
Public side of DMZ
Unprotected by Firewalls
A system identified by the firewall administrator as a critical strong point in the network’s security
Firewalls and routers can also be considered bastion hosts.
Common characteristics:
Executes a secure version of its operating system, making it a hardened system
Only the services that the network administrator considers essential are installed
May require additional authentication before a user is allowed access to the proxy services
Each proxy is configured to support only a subset of the standard application’s command set
Each proxy is configured to allow access only to specific host systems
Each proxy maintains detailed audit information by logging all traffic, each connection, and the duration of each connection
A proxy generally performs no disk access other than  to read its initial configuration file
Each proxy runs as a nonprivileged user in a private and secured directory on the bastion host




#### additional slide notes

 A bastion host is a system identified by the firewall administrator as a critical strong
point in the network’s security. Typically, the bastion host serves as a platform for
an application-level or circuit-level gateway. Common characteristics of a bastion
host are as follows:

•  The bastion host hardware platform executes a secure version of its operating
system, making it a hardened system.

• Only the services that the network administrator considers essential are
installed on the bastion host. These could include proxy applications for DNS,
FTP, HTTP, and SMTP.

• The bastion host may require additional authentication before a user is
allowed access to the proxy services. In addition, each proxy service may
require its own authentication before granting user access.

• Each proxy is configured to support only a subset of the standard application’s
command set.

• Each proxy is configured to allow access only to specific host systems. This
means that the limited command/feature set may be applied only to a subset
of systems on the protected network.

• Each proxy maintains detailed audit information by logging all traffic, each
connection, and the duration of each connection. The audit log is an essential
tool for discovering and terminating intruder attacks.

• Each proxy module is a very small software package specifically designed for
network security. Because of its relative simplicity, it is easier to check such
modules for security flaws. For example, a typical UNIX mail application may
contain over 20,000 lines of code, while a mail proxy may contain fewer than 1000.

• Each proxy is independent of other proxies on the bastion host. If there is a
problem with the operation of any proxy, or if a future vulnerability is discovered,
it can be uninstalled without affecting the operation of the other proxy
applications. Also, if the user population requires support for a new service, the
network administrator can easily install the required proxy on the bastion host.

• A proxy generally performs no disk access other than to read its initial configuration
file. Hence, the portions of the file system containing executable code
can be made read only. This makes it difficult for an intruder to install Trojan
horse sniffers or other dangerous files on the bastion host.

• Each proxy runs as a nonprivileged user in a private and secured directory on
the bastion host.

---
26 Host-Based Firewall
---

A software module used to secure an individual host
Is available in many operating systems or can be provided as an add-on package
Filters and restricts the flow of packets
Common location is a server (or workstation)
Advantages:
Filtering rules can be tailored to the host environment
Protection is provided independent of topology
Used in conjunction with stand-alone firewalls, provides an additional layer of protection



#### additional slide notes

 A host-based firewall is a software module used to secure an individual host. Such
modules are available in many operating systems or can be provided as an add-on
package. Like conventional stand-alone firewalls, host-resident firewalls filter and
restrict the flow of packets. A common location for such firewalls is a server. There
are several advantages to the use of a server-based or workstation-based firewall:

•  Filtering rules can be tailored to the host environment. Specific corporate security
policies for servers can be implemented, with different filters for servers
used for different application.

•  Protection is provided independent of topology. Thus both internal and external
attacks must pass through the firewall.

•  Used in conjunction with stand-alone firewalls, the host-based firewall provides
an additional layer of protection. A new type of server can be added to
the network, with its own firewall, without the necessity of altering the network
firewall configuration.

---
27 Personal Firewall
---

Controls the traffic between a personal computer or workstation on one side and the Internet or enterprise network on the other side
Can be used in the home environment and on corporate intranets
Typically is a software module on the personal computer
Can also be housed in a router that connects all of the home computers to a DSL, cable modem, or other Internet interface
Primary role is to deny unauthorized remote access to the computer
Can also monitor outgoing activity in an attempt to detect and block worms and other malware



#### additional slide notes

 A personal firewall controls the traffic between a personal computer or workstation
on one side and the Internet or enterprise network on the other side. Personal firewall
functionality can be used in the home environment and on corporate intranets.
Typically, the personal firewall is a software module on the personal computer. In
a home environment with multiple computers connected to the Internet, firewall
functionality can also be housed in a router that connects all of the home computers
to a DSL, cable modem, or other Internet interface.

Personal firewalls are typically much less complex than either server-based
firewalls or stand-alone firewalls. The primary role of the personal firewall is to
deny unauthorized remote access to the computer. The firewall can also monitor
outgoing activity in an attempt to detect and block worms and other malware.


---
28 no title 
---

![](./images/slide28.png)



#### additional slide notes

 An example of a personal firewall is the capability built in to the Mac OS X
operating system. This relatively simple utility can be turned on or off. If it is turned
on, any applications, programs, and services unauthorized by the system won’t be
allowed to automatically accept incoming network traffic. Any active sharing services,
such as file or printer sharing, are unaffected. In addition, there are three
options available to the user, as shown in Figure 12.2. “Block all incoming connections”
blocks all sharing services while allowing basic Internet connections. If this option
is unchecked, then the window below that option lists individual programs and
 services. Above the horizontal line in the window, features of OS X itself are listed.
These are features selected by the user in another window. The user can add applications
to a list displayed below the line and designate each as blocked or unblocked.

The firewall also allows the user to enable a feature that allows software
signed by a valid certificate authority to provide services accessed from the network.
Stealth mode hides the Mac on the Internet by dropping unsolicited communication
packets, making it appear as though no Mac is present.

---
29 Firewall Locations and Configurations
---

![](./images/slide29.png)

In general, firewall is positioned to provide a protective barrier
between an external, potentially untrusted source of traffic and an internal network

Security administrator must decide on the location and on the number of firewalls needed

---
30 DMZ Networks Configuration
---

An external firewall is placed at the edge of a local or enterprise network, just inside the boundary router that connects to the Internet or some wide area network (WAN).
One or more internal firewalls protect the bulk of the enterprise network. 
Between these two types of firewalls are one or more networked devices in a region referred to as a DMZ (demilitarized zone) network
A DMZ in a computer network acts as a buffer zone between the Internet, where no controls exist, and the inner, secure network, where an organization has security policies in place. 
Systems that are externally accessible (require external connectivity) but need some protections are usually located on DMZ networks.
corporate Web site, an e-mail server, or a DNS server

---
31 The DMZ and Zones of Trust
---

![](./images/slide31.png)

---
32 no title 
---

![](./images/slide32.png)



#### additional slide notes

Figure 12.3 suggests the most common distinction, that between an internal and an
external firewall. An external firewall is placed at the edge of a local or enterprise network,
just inside the boundary router that connects to the Internet or some wide area
network (WAN). One or more internal firewalls protect the bulk of the enterprise
network. Between these two types of firewalls are one or more networked devices in a
region referred to as a DMZ (demilitarized zone) network. Systems that are externally
accessible but need some protections are usually located on DMZ networks.
Typically, the systems in the DMZ require or foster external connectivity, such as a corporate
Web site, an e-mail server, or a DNS (domain name system) server.

The external firewall provides a measure of access control and protection for
the DMZ systems consistent with their need for external connectivity. The external
firewall also provides a basic level of protection for the remainder of the enterprise
network. In this type of configuration, internal firewalls serve three purposes:

The internal firewall adds more stringent filtering capability, compared to t

2.  The internal firewall provides two-way protection with respect to the DMZ.
First, the internal firewall protects the remainder of the network from
attacks launched from DMZ systems. Such attacks might originate from worms,
rootkits, bots, or other malware lodged in a DMZ system. Second, an internal
firewall can protect the DMZ systems from attack from the internal
protected network.

3.  Multiple internal firewalls can be used to protect portions of the internal
network from each other. For example, firewalls can be configured so that
internal servers are protected from internal workstations and vice versa.
A common practice is to place the DMZ on a different network interface on
the external firewall from that used to access the internal networks.

---
33 DMZ Networks Configuration
---

Internal firewall adds more stringent filtering capability
protect enterprise servers and workstations from external attack
Internal firewall provides two-way protection with respect to the DMZ
Multiple internal firewalls can be used to protect portions of the internal network from each other.
Example: firewalls can be configured so that internal servers are protected from internal workstations and vice versa
Common practice is to place the DMZ on a different network interface on the external firewall from that used to access the internal networks

---
34 Distributed Firewalls Configuration
---

A distributed firewall configuration involves stand-alone firewall devices plus host based firewalls working together under a central administrative control
configure host resident firewalls on hundreds of servers and workstations as well as configure personal firewalls on local and remote user systems
Web servers that need less protection because they have less critical information on them could be placed in an external DMZ, outside the external firewall.
What protection is needed is provided by host-based firewalls on these servers.


---
35 no title 
---

![](./images/slide35.png)

#### additional slide notes

 A distributed firewall configuration involves stand-alone firewall devices plus
host-based firewalls working together under a central administrative control.
Figure 12.5 suggests a distributed firewall configuration. Administrators can configure
host-resident firewalls on hundreds of servers and workstations as well as
configure personal firewalls on local and remote user systems. Tools let the network
administrator set policies and monitor security across the entire network. These
firewalls protect against internal attacks and provide protection tailored to specific
machines and applications. Stand-alone firewalls provide global protection, including
internal firewalls and an external firewall, as discussed previously.

With distributed firewalls, it may make sense to establish both an internal
and an external DMZ. Web servers that need less protection because they have
less critical information on them could be placed in an external DMZ, outside the
external firewall. What protection is needed is provided by host-based firewalls on
these servers.

An important aspect of a distributed firewall configuration is security
monitoring. Such monitoring typically includes log aggregation and analysis, firewall
statistics, and fine-grained remote monitoring of individual hosts if needed.


---
36 Problem #1
---

Table shows packet filter firewall ruleset for an imaginary network of IP address that range from 192.168.1.0 to 192.168.1.254. Describe the effect of each rule (Firewall address: 192.168.1.1)

![](./images/slide36.png)


---
37 Problem #2
---

1. Describe the effect of each rule.

![](./images/slide36.png)


---
38 Problem #2 (Contd.)
---

2. Your host in this example has IP address 172.16.1.1. Someone tries to send e-mail from a remote host with IP address 192.168.3.4. If successful, this generates an SMTP dialogue between the remote user and the SMTP server on your host consisting of SMTP commands and mail. Additionally, assume that a user on your host tries to send e-mail to the SMTP server on the remote system. Four typical packets for this scenario are as shown below:
  - Indicate which packets are permitted or denied and which rule is used in each case.

![](./images/slide38.png)


---
39 Problem #2 (Contd.)
---

3. Someone from the outside world (10.1.2.3) attempts to open a connection from port 5150 on a remote host to the Web proxy server on port 8080 on one of your local hosts (172.16.3.4), in order to carry out an attack. Typical packets are as follows: 

![](./images/slide39.png)

Will the attack succeed? Give details.


---
40 Problem #3 
---
#### Figure1: Multiple DMZ with split DNS servers

![](./images/slide40.png)

