

#include <iostream>
#include <thread>
#include <tins/tins.h>

int main() {

    Tins::NetworkInterface iface = Tins::NetworkInterface::default_interface();

    Tins::RawPDU *message = new Tins::RawPDU("Kanon");
    Tins::TCP *tcp = new Tins::TCP();
    Tins::IP *ip = new Tins::IP();
    Tins::SNAP *snap = new Tins::SNAP();
    Tins::Dot11Data *dot11 = new Tins::Dot11Data();

    dot11->inner_pdu(snap);
    snap->inner_pdu(ip);
    ip->inner_pdu(tcp);
    tcp->inner_pdu(message);

    Tins::PacketSender sender;

    dot11->send(sender, iface);
    
    return 0;
}


