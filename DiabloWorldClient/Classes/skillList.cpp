
#include "skillList.h"
//˫ǹ֮�� 2
//˫��֮�� 2
//˫�֮�� 2
//˫��֮�� 2
//˫��֮�� 2
//�������� 2
//���˼� 2
//������� 2---
const char * skillList::skills(int skillnum){
    
    switch (skillnum) {
        case 100001:
            //��������
            skill="yszs";
            break;
        case 100002:
            //�����˺�
            skill="dlrh";
            break;
        case 100003:
            //̫��������
            skill="tjbgz";
            break;
        case 100004:
            //������
            skill="myz";
            break;
        case 100005:
            //���Ѽ�
            skill="xsj";
            break;
        case 100006:
            //͵Ϯ
            skill="tx";
            break;
        case 100007:
            //�칫ŭ
            skill="tgn";
            break;
        case 100008:
            //թ��
            skill="zhxj";
            break;
        case 100010:
            skill="ln";
            break;
            //        case 50008:
            //            //Ȱ��
            //            break;
        case 100011:
            //˫ǹ֮�� 2
            skill="sqzs";
            break;
        case 100012:
            //˫��֮�� 2
            skill="slzs";
            break;
        case 100013:
            //˫�֮�� 2
            skill="sjzs";
            break;
        case 100014:
            //˫��֮�� 2
            skill="sfzs";
            break;
        case 100015:
            //˫��֮�� 2
            skill="srzs";
            break;
        case 100016:
            //�ҵ�ն
            skill="ldz";
            break;
        case 100017:
            //�������� 2
            skill="sdjx";
            break;
        case 100018:
            //а����
            skill="xfz";
            break;
        case 100019:
            //���޶�
            skill="kszd";
            break;
        case 100020:
            //������
            skill="tgn";
            break;
        case 100022:
            //���˼� 2
            skill="mrj";
            break;
        case 100024:
            //ʨ�Ӻ�
            skill="szh";
            break;
        case 100025:
            //Ұ����ԭ
            skill="yhly";
            break;
        case 100026:
            //������� 2
            skill="wlbf";
            break;
        case 100027:
            
            //��ȸ��
            skill="hqz";
            break;
        case 100028:
            //ˮ����ǧ��
            skill="sjsql";
            break;
        case 100029:
            //�ƾ���
            skill="pjj";
            break;
            //        case 210101:
            //            //թ����
            //            skill="sq";
            //            break;
        case 100030:
            //������
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
            //˫ǹ֮��
            break;
        case 100012:
            //˫��֮��
            break;
        case 100013:
            //˫�֮��
            break;
        case 100014:
            //˫��֮��
            break;
        case 100015:
            //˫��֮��
            break;
        case 100031:
            //������ʯ
            break;
        case 100022:
            //���˼�
            break;
        case 100017:
            //��������
            break;
        case 100026:
            //�������
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
            //��������
            skillnumber=12;
            break;
        case 100002:
            //�����˺�
            skillnumber=6;
            break;
        case 100003:
            //̫��������
            skillnumber=12;
            break;
        case 100004:
            //������
            skillnumber=10;
            break;
        case 100005:
            //���Ѽ�
            skillnumber=10;
            break;
        case 100006:
            //͵Ϯ
            skillnumber=8;//12
            break;
        case 100007:
            //�칫ŭ
            skillnumber=6;//9
            break;
            //        case 50007:
            //            //թ��
            //            skillnumber=9;
            //            break;
            //        case 50008:
            //            //Ȱ��
            //            break;
        case 100011:
            //˫ǹ֮�� 2
            skillnumber=9;
            break;
        case 100012:
            //˫��֮�� 2
            skillnumber=9;
            break;
        case 100013:
            //˫�֮�� 2
            skillnumber=9;
            break;
        case 100014:
            //˫��֮�� 2
            skillnumber=9;
            break;
        case 100015:
            //˫��֮�� 2
            skillnumber=9;
            break;
        case 100016:
            //�ҵ�ն
            skillnumber=5;
            break;
        case 100017:
            //�������� 2
            skillnumber=9;
            break;
        case 100018:
            //а����
            skillnumber=6;
            break;
        case 100019:
            //���޶�
            skillnumber=6;
            break;
        case 100020:
            //������
            skillnumber=6;
            break;
        case 100022:
            //���˼� 2
            skillnumber=9;
            break;
        case 100024:
            //ʨ�Ӻ�
            skillnumber=6;
            break;
        case 100025:
            //Ұ����ԭ
            skillnumber=6;
            break;
        case 100026:
            //������� 2
            skillnumber=9;
            break;
        case 100027:
            
            //��ȸ��
            skillnumber=6;
            break;
        case 100028:
            //ˮ����ǧ��
            skillnumber=6;
            break;
        case 100029:
            //�ƾ���
            skillnumber=5;
            break;
            //        case 210101:
            //            //թ����
            //            skill="sq";
            //            break;
        case 100031:
            //������
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
            //��������
            skill="name_yszs.png";
            break;
        case 100002:
            //�����˺�
            skill="name_dlrh.png";
            break;
        case 100003:
            //̫��������
            skill="name_tjbg.png";
            break;
        case 100004:
            //������
            skill="name_myz.png";
            break;
        case 100005:
            //���Ѽ�
            skill="name_zxj.png";
            break;
        case 100006:
            //͵Ϯ
            skill="name_tx.png";
            break;
        case 100007:
            //�칫ŭ
            skill="name_tgn.png";
            break;
        case 50007:
            //թ��
            skill="name_zhxj.png";
            break;
            //        case 50008:
            //            //Ȱ��
            //            break;
        case 100011:
            //˫ǹ֮�� 2
            skill="name_sqzs.png";
            break;
        case 100012:
            //˫��֮�� 2
            skill="name_slzs.png";
            break;
        case 100013:
            //˫�֮�� 2
            skill="name_sjzs.png";
            break;
        case 100014:
            //˫��֮�� 2
            skill="name_sfzs.png";
            break;
        case 100015:
            //˫��֮�� 2
            skill="name_srzs.png";
            break;
        case 100016:
            //�ҵ�ն
            skill="name_ldz.png";
            break;
        case 100017:
            //�������� 2
            skill="name_sdjx.png";
            break;
        case 100018:
            //а����
            skill="name_xfz.png";
            break;
        case 100019:
            //���޶�
            skill="name_kszd.png";
            break;
        case 100020:
            //������
            skill="name_tgn.png";
            break;
        case 100022:
            //���˼� 2
            skill="name_mrj.png";
            break;
        case 100024:
            //ʨ�Ӻ�
            skill="name_szh.png";
            break;
        case 100025:
            //Ұ����ԭ
            skill="name_yhly.png";
            break;
        case 100026:
            //������� 2
            skill="name_wlbf.png";
            break;
        case 100027:
            
            //��ȸ��
            skill="name_hqz.png";
            break;
        case 100028:
            //ˮ����ǧ��
            skill="name_sjsql.png";
            break;
        case 100029:
            //�ƾ���
            skill="name_pjj.png";
            break;
            //        case 210101:
            //            //թ����
            //            skill="sq";
            //            break;
        case 100031:
            //������
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