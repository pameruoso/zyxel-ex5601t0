extern tr98Parameter_t para_Ipv6Ppp[];
extern tr98Parameter_t para_Ipv6PppIntf[];
extern tr98Parameter_t para_Ipv6PppIpv6cp[];
extern tr98Parameter_t para_Ipv6Router[];
extern tr98Parameter_t para_Ipv6RouterIpv6Fwd[];
extern tr98Parameter_t para_Ipv6RouteInfoIntf[];
extern tr98Parameter_t para_Ipv6ND[];
extern tr98Parameter_t para_Ipv6NDIntf[];
extern tr98Parameter_t para_Ipv6Ip[];
extern tr98Parameter_t para_Ipv6IpIntf[];
extern tr98Parameter_t para_Ipv6IpIntfIpv6Addr[];
extern tr98Parameter_t para_Ipv6IpIntfIpv6Prefix[];
extern tr98Parameter_t para_Ipv6RouterAdver[];
extern tr98Parameter_t para_Ipv6RouterAdverIntf[];
extern tr98Parameter_t para_Ipv6RouterAdverOpt[];
extern tr98Parameter_t para_HostsHost[];
extern tr98Parameter_t para_HostsHostIpv6Addr[];
extern tr98Parameter_t para_Ipv6DnsSvr[];
extern tr98Parameter_t para_Ipv6DnsRly[];
extern tr98Parameter_t para_Ipv6DnsRlyFwd[];
extern tr98Parameter_t para_Ipv6Dhcpv6[];
extern tr98Parameter_t para_Ipv6Dhcpv6Client[];
extern tr98Parameter_t para_Ipv6Dhcpv6CntSrvAddr[];
extern tr98Parameter_t para_Ipv6Dhcpv6CntSentAddr[];
extern tr98Parameter_t para_Ipv6Dhcpv6CntRrvAddr[];
extern tr98Parameter_t para_Ipv6Dhcpv6Srv[];
extern tr98Parameter_t para_Ipv6Dhcpv6SrvPool[];
extern tr98Parameter_t para_Ipv6Dhcpv6SrvCnt[];
extern tr98Parameter_t para_Ipv6Dhcpv6SrvCntV6Addr[];
extern tr98Parameter_t para_Ipv6Dhcpv6SrvCntV6Prefix[];
extern tr98Parameter_t para_Ipv6Dhcpv6SrvCntOpt[];
extern tr98Parameter_t para_Ipv6Dhcpv6SrvOpt[];

extern zcfgRet_t zyIpv6PppObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6PppIntfObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6PppIntfObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6PppIntfObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6PppIntfObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6PppIpv6cpObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6RouterObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6RouterIpv6FwdObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6RouterIpv6FwdObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6RouterIpv6FwdObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6RouterIpv6FwdObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6RouteInfoIntfObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6NDObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6NDObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6NDIntfObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6NDIntfObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6IpObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6IpObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6IpIntfObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6IpIntfObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6IpIntfObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6IpIntfObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6IpIntfIpv6AddrObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6IpIntfIpv6AddrObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6IpIntfIpv6AddrObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6IpIntfIpv6AddrObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6IpIntfIpv6PrefixObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6IpIntfIpv6PrefixObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6IpIntfIpv6PrefixObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6IpIntfIpv6PrefixObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6RouterAdverObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6RouterAdverObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6RouterAdverIntfObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6RouterAdverIntfObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6RouterAdverOptObjGet(char *, int, struct json_object **, bool);
extern zcfgRet_t zyIpv6RouterAdverOptObjSet(char *, int, struct json_object *, struct json_object *);
extern zcfgRet_t zyIpv6RouterAdverOptObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6RouterAdverOptObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6HostsHostObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6HostsHostObjNotify(char *tr98ObjName, char *tr181ParamName, struct json_object *tr181ParamVal, int handler, struct json_object **tr98NotifyInfo);
extern int zyIpv6HostsHostObjAttrGet(char *tr98FullPathName, int handler, char *paramName);
extern zcfgRet_t zyIpv6HostsHostObjAttrSet(char *tr98FullPathName, int handler, char *paramName, int newNotify, struct json_object *multiAttrJobj);
extern zcfgRet_t zyIpv6HostsHostIpv6AddrObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6DnsSvrObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6DnsSvrObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6DnsSvrObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6DnsSvrObjDel(char *tr98FullPathName);

#ifdef CONFIG_ZCFG_BE_MODULE_DNS_RELAY
extern zcfgRet_t zyIpv6DnsRlyObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6DnsRlyObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6DnsRlyFwdObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6DnsRlyFwdObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6DnsRlyFwdObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6DnsRlyFwdObjDel(char *tr98FullPathName);
#endif

extern zcfgRet_t zyIpv6Dhcpv6ObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6ClientObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6ClientObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6Dhcpv6CntSrvObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6CntSentObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6CntSentObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6Dhcpv6CntSentObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6Dhcpv6CntSentObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6Dhcpv6CntRrvObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6Dhcpv6SrvPoolObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvPoolObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6Dhcpv6SrvPoolObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6Dhcpv6SrvPoolObjDel(char *tr98FullPathName);
extern zcfgRet_t zyIpv6Dhcpv6SrvCntObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvCntObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6Dhcpv6SrvCntV6AddrObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvCntV6PrefixObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvCntOptObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvOptObjGet(char *tr98FullPathName, int handler, struct json_object **tr98Jobj, bool updateFlag);
extern zcfgRet_t zyIpv6Dhcpv6SrvOptObjSet(char *tr98FullPathName, int handler, struct json_object *tr98Jobj, struct json_object *multiJobj, char *paramfault);
extern zcfgRet_t zyIpv6Dhcpv6SrvOptObjAdd(char *tr98FullPathName, int *idx);
extern zcfgRet_t zyIpv6Dhcpv6SrvOptObjDel(char *tr98FullPathName);

