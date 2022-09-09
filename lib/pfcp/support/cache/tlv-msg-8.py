ies = []
ies.append({ "ie_type" : "Node ID", "ie_value" : "Node ID", "presence" : "M", "tlv_more" : "0", "comment" : "This IE shall contain the unique identifier of the sending Node."})
ies.append({ "ie_type" : "Cause", "ie_value" : "Cause", "presence" : "M", "tlv_more" : "0", "comment" : "This IE shall indicate the acceptance or the rejection of the corresponding request message."})
ies.append({ "ie_type" : "UP Function Features", "ie_value" : "UP Function Features", "presence" : "O", "tlv_more" : "0", "comment" : "If present, this IE shall indicate the supported Features when the sending node is the UP function."})
ies.append({ "ie_type" : "CP Function Features", "ie_value" : "CP Function Features", "presence" : "O", "tlv_more" : "0", "comment" : "If present, this IE shall indicate the supported Features when the sending node is the CP function."})
ies.append({ "ie_type" : "UE IP Address Usage Information", "ie_value" : "UE IP Address Usage Information", "presence" : "O", "tlv_more" : "0", "comment" : "The UP function may include if both UP and CP functions support the UE IP Address Usage Reporting feature.See Table 7.4.4.3.1-1Several IEs with the same type may be present to represent UE IP Address Usage Information for different UE IP Address Pools and/or Network Instances.See clause5.21.3"})
msg_list[key]["ies"] = ies
