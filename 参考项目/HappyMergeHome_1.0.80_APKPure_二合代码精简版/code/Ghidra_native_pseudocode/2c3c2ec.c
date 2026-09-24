
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c4c2ec(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_02c4c460 + 0x2c4c30c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4c464 + 0x2c4c320));
    func_0x01438628(*(undefined4 *)(_UNK_02c4c468 + 0x2c4c32c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x5ce0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02c4c030(param_1,param_2);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02c4c46c + 0x2c4c3ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c4c470 + 0x2c4c3c8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = 0;
      iVar1 = func_0x029b0f58(iVar2,iVar1,0);
      if (iVar1 != 0) {
        unaff_r4 = *(int *)(iVar1 + 0x28);
      }
      if (iVar1 != 0 && unaff_r4 != 0) {
        uVar3 = *(uint *)(unaff_r4 + 0xc);
        if ((int)param_3 < (int)uVar3) {
          if (uVar3 <= param_3) {
            func_0x014388e8();
          }
          iVar1 = unaff_r4 + param_3 * 4;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x2c);
          if (iVar1 == 0) {
            return 0;
          }
          if ((int)(*(uint *)(iVar1 + 0xc) + uVar3) <= (int)param_3) {
            return 0;
          }
          if (*(uint *)(iVar1 + 0xc) <= param_3 - uVar3) {
            func_0x014388e8();
          }
          iVar1 = iVar1 + (param_3 - uVar3) * 4;
        }
        uVar5 = *(undefined4 *)(iVar1 + 0x10);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ce0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x028812d4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar5;
}

