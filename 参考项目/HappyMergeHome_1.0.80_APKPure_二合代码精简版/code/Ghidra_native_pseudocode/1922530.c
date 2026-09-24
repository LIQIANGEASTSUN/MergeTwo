
/* WARNING: Possible PIC construction at 0x01932664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01932668) */
/* WARNING: Removing unreachable block (ram,0x01932674) */
/* WARNING: Removing unreachable block (ram,0x01932678) */
/* WARNING: Removing unreachable block (ram,0x019326a0) */
/* WARNING: Removing unreachable block (ram,0x01932684) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01932530(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_019326b8 + 0x1932550);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019326bc + 0x1932564));
    func_0x01438628(*(undefined4 *)(_UNK_019326c0 + 0x1932570));
    func_0x01438628(*(undefined4 *)(_UNK_019326c4 + 0x193257c));
    func_0x01438628(*(undefined4 *)(_UNK_019326c8 + 0x1932588));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x97bc,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019326cc + 0x19325ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019326d0 + 0x1932608));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_019326d4 + 0x193265c));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x97bc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0292acfc(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

