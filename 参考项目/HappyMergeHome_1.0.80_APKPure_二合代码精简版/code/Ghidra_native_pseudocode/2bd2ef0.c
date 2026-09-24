
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be2ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02be3148 + 0x2be2f10);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be314c + 0x2be2f24));
    func_0x01438628(*(undefined4 *)(_UNK_02be3150 + 0x2be2f30));
    func_0x01438628(*(undefined4 *)(_UNK_02be3154 + 0x2be2f3c));
    func_0x01438628(*(undefined4 *)(_UNK_02be3158 + 0x2be2f48));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5d19,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d19,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = FUN_02bad204(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02be315c + 0x2be2fd4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be3160 + 0x2be2ff0));
  uVar5 = *(undefined4 *)(iVar1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x029a6fa8(iVar2,uVar5,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(iVar1 + 0x60) != '\0') {
    return;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 == 6) {
    iVar3 = FUN_02be2d0c(param_1,param_2,param_3);
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_02bada20(param_1,param_2,param_3);
  }
  else {
    if (iVar3 != 1) goto LAB_02be310c;
    iVar3 = FUN_02baed80(param_1,param_2,param_3);
    if (iVar3 < 1) {
      if (*(int *)(**(int **)(_UNK_02be3164 + 0x2be3070) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be3168 + 0x2be308c));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02c4acc8(iVar3,iVar2,0);
      if (iVar2 == 0) {
        uStack_28 = 0;
        iVar3 = FUN_02bd880c(param_1,param_2,&uStack_28,param_3);
      }
      else {
        uStack_24 = 0;
        iVar3 = FUN_02bd694c(param_1,param_2,&uStack_24,param_3);
      }
      if (iVar3 < 1) goto LAB_02be310c;
    }
  }
  FUN_026f76ac(iVar1,iVar3,0);
LAB_02be310c:
  FUN_026f75f0(iVar1,1,0);
  return;
}

