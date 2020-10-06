/*

# Date     2020/10/06
# Creator  Alvin
# Theme    const 关键字

*/


/*

1. const 修饰的只读变量必须在定义的同时初始化
2. const 修饰一般变量
3. const 修饰数组
4. const 修饰指针
5. const 修饰函数参数
   函数参数值在函数体内不被修改时使用
   void Func(const int *p);
6. const 修饰函数返回值
   函数返回值不被修改时使用
   const int Func(void);

*/

#include <stdio.h>

int main()
{
	int val = 0x00;
	int valarray[2] = { 0x01, 0x02};
	
	// int const val = 0x03;
	const int cval = 0x03;				           /* const 修饰一般变量 */
    
	//int const cvalarray[2] = {0x04,0x05};
	const int cvalarray[2] = { 0x04,0x05 };	       /* const 修饰数组 */

	//int const *cvalp = &valarray[0];
	const int* cvalp = &valarray[0];			  /* const 修饰 *cvalp，*cvalp 不可变，即指针变量 cvalp 指向内存单元的内容是不可变的，而cvalp 是可变，即指针变量 cvalp 指向的内存单元是可变的 */
	//*cvalp = 0x06;							  /* 不允许 */
	//cvalp = &cvalarray[1];					  /* 允  许 */
	

	int* const pvalc = &valarray[0];              /* const 修饰 pvalc，pvalc 不可变，即指针变量 pvalc 指向内存单元是不可变的，而 *pvalc 是可变，即指针变量 pvalc 指向内存单元的内容是可变的 */
	//*pvalc = 0x07;                              /* 允  许 */
	//pvalc = &valarray[1];                       /* 不允许 */
		
	return 0;

}

