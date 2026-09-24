
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfd93c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bfdde4 + 0x2bfd95c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfdde8 + 0x2bfd970));
    func_0x01438628(*(undefined4 *)(_UNK_02bfddec + 0x2bfd97c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfddf0 + 0x2bfd988));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d54,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    _uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                          *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x024eecb8(param_1,0);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_44 = 0;
  uStack_48 = uVar5;
  func_0x024efc6c(&uStack_40,iVar1,uVar9,uVar8);
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_3c,uStack_40);
  uStack_28 = uStack_38;
  *(undefined4 *)(param_1 + 0x80) = uStack_38;
  uVar2 = FUN_02becc6c(param_1,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  if (uVar2 != 0xffffffff) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x014388e8();
    }
    iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3f4b4(iVar1,0);
    if (iVar1 != -1) {
      fVar3 = (float)func_0x024ef5b8(0);
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(float *)(iVar1 + 0x18) <= fVar3) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar2) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x14) != -1) {
          iVar1 = *(int *)(param_1 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar2) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(**(int **)(_UNK_02bfddf4 + 0x2bfdb84) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024ef144(uVar8,0,0);
          if (iVar1 != 0) {
            iVar1 = *(int *)(param_1 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar2) {
              func_0x014388e8();
            }
            iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 0x1c) != 0) {
              iVar1 = *(int *)(param_1 + 0x44);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                func_0x014388e8();
              }
              iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
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
              if (*(int *)(iVar1 + 0x20) == 1) {
                piVar4 = (int *)func_0x01ae369c(0);
                if (piVar4 == (int *)0x0) {
                  func_0x014388e4();
                }
                iVar1 = (**(code **)(*piVar4 + 0x110))(piVar4,0,*(undefined4 *)(*piVar4 + 0x114));
                if (iVar1 == 0) {
                  return;
                }
              }
            }
          }
          iVar1 = *(int *)(param_1 + 0x44);
          *(undefined1 *)(param_1 + 0x84) = 1;
          *(uint *)(param_1 + 0xb0) = uVar2;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar2) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024eecb8(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x024f1154(iVar1,0);
          iVar1 = *(int *)(param_1 + 0x44);
          uVar2 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar2) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02c2544c(iVar1,0);
          FUN_02bf06ec(param_1);
          FUN_02bee744(param_1,0xffffffff,1);
          if (*(int *)(**(int **)(_UNK_02bfddf8 + 0x2bfdd88) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02bfddfc + 0x2bfdda4));
          uVar8 = *(undefined4 *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_48 = 0;
          func_0x02c3e4a4(iVar1,1,uVar8,1);
        }
      }
    }
  }
  return;
}

