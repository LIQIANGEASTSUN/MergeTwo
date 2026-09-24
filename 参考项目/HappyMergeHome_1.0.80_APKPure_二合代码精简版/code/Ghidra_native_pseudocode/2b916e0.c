
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba16e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int unaff_r8;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_02ba1cb4 + 0x2ba16f8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cb8 + 0x2ba170c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cbc + 0x2ba1718));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cc0 + 0x2ba1724));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cc4 + 0x2ba1730));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cc8 + 0x2ba173c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1ccc + 0x2ba1748));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cd0 + 0x2ba1754));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cd4 + 0x2ba1760));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cd8 + 0x2ba176c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1cdc + 0x2ba1778));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1ce0 + 0x2ba1784));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1ce4 + 0x2ba1790));
    func_0x01438628(*(undefined4 *)(_UNK_02ba1ce8 + 0x2ba179c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xfbf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfbf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
    return;
  }
  piVar6 = *(int **)(_UNK_02ba1cec + 0x2ba1800);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,5,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02b67d68(iVar1,5,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
    iVar1 = iVar2;
  }
  if (iVar2 == 0 || iVar3 == 0) {
    return;
  }
  iVar3 = **(int **)(*piVar6 + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x02b67abc(iVar3,3,0);
  if (iVar3 != 0) {
    iVar3 = **(int **)(*piVar6 + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02b667ac(iVar3,0);
    if (iVar3 != 0) goto LAB_02ba18e0;
  }
  iVar3 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_02ba1cf0 + 0x2ba18d8));
LAB_02ba18e0:
  uVar4 = func_0x024eeee8(iVar3,0);
  iVar1 = **(int **)(**(int **)(_UNK_02ba1cf4 + 0x2ba18f8) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c3d868(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x02bebefc(iVar1,uVar4,0);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    unaff_r8 = iVar3;
  }
  if (iVar3 != 0 && iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02ba1cf8 + 0x2ba1960) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba1cfc + 0x2ba197c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02bdd790(iVar1,1,0,0,0);
    if (-1 < iVar1) {
      func_0x0152da0c(&uStack_48,unaff_r8,**(undefined4 **)(_UNK_02ba1d00 + 0x2ba19c8));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar7 = *(undefined4 **)(_UNK_02ba1d04 + 0x2ba19e4);
      piVar6 = *(int **)(_UNK_02ba1d08 + 0x2ba19ec);
      do {
        do {
          do {
            iVar3 = func_0x04878f14(&uStack_38,*puVar7);
            iVar1 = iStack_2c;
            if (iVar3 == 0) {
              func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02ba1d14 + 0x2ba1b04));
              puVar7 = *(undefined4 **)(_UNK_02ba1d18 + 0x2ba1b20);
              iVar1 = func_0x0152983c(unaff_r8,0,*puVar7);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar1 + 0x1c) != 0) {
                iVar1 = func_0x0152983c(unaff_r8,0,*puVar7);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0xc);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x1c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar1 + 0x1c) == 99) {
                  iVar1 = func_0x0152983c(unaff_r8,0,*puVar7);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x11c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar1 + 0xc) != 1) {
                    return;
                  }
                }
              }
              uVar4 = func_0x0152983c(unaff_r8,0,*puVar7);
              func_0x02baa56c(param_1,uVar4);
              return;
            }
            if (iStack_2c == 0) {
              func_0x014388e4();
            }
            uVar4 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024eec50(uVar4,0,0);
          } while (iVar3 != 0);
          iVar3 = *(int *)(iVar1 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02c251d8(iVar3,0);
        } while (iVar3 != 0);
        iVar3 = *(int *)(iVar1 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0x1c) == 0) break;
        iVar3 = *(int *)(iVar1 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0x1c) != 99) break;
        iVar3 = *(int *)(iVar1 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x11c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
      } while (*(int *)(iVar3 + 0xc) != 1);
      func_0x02baa56c(param_1,iVar1);
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02ba1d0c + 0x2ba1aec));
    }
  }
  return;
}

