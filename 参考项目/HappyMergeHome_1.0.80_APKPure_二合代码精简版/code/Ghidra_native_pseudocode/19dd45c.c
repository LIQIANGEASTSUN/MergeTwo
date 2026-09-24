
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019ed45c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_019ed670 + 0x19ed474);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ed674 + 0x19ed488));
    func_0x01438628(*(undefined4 *)(_UNK_019ed678 + 0x19ed494));
    func_0x01438628(*(undefined4 *)(_UNK_019ed67c + 0x19ed4a0));
    func_0x01438628(*(undefined4 *)(_UNK_019ed680 + 0x19ed4ac));
    func_0x01438628(*(undefined4 *)(_UNK_019ed684 + 0x19ed4b8));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = 0;
  uStack_28 = 0;
  iVar2 = func_0x02953fd4(0x373d,0);
  if (iVar2 == 0) {
    iVar2 = func_0x019ed90c(param_1);
    if (iVar2 != 0) {
      uVar7 = func_0x019f0198(param_1);
      iVar3 = (int)uVar7;
      iVar2 = 0;
      iVar1 = (int)((ulonglong)uVar7 >> 0x20);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar1 = iVar3;
      }
      if (iVar3 != 0 && iVar2 != 0) {
        func_0x0152da0c(&uStack_28,iVar1,**(undefined4 **)(_UNK_019ed688 + 0x19ed554));
        puVar6 = *(undefined4 **)(_UNK_019ed68c + 0x19ed568);
        do {
          uVar5 = func_0x015109ec(&uStack_28,*puVar6);
          iVar2 = iStack_1c;
          if (uVar5 == 0) {
            iVar2 = 9;
            goto LAB_019ed5b4;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while ((*(int *)(iVar2 + 0x30) != 2) || (*(int *)(iVar2 + 0x2c) <= *(int *)(iVar2 + 0x10))
                );
        iVar2 = 8;
LAB_019ed5b4:
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_019ed690 + 0x19ed5c0));
        uVar5 = uVar5 & iVar2 == 8;
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x373d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x02869630(iVar2,param_1,0);
  }
  return uVar5;
}

