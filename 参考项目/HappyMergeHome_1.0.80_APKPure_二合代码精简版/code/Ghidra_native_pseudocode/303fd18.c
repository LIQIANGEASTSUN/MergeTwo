
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0304fd18(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x02953fd4(0x7432,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x7432,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = FUN_0304411c(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_0304fa78(param_1,param_2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_0304f8d0(param_1,param_2);
    if (iVar3 != 0) {
      FUN_026ecbfc(iVar3,1,0);
      pcVar6 = (char *)(_UNK_0304f6a8 + 0x304f1f8);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_0304f6ac + 0x304f20c));
        func_0x01438628(*(undefined4 *)(_UNK_0304f6b0 + 0x304f218));
        func_0x01438628(*(undefined4 *)(_UNK_0304f6b4 + 0x304f224));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x02953fd4(0x20ed,0);
      if (iVar3 != 0) {
        iVar3 = func_0x029540a4(0x20ed,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01523a6c(&uStack_30,param_1,0);
        iVar5 = *(int *)(iVar3 + 8);
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar4 = 2;
        if (iVar3 == 0) {
          uVar4 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4);
        return;
      }
      iVar3 = FUN_0304411c(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0x14) == '\0') {
        bVar9 = true;
        iVar3 = 0;
        iVar5 = 0;
        puVar10 = *(undefined4 **)(_UNK_0304f6b8 + 0x304f2cc);
        puVar11 = *(undefined4 **)(_UNK_0304f6bc + 0x304f2d4);
        while( true ) {
          iVar2 = FUN_0304411c(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar3) break;
          iVar2 = FUN_0304411c(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar2 + 0x10);
          iVar2 = FUN_0304411c(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar2 + 0x24);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x04cd2d7c(iVar8,uVar7,*puVar11);
          if (iVar2 != 0) {
            iVar2 = FUN_0304411c(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 9) != '\0') {
              iVar2 = FUN_0304411c(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x6c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0xc);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar5 = iVar5 + (*(byte *)(iVar2 + 0xd) ^ 1);
            }
            iVar2 = FUN_0304411c(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            bVar1 = *(byte *)(iVar2 + 0xc);
            iVar2 = FUN_0304411c(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar5 = iVar5 + (bVar1 ^ 1) + (*(byte *)(iVar2 + 0x28) ^ 1);
          }
          iVar2 = FUN_0304411c(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar2 + 0xc) == '\0') {
LAB_0304f650:
            bVar9 = false;
          }
          else {
            iVar2 = FUN_0304411c(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 0xd) == '\0') goto LAB_0304f650;
            iVar2 = FUN_0304411c(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 0x28) == '\0') {
              bVar9 = false;
            }
          }
          iVar3 = iVar3 + 1;
        }
        if (bVar9) {
          iVar3 = FUN_0304411c(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          FUN_026ec720(iVar3,1,0);
        }
        *(int *)(param_1 + 0x54) = iVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      return;
    }
  }
  return;
}

