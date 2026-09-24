
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd98a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  pcVar5 = (char *)(_UNK_02bd9a10 + 0x2bd98c4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd9a14 + 0x2bd98d8));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5cf1,0);
  if (iVar3 == 0) {
    if (param_2 != -1) {
      iVar3 = FUN_02bad050(param_1,param_3);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      puVar6 = *(undefined4 **)(_UNK_02bd9a18 + 0x2bd9978);
      uVar7 = func_0x03b780b0(iVar3,param_2,*puVar6);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 == 0) {
        func_0x014388e4();
        uVar4 = extraout_r1;
      }
      FUN_026f6e40((int)uVar7,uVar4,0,0,0);
      iVar3 = FUN_02bad050(param_1,param_3);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,param_2,*puVar6);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      pcVar5 = (char *)(_UNK_026f7810 + 0x26f7788);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026f7814 + 0x26f779c),0,0);
        func_0x01438628(*(undefined4 *)(_UNK_026f7818 + 0x26f77a8));
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar3 + 0x6c) == 0) {
        return;
      }
      piVar1 = *(int **)(_UNK_026f781c + 0x26f77c8);
      *(undefined4 *)(iVar3 + 0x6c) = 0;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f7820 + 0x26f77e8));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(uint *)(iVar3 + 0x60);
      *(uint *)(iVar3 + 0x60) = uVar2 + 1;
      *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
      return;
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5cf1,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar3,param_1,param_2,param_3,0);
  }
  return;
}

