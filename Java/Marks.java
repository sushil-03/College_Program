//Given a list of marks ranging from 0 to 100 print no, of stduent who obtained from a given range.

import java.util.*;
public  class Marks{
	public static void main(String []args){
		int  marks[] = {10,29,56,6,87,99,45,12,5,45};
		int ztf=0,fts=0,ste=0,ett=0;		
		
		for(int i=0;i<marks.length;i++){
			int mark=marks[i];
			if(mark >=81 ){

				ett++;
			}else if(mark >=61){
						System.out.println(mark);
				ste++;
			}else if(mark >=41){
				fts++;
			}else{
				ztf++;
			}
		}
		System.out.println("Range b/w 81 to 100 " +ett);
		System.out.println("Range b/w 61 to 80 " +ste);
		System.out.println("Range b/w 41 to 60 " +fts);
		System.out.println("Range b/w 0 to 40 " +ztf);
	
	}
}