#include "Buffer/StaticBuffer.h"
#include "Cache/OpenRelTable.h"
#include "Disk_Class/Disk.h"
#include "FrontendInterface/FrontendInterface.h"
#include <iostream>

int main(int argc, char *argv[]) {
  /* Initialize the Run Copy of Disk */
  Disk disk_run;
  StaticBuffer buffer;
  
  OpenRelTable cache;

  // StaticBuffer buffer;
  // OpenRelTable cache;

  // // create objects for the relation catalog and attribute catalog
  // RecBuffer relCatBuffer(RELCAT_BLOCK);
  // RecBuffer attrCatBuffer(ATTRCAT_BLOCK);

  // HeadInfo relCatHeader;
  // HeadInfo attrCatHeader;

  // // load the headers of both the blocks into relCatHeader and attrCatHeader.
  // relCatBuffer.getHeader(&relCatHeader);
  // attrCatBuffer.getHeader(&attrCatHeader);


  
  // //for i = 0 and i = 1 (i.e RELCAT_RELID and ATTRCAT_RELID)
  // for(int relid=0; relid < relCatHeader.numEntries ;relid++)
  // {

  //     //get the relation catalog entry using RelCacheTable::getRelCatEntry()
  //     RelCatEntry relCatBuf;
  //     RelCacheTable::getRelCatEntry(relid,&relCatBuf);
  //     printf("Relation: %s\n", relCatBuf.relName);
  //     AttrCatEntry attrCatBuf;

  //     //for j = 0 to numAttrs of the relation - 1
  //     for(int offset=0 ; offset < relCatBuf.numAttrs ; offset++)
  //     { 
  //         //get the attribute catalog entry for (rel-id i, attribute offset j) in attrCatEntry using AttrCacheTable::getAttrCatEntry()
  //         AttrCacheTable::getAttrCatEntry(relid, offset, &attrCatBuf);
  //         const char *type = attrCatBuf.attrType == NUMBER ? "NUM" : "STR";
  //         printf("  %s: %s\n", attrCatBuf.attrName, type);
  //     }

  //     printf("\n");

  // }

  return FrontendInterface::handleFrontend(argc, argv);

 // return 0;
  //return FrontendInterface::handleFrontend(argc, argv);
}
