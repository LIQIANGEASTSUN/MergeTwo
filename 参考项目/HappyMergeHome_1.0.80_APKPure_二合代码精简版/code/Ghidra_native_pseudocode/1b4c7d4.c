
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5c7d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01b5c974 + 0x1b5c7ec);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5c978 + 0x1b5c800));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x188b,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_01b5c97c + 0x1b5c85c);
    iVar1 = **(int **)(*piVar5 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0x1a91,0,0);
    iVar4 = **(int **)(*piVar5 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (iVar1 == 0) {
      uVar6 = 0x1a91;
    }
    else {
      iVar1 = func_0x02b63a9c(iVar4,0x1a92,0,0);
      if (iVar1 == 0) {
        param_1 = func_0x01b87984(0);
        if (param_1 == 0) {
          func_0x014388e4();
        }
        pcVar3 = (char *)(_UNK_01b96574 + 0x1b964cc);
        if (*pcVar3 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01b96578 + 0x1b964e0),0);
          *pcVar3 = '\x01';
        }
        iVar1 = func_0x02953fd4(0x188d,0);
        if (iVar1 == 0) {
          iVar1 = **(int **)(**(int **)(_UNK_01b9657c + 0x1b96538) + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b2f170(iVar1,0);
          if (iVar1 != 0xb) {
            return 0;
          }
          pcVar3 = (char *)(_UNK_01b96268 + 0x1b96158);
          if (*pcVar3 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_01b9626c + 0x1b9616c));
            *pcVar3 = '\x01';
          }
          iVar1 = func_0x02953fd4(0x188e,0);
          if (iVar1 == 0) {
            piVar5 = *(int **)(_UNK_01b96270 + 0x1b961c8);
            iVar1 = **(int **)(*piVar5 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02b67784(iVar1,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(*piVar5 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02b63a9c(iVar1,0x1a92,0,0);
              if (iVar1 == 0) {
                iVar1 = **(int **)(*piVar5 + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uStack_18 = 0;
                uVar6 = func_0x02b6127c(iVar1,0x1a92,0,0);
                return uVar6;
              }
            }
            return 0;
          }
          iVar1 = func_0x029540a4(0x188e,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
        }
        else {
          iVar1 = func_0x029540a4(0x188d,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
        }
        goto SUB_02869630;
      }
      iVar1 = **(int **)(*piVar5 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b63a9c(iVar1,0x1a93,0,0);
      if (iVar1 != 0) {
        return 0;
      }
      iVar4 = **(int **)(*piVar5 + 0x5c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0x1a93;
    }
    uStack_18 = 0;
    uVar6 = func_0x02b6127c(iVar4,uVar6,0,0);
    return uVar6;
  }
  iVar1 = func_0x029540a4(0x188b,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
SUB_02869630:
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
  uVar6 = func_0x024f56e0(&uStack_30,0,0);
  return uVar6;
}

