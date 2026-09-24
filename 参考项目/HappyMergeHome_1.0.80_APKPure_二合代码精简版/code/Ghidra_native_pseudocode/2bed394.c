
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bfd394(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bfd804 + 0x2bfd3b0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfd808 + 0x2bfd3c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd80c + 0x2bfd3d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd810 + 0x2bfd3dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd814 + 0x2bfd3e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd818 + 0x2bfd3f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ee9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ee9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0289516c + 0x2895078);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02895170 + 0x289508c),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02895174 + 0x289515c));
    return uVar6;
  }
  if (param_2 != 0) {
    piVar9 = *(int **)(_UNK_02bfd81c + 0x2bfd45c);
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar6,0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar4) {
        func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
      }
      iVar1 = 4;
      piVar10 = *(int **)(_UNK_02bfd820 + 0x2bfd4e4);
      while( true ) {
        iVar4 = *(int *)(param_1 + 0x44);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar11 = iVar1 - 4;
        if (*(int *)(iVar4 + 0xc) <= (int)uVar11) break;
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bfd824 + 0x2bfd520));
        iVar7 = *(int *)(param_2 + 0xc);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar7 + 0x1c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = FUN_02be5cb0(iVar4,uVar6,0);
        iVar7 = *(int *)(param_1 + 0x44);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar11) {
          func_0x014388e8();
        }
        iVar7 = *(int *)(iVar7 + iVar1 * 4);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x02c3f4b4(iVar7,0);
        if (iVar7 != -1) {
          iVar7 = *(int *)(param_1 + 0x44);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar7 + 0xc) <= uVar11) {
            func_0x014388e8();
          }
          iVar7 = *(int *)(iVar7 + iVar1 * 4);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar7 + 0x14) == 1) {
            iVar7 = *(int *)(param_1 + 0x44);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar7 + 0xc) <= uVar11) {
              func_0x014388e8();
            }
            iVar7 = *(int *)(iVar7 + iVar1 * 4);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar7 + 0xc);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = func_0x024ef144(uVar6,0,0);
            if (iVar4 != 0 && iVar7 != 0) {
              iVar7 = *(int *)(param_1 + 0x44);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar7 + 0xc) <= uVar11) {
                func_0x014388e8();
              }
              iVar7 = *(int *)(iVar7 + iVar1 * 4);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar6 = func_0x02c3f4b4(iVar7,0);
              iVar4 = func_0x02b53c1c(iVar4,uVar6,0);
              if (iVar4 != 0) {
                if (*(int *)(*piVar10 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bfd828 + 0x2bfd6bc));
                iVar7 = *(int *)(param_2 + 0xc);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(param_1 + 0x44);
                uVar6 = *(undefined4 *)(iVar7 + 0x11c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar8 + 0xc) <= uVar11) {
                  func_0x014388e8();
                }
                iVar7 = *(int *)(iVar8 + iVar1 * 4);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uVar3 = func_0x02c3f4b4(iVar7,0);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = FUN_02be6048(iVar4,uVar6,uVar3,0);
                piVar9 = *(int **)(_UNK_02bfd82c + 0x2bfd748);
                piVar10 = *(int **)(_UNK_02bfd830 + 0x2bfd750);
                if (iVar4 == 0) {
                  iVar7 = *(int *)(param_1 + 0x44);
                  iVar4 = *(int *)(param_1 + 0x74);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(uint *)(iVar7 + 0xc) <= uVar11) {
                    func_0x014388e8();
                  }
                  uVar6 = *(undefined4 *)(iVar7 + iVar1 * 4);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = *(int *)(iVar4 + 8);
                  uVar11 = *(uint *)(iVar4 + 0xc);
                  piVar9 = *(int **)(_UNK_02bfd834 + 0x2bfd7a4);
                  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
                  iVar8 = *piVar9;
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar11 < *(uint *)(iVar7 + 0xc)) {
                    *(uint *)(iVar4 + 0xc) = uVar11 + 1;
                    puVar2 = (undefined4 *)(iVar7 + uVar11 * 4 + 0x10);
                    *puVar2 = uVar6;
                    func_0x014385cc(puVar2,uVar6);
                  }
                  else {
                    func_0x0152874c(iVar4,uVar6,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  piVar9 = *(int **)(_UNK_02bfd838 + 0x2bfd7fc);
                  piVar10 = *(int **)(&UNK_02bfd804 + _UNK_02bfd83c);
                }
              }
            }
          }
        }
        iVar1 = iVar1 + 1;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x74);
}

