
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bd4ff4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_02bd5124 + 0x2bd5014);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd5128 + 0x2bd5028));
    func_0x01438628(*(undefined4 *)(_UNK_02bd512c + 0x2bd5034));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cdf,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_3);
    if (iVar1 != 0) {
      uVar3 = FUN_02bd4e5c(param_1,param_2,param_3);
      if (*(int *)(**(int **)(_UNK_02bd5130 + 0x2bd50c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bd5134 + 0x2bd50e4));
      uVar2 = *(undefined4 *)(iVar1 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      pcVar7 = (char *)(_UNK_02c4c460 + 0x2c4c30c);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c4c464 + 0x2c4c320),uVar2,uVar3,0);
        func_0x01438628(*(undefined4 *)(_UNK_02c4c468 + 0x2c4c32c));
        *pcVar7 = '\x01';
      }
      uVar6 = 0;
      iVar1 = func_0x02953fd4(0x5ce0,0);
      if (iVar1 == 0) {
        iVar1 = func_0x02c4c030(iVar4,uVar2);
        if (iVar1 != 0) {
          if (*(int *)(**(int **)(_UNK_02c4c46c + 0x2c4c3ac) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c4c470 + 0x2c4c3c8));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar6 = 0;
          iVar1 = func_0x029b0f58(iVar4,iVar1,0);
          if (iVar1 != 0) {
            unaff_r4 = *(int *)(iVar1 + 0x28);
          }
          if (iVar1 != 0 && unaff_r4 != 0) {
            uVar5 = *(uint *)(unaff_r4 + 0xc);
            if ((int)uVar3 < (int)uVar5) {
              if (uVar5 <= uVar3) {
                func_0x014388e8();
              }
              iVar1 = unaff_r4 + uVar3 * 4;
            }
            else {
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (iVar1 == 0) {
                return 0;
              }
              if ((int)(*(uint *)(iVar1 + 0xc) + uVar5) <= (int)uVar3) {
                return 0;
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar3 - uVar5) {
                func_0x014388e8();
              }
              iVar1 = iVar1 + (uVar3 - uVar5) * 4;
            }
            uVar6 = *(undefined4 *)(iVar1 + 0x10);
          }
        }
      }
      else {
        iVar1 = func_0x029540a4(0x5ce0,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x028812d4(iVar1,iVar4,uVar2,uVar3,0);
      }
      return uVar6;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x5cdf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

