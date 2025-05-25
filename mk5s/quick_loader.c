/* † MKKKKKS † */
/*!	@brief  Quick File Loader
	@author  NullPopPo
	@sa  https://github.com/NullPopPoLab/MKKKKKS
*/
#include "./quick_loader.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */
//! get first pointer of loaded body 
void* qloaded_bgn(QLoaded* inst){
	return inst+1;
}

//! get terminate pointer of loaded body 
void* qloaded_end(QLoaded* inst){
	return (char*)qloaded_bgn(inst)+inst->readsize;
}

//! get footer pointer of loaded body 
QLoadedFoot* qloaded_foot(QLoaded* inst){
	return (QLoadedFoot*)((char*)qloaded_bgn(inst)+inst->filesize);
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */
QLoaded* qload(const char* path,bool shortable){

	QLoaded* inst=NULL;
	struct stat st;
	FILE* fp;

	// detect file size 
	if(stat(path,&st)==-1)return NULL;
	fp=fopen(path,"rb");
	if(fp==NULL)return NULL;

	inst=malloc(sizeof(QLoadedHead)+st.st_size+sizeof(QLoadedFoot));
	if(inst){
		// try read 
		inst->filesize=st.st_size;
		inst->readsize=fread(qloaded_bgn(inst),1,inst->filesize,fp);
	}

	fclose(fp);
	if(!shortable && inst->readsize<inst->filesize){
		// reject incompleted load 
		qunload(&inst);
	}
	if(!inst)return NULL;

	// cleanup footer and misloaded area
	memset((char*)qloaded_bgn(inst)+inst->readsize,0,inst->filesize-inst->readsize+sizeof(QLoadedFoot));
	return inst;
}

/* ----------------------------------------------------------------------- */
void qunload(QLoaded** instp){
	if(!*instp)return;
	free(*instp);
	*instp=NULL;
}
