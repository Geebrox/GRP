#define SERVER_NAME "Geebrox" //�������� �������
#define SERVER_MODE "Role Play" //��� �������
#define SERVER_LANGUAGE "Russian" //���� �������
#define SERVER_WEBSITE "null" //����/����� �������


#define COLOR_TITLE "{3498db}" //���� ������������ ��� ���������
#define COLOR_TEXT "{ecf0f1}" //���� ������������ ��� ������� ����������
#define COLOR_NOTE "{e67e22}" //���� ������������ ��� ������������� ������� ����
#define COLOR_ERROR "{c0392b}" //���� ������������ ��� ������
#define COLOR_SUCCESS "{2ecc71}" //���� ������������ ��� ������

#define HEX_COLOR_TITLE 0x3498dbFF
#define HEX_COLOR_TEXT 0xecf0f1FF
#define HEX_COLOR_NOTE 0xe67e22FF
#define HEX_COLOR_ERROR 0xc0392bFF
#define HEX_COLOR_SUCCESS 0x2ecc71FF


#define MAX_HASH_SIZE 65

//��������� �������
enum
{
	CMD_RTN_INVALID_COMMAND = -1,
	CMD_RTN_SUCCESS,
	CMD_RTN_ERROR,
	CMD_RTN_NO_PERMISSIONS,
	CMD_RTN_INVALID_PLAYER_ID
}