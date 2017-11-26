/* -
 *          Copyright (c) 2006-2017 All rights reserved.
 *              Department of Information Security
 *                     Sejong Univerity
 *
 * This code is contributed by Ki-Woong Park
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *  
 *  Author : Ki-Woong Park Sejong University
 *  E-mail : woongbak@sejong.ac.kr
 */

#include<stdio.h>
#include<stdlib.h>

int Test_Little_Endian();


int main()
{
	printf("             Sejong University\n");
	printf("       Department of Information Security\n");
	printf("This program is intended to determine whether this computer is little endian or not.\n\n");
	printf("Result: ");
	
	/*
	In accordance with the result of the functino, Test_Little_Endian()
	we will print a message..
	The_Little_endian message will return 1, in case of little endian..
	The_Little_endian message will return 0, in case of little endian..
	*/
	return 0;
}

int Test_Little_Endian()
{
   return 1;	
}
