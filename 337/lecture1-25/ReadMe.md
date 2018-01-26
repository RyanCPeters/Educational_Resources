Lecture 6: Network Recconaissance
===

Lecture by: [Dr. Geethapriya Thamilarasu](http://faculty.washington.edu/geetha/)
---





---

Reconnaissance
---
- active recon -- actively interact with tharget
  + target may record your ip address and log activity
  + higher likelihood of being detected
- passive recon -- makes use of vaset amount of information available on the web
  + no interaction with target
  + target has o way of knowing, recording or ogging your activity

***NOTE***: do not attempt active recon without permission!!!


---

Real Example
---

```
	Hi I'm looking for rare stamps (for sale or trade) from the 50's.
	please contact me at:
	mail: blah@blah.com
	cell: 072-776223
```

- Pentester registered a no-ip domain and collected tamp images
- missed 


---

Google Hacking
---

- Huge amounts of data leaking into the web and, even worse, leaking into the google cache
- Introduced by Johnny Long
- General Idea: use special search operators in google in order to narrow down our search reults and find very 
  + missed


---

Google Hacking Example:  Searching within a domain
---

- site: operator restricts the results to websites in a given domain
  - site:qchem.com
  - all the results are ... missed

- filetype:pdf site:qchem.com
  - search will hsow us all the pdf files in qchem.com site
  - Note: Old example
    - company has now removed the pdf ;)

- In Feb 2006, a phpBB (popular open source forum software) vulnerability was found
    - Google was quickly used in order to id all the web sites running phpBB, and those sites were targeted for attack
    - "Powerd by phpBB" inurl:"index.php?s" OR inurl:"index.php?html"
    - missed

---

Example: email harvesting
---
<!-- 2 x images for email harversting -->
![](./images/)



---

Recon Tools
---

- `theHarvester -d  [url] -l 20 -b [serarch engine name]`
    + the `-l 20` is the limit number of results to show
- missed


---

theHarvester demo image
---
<!-- 1 x image -->
![](./images/)


---

Netcraft
---

- Netcraft
    + netcraft.com
    + an online tool for getting information on a target prior to launching an attak.


---

Whois Reconnaissance
--- 

- simple but effective means for collecting additional info on target
- name for a tcp service, a tool and a database
- whois databases contain nameserver, registrar, and in some cases full contact info about a domain name.
- each registrar must maintain a whois databse containing all contact info for the doains they 'host'.
- allows to access specific information about the target including the ip addresses or host names of the companines DNS servers... missed
- missed

---


Whois Recon contd.
---

- missed 


---

DNS REcon.
---

- Extracting info from DNS
    + DNS offers a variety of information about public and sometimes private organization servers, such as IP addresses, server names and serer functions.
    + DNS servers -- excellenttarget for hackers and pen testers
    + focus on DNS servers that belong to the target
        * can get access to full listing of internal IP addresses and host names that belong to target
        * often misconfigured and unpatched

---

DNS Recon
---

- Interacting with a DNS server
- Can interact with DNS servers using various DNS clients
    -   host
    -   nslookup
    -   missed
    -   missed 

---

dns RECON TOOLS
---

- hOST missed
    + 
- nslookup
    + nslookup is a useful command to find the info about dns sever including ip addresses, MX records etc.
    + older and limited
    + ![](./images/) <!-- command output image for nslookup -->
    + NS queries: idntify all the DNSservers authoritive for a domain
        * ![](./images/) <!--  command prompt output image -->
- Dig
    + When a DNS zone transffer is allowed, you shoul get a complete listing of all DNS entries that have been made in the DNS server for this domain.
    + if the DNS server doesn't allow it, you will get an error indicating that the zone transfer didn't work.
    + `#dig @target_ip`
    + example of zone transfer using dig:
    + `#dig @` missed 
- look into web address `exploit-db.com/google-hacking-database`
- Fierce

|                                                                      | Does search work in: |
| Operator | Purpose | Mixes with Other Operators | Can be used alone? | Web | Images | Groups | News |
|:-------- |:------- |:-------------------------- |:------------------ |:---:|:------:|:------:|:----:|




---

WireShark
---

in class activity: following step instructions on wireshark pdf downloaded from 337 course site's `pages` page... :P


---

sdf
--- 