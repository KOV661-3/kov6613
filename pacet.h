#ifndef PACET_H
#define PACET_H
#include "QList"
#include "QByteArray"
#include "QString"
struct pcaprec_hdr_s 
{
        char* st=new char[16];     /* timestamp seconds */
       qint32 caplen;     /* number of octets of packet saved in file */
       qint32 len;        /* actual length of packet */
};
struct pcap_hdr_s 
{
        qint32 magic_number;   /* magic number */
        qint16 version_major;  /* major version number */
        qint16 version_minor;  /* minor version number */
        qint32 thiszone;       /* GMT to local correction */
        qint32 sigfigs;        /* accuracy of timestamps */
        qint32 snaplen;        /* max length of captured packets, in octets */
        qint32 network;        /* data link type */
};

class Packet
{
public:
    Packet();
    ~Packet();
    Packet(const Packet &p);
    void operator=(const Packet &p);
    void operator==(const Packet &p);
    bool operator>(const Packet &p);
    bool operator<(const Packet &p);
    pcaprec_hdr_s * getheders()
    {
        return &heders;
    }
    QByteArray* getdata()
    {
        return &data;
    }
    void setData(QByteArray temp)
    {
     data=temp;
    }
    void setHeders(pcaprec_hdr_s temp)
    {
        heders=temp;
    }
    qint32* getLen()
    {
        return &heders.len;
    }
    qint32* getCaplen()
    {
        return &heders.caplen;
    }
    char* getTS()
    {
        return heders.st;
    }
    void setLen(qint32 temp)
    {
        heders.len=temp;
    }
    void setCaplen(qint32 temp)
    {
        heders.caplen=temp;
    }
    void setTS(char temp[16])
    {
        for(int i=0;i<16;i++)
        {
        heders.st[i]=temp[i];
        }
    }
private:
    pcaprec_hdr_s heders;
    QByteArray data;

};

class FilePacets
{
public:
//   FilePacets();
//   ~FilePacets();
   pcap_hdr_s filehd;
   QList <Packet> packets;
   
private:

};
#endif // PACET_H
