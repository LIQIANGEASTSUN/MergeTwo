
/* WARNING: Possible PIC construction at 0x0164eec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164eec4) */
/* WARNING: Removing unreachable block (ram,0x0164eed0) */
/* WARNING: Removing unreachable block (ram,0x0164eed4) */
/* WARNING: Removing unreachable block (ram,0x0164eefc) */
/* WARNING: Removing unreachable block (ram,0x0164eee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0164ed8c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0164ef14 + 0x164edac);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164ef18 + 0x164edc0));
    func_0x01438628(*(undefined4 *)(_UNK_0164ef1c + 0x164edcc));
    func_0x01438628(*(undefined4 *)(_UNK_0164ef20 + 0x164edd8));
    func_0x01438628(*(undefined4 *)(_UNK_0164ef24 + 0x164ede4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8642,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0164ef28 + 0x164ee48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164ef2c + 0x164ee64));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x38);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_0164ef30 + 0x164eeb8));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x8642,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02921b88(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

