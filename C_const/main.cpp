/*

# Date     2020/10/06
# Creator  Alvin
# Theme    const �ؼ���

*/


/*

1. const ���ε�ֻ�����������ڶ����ͬʱ��ʼ��
2. const ����һ�����
3. const ��������
4. const ����ָ��
5. const ���κ�������
   ��������ֵ�ں������ڲ����޸�ʱʹ��
   void Func(const int *p);
6. const ���κ�������ֵ
   ��������ֵ�����޸�ʱʹ��
   const int Func(void);

*/

#include <stdio.h>

int main()
{
	int val = 0x00;
	int valarray[2] = { 0x01, 0x02};
	
	// int const val = 0x03;
	const int cval = 0x03;				           /* const ����һ����� */
    
	//int const cvalarray[2] = {0x04,0x05};
	const int cvalarray[2] = { 0x04,0x05 };	       /* const �������� */

	//int const *cvalp = &valarray[0];
	const int* cvalp = &valarray[0];			  /* const ���� *cvalp��*cvalp ���ɱ䣬��ָ����� cvalp ָ���ڴ浥Ԫ�������ǲ��ɱ�ģ���cvalp �ǿɱ䣬��ָ����� cvalp ָ����ڴ浥Ԫ�ǿɱ�� */
	//*cvalp = 0x06;							  /* ������ */
	//cvalp = &cvalarray[1];					  /* ��  �� */
	

	int* const pvalc = &valarray[0];              /* const ���� pvalc��pvalc ���ɱ䣬��ָ����� pvalc ָ���ڴ浥Ԫ�ǲ��ɱ�ģ��� *pvalc �ǿɱ䣬��ָ����� pvalc ָ���ڴ浥Ԫ�������ǿɱ�� */
	//*pvalc = 0x07;                              /* ��  �� */
	//pvalc = &valarray[1];                       /* ������ */
		
	return 0;

}

