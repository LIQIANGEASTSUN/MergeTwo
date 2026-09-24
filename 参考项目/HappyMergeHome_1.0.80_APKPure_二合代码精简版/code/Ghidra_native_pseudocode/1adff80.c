
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aeff80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01af0250 + 0x1aeff98);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af0254 + 0x1aeffac));
    func_0x01438628(*(undefined4 *)(_UNK_01af0258 + 0x1aeffb8));
    func_0x01438628(*(undefined4 *)(_UNK_01af025c + 0x1aeffc4));
    func_0x01438628(*(undefined4 *)(_UNK_01af0260 + 0x1aeffd0));
    *pcVar6 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x02953fd4(0xa4d7,0);
  if (iVar1 != 0) {
    iVar8 = func_0x029540a4(0xa4d7,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar1 = *(int *)(iVar8 + 8);
    uVar7 = *(undefined4 *)(iVar8 + 0xc);
    iVar8 = *(int *)(iVar8 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar8 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar1,uVar7,&uStack_30,uVar5,0,0);
    iVar8 = func_0x024f56f0(&uStack_30,0,0);
    return iVar8;
  }
  iVar1 = FUN_01ae99ac(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_01ae5790(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      iVar1 = FUN_01ae5790(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_01ae5790(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x1c)) {
          iVar1 = func_0x01af0270(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar1 + 0xc);
          if (0 < iVar2) {
            iVar3 = FUN_01ae5790(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x1c);
            iVar4 = FUN_01ae99ac(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar4 + 0x50) < iVar3 * iVar2) {
              iVar2 = 0;
              if (0 < *(int *)(iVar1 + 0xc)) {
                iVar2 = 0;
                iVar8 = 0;
                puVar9 = *(undefined4 **)(_UNK_01af0264 + 0x1af0140);
                do {
                  if (*(int *)(**(int **)(_UNK_01af0268 + 0x1af0148) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01af026c + 0x1af0164));
                  uVar7 = func_0x024f0530(iVar1,iVar8,*puVar9);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = func_0x02be153c(iVar3,uVar7,0);
                  if (iVar3 != 0) {
                    iVar3 = FUN_01ae5790(param_1);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar3 + 0x1c) + iVar2;
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(iVar1 + 0xc));
              }
              iVar1 = func_0x01af0640(param_1);
              iVar8 = 0;
              if (iVar1 != 0) {
                iVar1 = FUN_01ae99ac(param_1);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar1 + 0x50) < iVar2) {
                  iVar8 = FUN_01ae99ac(param_1);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar8 + 0x50);
                  iVar1 = FUN_01ae5790(param_1);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar1 + 0x1c) + iVar8;
                  if (iVar2 < iVar8) {
                    iVar8 = iVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar8;
}

