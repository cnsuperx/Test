
#include "skillList.h"
//Ë«Ç¹Ö®ÉË 2
//Ë«Á­Ö®ÉË 2
//Ë«êªÖ®ÉË 2
//Ë«¸«Ö®ÉË 2
//Ë«ÈĞÖ®ÉË 2
//Éù¶«»÷Î÷ 2
//ÃÀÈË¼Æ 2
//ÍòÀï±ù·â 2---
const char * skillList::skills(int skillnum){
    
    switch (skillnum) {
        case 100001:
            //ÓöÉñÖïÉñ
            skill="yszs";
            break;
        case 100002:
            //µØÀûÈËºÍ
            skill="dlrh";
            break;
        case 100003:
            //Ì«¼«°ËØÔÕó
            skill="tjbgz";
            break;
        case 100004:
            //ÃÔÑÌÕó
            skill="myz";
            break;
        case 100005:
            //×íĞÑ¼¼
            skill="xsj";
            break;
        case 100006:
            //ÍµÏ®
            skill="tx";
            break;
        case 100007:
            //Ìì¹«Å­
            skill="tgn";
            break;
        case 100008:
            //Õ©½µ
            skill="zhxj";
            break;
        case 100010:
            skill="ln";
            break;
            //        case 50008:
            //            //È°½µ
            //            break;
        case 100011:
            //Ë«Ç¹Ö®ÉË 2
            skill="sqzs";
            break;
        case 100012:
            //Ë«Á­Ö®ÉË 2
            skill="slzs";
            break;
        case 100013:
            //Ë«êªÖ®ÉË 2
            skill="sjzs";
            break;
        case 100014:
            //Ë«¸«Ö®ÉË 2
            skill="sfzs";
            break;
        case 100015:
            //Ë«ÈĞÖ®ÉË 2
            skill="srzs";
            break;
        case 100016:
            //ÂÒµ¶Õ¶
            skill="ldz";
            break;
        case 100017:
            //Éù¶«»÷Î÷ 2
            skill="sdjx";
            break;
        case 100018:
            //Ğ°·çÕó
            skill="xfz";
            break;
        case 100019:
            //À§ÊŞ¶·
            skill="kszd";
            break;
        case 100020:
            //ÌìÀ×Õó
            skill="tgn";
            break;
        case 100022:
            //ÃÀÈË¼Æ 2
            skill="mrj";
            break;
        case 100024:
            //Ê¨×Óºğ
            skill="szh";
            break;
        case 100025:
            //Ò°»ğÁÇÔ­
            skill="yhly";
            break;
        case 100026:
            //ÍòÀï±ù·â 2
            skill="wlbf";
            break;
        case 100027:
            
            //»ÆÈ¸Õó
            skill="hqz";
            break;
        case 100028:
            //Ë®»÷ÈıÇ§Àï
            skill="sjsql";
            break;
        case 100029:
            //ÆÆ¾ü¼Æ
            skill="pjj";
            break;
            //        case 210101:
            //            //Õ©½µ¼Æ
            //            skill="sq";
            //            break;
        case 100030:
            //Çü±ø¼Æ
            skill="qbj";
            break;
        case 100031:
            skill="ggjs";
            break;
        default:
            skill="tx";
            break;
    }
    return skill;
}
const char * skillList::sqskills(int skillnum){
    switch (skillnum) {
        case 100011:
            //Ë«Ç¹Ö®ÉË
            break;
        case 100012:
            //Ë«Á®Ö®ÉË
            break;
        case 100013:
            //Ë«êªÖ®ÉË
            break;
        case 100014:
            //Ë«¸«Ö®ÉË
            break;
        case 100015:
            //Ë«ÈĞÖ®ÉË
            break;
        case 100031:
            //¹ö¹ö¾ŞÊ¯
            break;
        case 100022:
            //ÃÀÈË¼Æ
            break;
        case 100017:
            //Éù¶«»÷Î÷
            break;
        case 100026:
            //ÍòÀï±ù·â
            break;
        default:
            qsskill="";
            // this->skillnums(skillnum);
            break;
    }
    return NULL;
}
const char * skillList::releaseName(int skillrelease){
    const char * names;
    switch (skillrelease) {
        case 61:
            names="you";
            break;
        case 62:
            names="qs_tjbgz";
            break;
        case 64:
            names="mou";
            break;
        case 65:
            names="zhou";
            break;
        case 66:
            names="qs_sqzs";
            break;
        case 67:
            names="qs_slzs";
            break;
        case 68:
            names="qs_sjzs";
            break;
        case 69:
            names="qs_sfzs";
            break;
        case 70:
            names="qs_srzs";
            break;
        default:
            
            break;
    }
    return names;
}
int skillList::skillnums(int skillnum){
    switch (skillnum) {
        case 100001:
            //ÓöÉñÖïÉñ
            skillnumber=12;
            break;
        case 100002:
            //µØÀûÈËºÍ
            skillnumber=6;
            break;
        case 100003:
            //Ì«¼«°ËØÔÕó
            skillnumber=12;
            break;
        case 100004:
            //ÃÔÑÌÕó
            skillnumber=10;
            break;
        case 100005:
            //×íĞÑ¼¼
            skillnumber=10;
            break;
        case 100006:
            //ÍµÏ®
            skillnumber=8;//12
            break;
        case 100007:
            //Ìì¹«Å­
            skillnumber=6;//9
            break;
            //        case 50007:
            //            //Õ©½µ
            //            skillnumber=9;
            //            break;
            //        case 50008:
            //            //È°½µ
            //            break;
        case 100011:
            //Ë«Ç¹Ö®ÉË 2
            skillnumber=9;
            break;
        case 100012:
            //Ë«Á­Ö®ÉË 2
            skillnumber=9;
            break;
        case 100013:
            //Ë«êªÖ®ÉË 2
            skillnumber=9;
            break;
        case 100014:
            //Ë«¸«Ö®ÉË 2
            skillnumber=9;
            break;
        case 100015:
            //Ë«ÈĞÖ®ÉË 2
            skillnumber=9;
            break;
        case 100016:
            //ÂÒµ¶Õ¶
            skillnumber=5;
            break;
        case 100017:
            //Éù¶«»÷Î÷ 2
            skillnumber=9;
            break;
        case 100018:
            //Ğ°·çÕó
            skillnumber=6;
            break;
        case 100019:
            //À§ÊŞ¶·
            skillnumber=6;
            break;
        case 100020:
            //ÌìÀ×Õó
            skillnumber=6;
            break;
        case 100022:
            //ÃÀÈË¼Æ 2
            skillnumber=9;
            break;
        case 100024:
            //Ê¨×Óºğ
            skillnumber=6;
            break;
        case 100025:
            //Ò°»ğÁÇÔ­
            skillnumber=6;
            break;
        case 100026:
            //ÍòÀï±ù·â 2
            skillnumber=9;
            break;
        case 100027:
            
            //»ÆÈ¸Õó
            skillnumber=6;
            break;
        case 100028:
            //Ë®»÷ÈıÇ§Àï
            skillnumber=6;
            break;
        case 100029:
            //ÆÆ¾ü¼Æ
            skillnumber=5;
            break;
            //        case 210101:
            //            //Õ©½µ¼Æ
            //            skill="sq";
            //            break;
        case 100031:
            //Çü±ø¼Æ
            skillnumber=4;
            break;
        default:
            skill="0";
            break;
    }
    return skillnumber;
}


const char * skillList::skillname(int skillnum){
    switch (skillnum) {
        case 100001:
            //ÓöÉñÖïÉñ
            skill="name_yszs.png";
            break;
        case 100002:
            //µØÀûÈËºÍ
            skill="name_dlrh.png";
            break;
        case 100003:
            //Ì«¼«°ËØÔÕó
            skill="name_tjbg.png";
            break;
        case 100004:
            //ÃÔÑÌÕó
            skill="name_myz.png";
            break;
        case 100005:
            //×íĞÑ¼¼
            skill="name_zxj.png";
            break;
        case 100006:
            //ÍµÏ®
            skill="name_tx.png";
            break;
        case 100007:
            //Ìì¹«Å­
            skill="name_tgn.png";
            break;
        case 50007:
            //Õ©½µ
            skill="name_zhxj.png";
            break;
            //        case 50008:
            //            //È°½µ
            //            break;
        case 100011:
            //Ë«Ç¹Ö®ÉË 2
            skill="name_sqzs.png";
            break;
        case 100012:
            //Ë«Á­Ö®ÉË 2
            skill="name_slzs.png";
            break;
        case 100013:
            //Ë«êªÖ®ÉË 2
            skill="name_sjzs.png";
            break;
        case 100014:
            //Ë«¸«Ö®ÉË 2
            skill="name_sfzs.png";
            break;
        case 100015:
            //Ë«ÈĞÖ®ÉË 2
            skill="name_srzs.png";
            break;
        case 100016:
            //ÂÒµ¶Õ¶
            skill="name_ldz.png";
            break;
        case 100017:
            //Éù¶«»÷Î÷ 2
            skill="name_sdjx.png";
            break;
        case 100018:
            //Ğ°·çÕó
            skill="name_xfz.png";
            break;
        case 100019:
            //À§ÊŞ¶·
            skill="name_kszd.png";
            break;
        case 100020:
            //ÌìÀ×Õó
            skill="name_tgn.png";
            break;
        case 100022:
            //ÃÀÈË¼Æ 2
            skill="name_mrj.png";
            break;
        case 100024:
            //Ê¨×Óºğ
            skill="name_szh.png";
            break;
        case 100025:
            //Ò°»ğÁÇÔ­
            skill="name_yhly.png";
            break;
        case 100026:
            //ÍòÀï±ù·â 2
            skill="name_wlbf.png";
            break;
        case 100027:
            
            //»ÆÈ¸Õó
            skill="name_hqz.png";
            break;
        case 100028:
            //Ë®»÷ÈıÇ§Àï
            skill="name_sjsql.png";
            break;
        case 100029:
            //ÆÆ¾ü¼Æ
            skill="name_pjj.png";
            break;
            //        case 210101:
            //            //Õ©½µ¼Æ
            //            skill="sq";
            //            break;
        case 100031:
            //Çü±ø¼Æ
            skill="name_qbj.png";
            break;
        default:
            skill="name_tx.png";
            break;
    }
    return skill;
}
const char * skillList::throwTX(int skillid){
    const char * skillname;
    switch (skillid) {
        case 50:
            skillname="tx";
            break;
        case 51:
            skillname="tgn";
            break;
        case 52:
            skillname="zhxj";
            break;
        case 53:
            skillname="sqzs";
            break;
        case 54:
            skillname="slzs";
            break;
        case 55:
            skillname="sjzs";
            break;
        case 56:
            skillname="sfzs";
            break;
        case 57:
            skillname="srzs";
            break;
        case 58:
            skillname="sdjx";
            break;
        case 59:
            skillname="xfz";
            break;
        case 60:
            skillname="mrj";
            break;
        case 61:
            skillname="szh";
            break;
        case  62:
            skillname="wlbf";
            break;
        case 63:
            skillname="hqz";
            break;
        case 64:
            skillname="sjsql";
            break;
        case 65:
            skillname="pjj";
            break;
        case 66:
            skillname="qbj";
            break;
        default:
            skillname="";
            break;
    }
	return skillname;
}