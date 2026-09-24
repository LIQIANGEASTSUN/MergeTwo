
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bddeb4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar3 = (char *)(_UNK_02bde338 + 0x2bdded0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bde33c + 0x2bddee4));
    func_0x01438628(*(undefined4 *)(_UNK_02bde340 + 0x2bddef0));
    func_0x01438628(*(undefined4 *)(_UNK_02bde344 + 0x2bddefc));
    func_0x01438628(*(undefined4 *)(_UNK_02bde348 + 0x2bddf08));
    *pcVar3 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x02953fd4(0x5cff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cff,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar2,0,0);
    uVar8 = func_0x024f56e0(&uStack_38,0,0);
    return uVar8;
  }
  iVar1 = FUN_02bad050(param_1,param_2);
  if (iVar1 != 0) {
    bVar11 = false;
    if (param_2 < 0x3b) {
      if (param_2 != 0x12) {
        bVar11 = param_2 != 0x1b;
      }
    }
    else if (param_2 != 0x3b && param_2 != 0x59) {
      bVar11 = true;
    }
    uStack_28 = (uint)(param_2 == 0x12);
    iVar6 = 0;
    puVar10 = *(undefined4 **)(_UNK_02bde34c + 0x2bddfc4);
    while( true ) {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar6) break;
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03b780b0(iVar4,iVar6,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar9 = 0;
      if (*(int *)(iVar4 + 8) == -1) {
        if (bVar11) {
          return 0;
        }
        iVar4 = *(int *)(iVar1 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x03b780b0(iVar4,iVar6,*puVar10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar4 + 0xc) != 10) {
          return 0;
        }
      }
      else {
        while( true ) {
          iVar4 = *(int *)(iVar1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar9) break;
          if (iVar6 != iVar9) {
            if (bVar11) {
LAB_02bde048:
              iVar4 = *(int *)(iVar1 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b780b0(iVar4,iVar6,*puVar10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar1 + 0x10);
              iVar4 = *(int *)(iVar4 + 8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x03b780b0(iVar5,iVar9,*puVar10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (iVar4 == *(int *)(iVar5 + 8)) {
                iVar4 = *(int *)(iVar1 + 0x10);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x03b780b0(iVar4,iVar6,*puVar10);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0xc) == 1) {
                  iVar4 = *(int *)(iVar1 + 0x10);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar4 = func_0x03b780b0(iVar4,iVar9,*puVar10);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0xc) == -1) goto LAB_02bde130;
LAB_02bde1a8:
                  if (param_2 != 0x12) {
                    return uStack_28;
                  }
                  if (*(int *)(**(int **)(_UNK_02bde350 + 0x2bde1c0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bde354 + 0x2bde1dc));
                  iVar5 = *(int *)(iVar1 + 0x10);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = func_0x03b780b0(iVar5,iVar6,*puVar10);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  uVar7 = *(undefined4 *)(iVar5 + 8);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = func_0x029a6fa8(iVar4,uVar7,0);
                  iVar4 = 0;
                  if (iVar5 != 0) {
                    iVar4 = *(int *)(iVar5 + 0x1c);
                  }
                  if (iVar5 != 0 && iVar4 != 200) {
                    return uStack_28;
                  }
                }
                else {
LAB_02bde130:
                  iVar4 = *(int *)(iVar1 + 0x10);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar4 = func_0x03b780b0(iVar4,iVar9,*puVar10);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0xc) == 1) {
                    iVar4 = *(int *)(iVar1 + 0x10);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    iVar4 = func_0x03b780b0(iVar4,iVar6,*puVar10);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar4 + 0xc) != -1) goto LAB_02bde1a8;
                  }
                }
              }
            }
            else {
              iVar4 = *(int *)(iVar1 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b780b0(iVar4,iVar9,*puVar10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar4 + 0xc) != 10) {
                iVar4 = *(int *)(iVar1 + 0x10);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x03b780b0(iVar4,iVar6,*puVar10);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0xc) != 10) goto LAB_02bde048;
              }
            }
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar6 = iVar6 + 1;
    }
    uVar8 = 1;
  }
  return uVar8;
}

